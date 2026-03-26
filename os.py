import time
import RPi.GPIO as GPIO

# -----------------------
# CONFIGURATION
# -----------------------
SERVO_PINS = {
    "throttle": 17,
    "elevator": 18,
    "aileron": 27
}

FAILSAFE_TIMEOUT = 1.0  # seconds
last_signal_time = time.time()

# -----------------------
# SETUP
# -----------------------
GPIO.setmode(GPIO.BCM)

pwms = {}
for name, pin in SERVO_PINS.items():
    GPIO.setup(pin, GPIO.OUT)
    pwm = GPIO.PWM(pin, 50)
    pwm.start(7.5)  # neutral
    pwms[name] = pwm

# -----------------------
# HELPER FUNCTIONS
# -----------------------

def normalize_signal(value):
    """Convert raw signal to -1 to 1 range"""
    return max(min((value - 1500) / 500, 1), -1)

def apply_limits(value, min_val=-1, max_val=1):
    return max(min(value, max_val), min_val)

def signal_to_duty(signal):
    """Convert -1..1 to PWM duty cycle"""
    return 7.5 + signal * 2.5

# -----------------------
# FAILSAFE
# -----------------------

def failsafe():
    print("FAILSAFE ACTIVATED")
    pwms["throttle"].ChangeDutyCycle(5.0)   # low throttle
    pwms["elevator"].ChangeDutyCycle(8.0)   # slight up
    pwms["aileron"].ChangeDutyCycle(7.5)    # neutral

# -----------------------
# MAIN LOOP
# -----------------------

try:
    while True:
        # Simulated receiver input (replace with real input later)
        receiver_data = {
            "throttle": 1500,
            "elevator": 1500,
            "aileron": 1500
        }

        # Update signal timestamp
        last_signal_time = time.time()

        # Process each channel
        for channel, raw in receiver_data.items():
            norm = normalize_signal(raw)
            limited = apply_limits(norm)
            duty = signal_to_duty(limited)

            pwms[channel].ChangeDutyCycle(duty)

        # Fail-safe check
        if time.time() - last_signal_time > FAILSAFE_TIMEOUT:
            failsafe()

        time.sleep(0.02)

except KeyboardInterrupt:
    pass

finally:
    for pwm in pwms.values():
        pwm.stop()
    GPIO.cleanup()
