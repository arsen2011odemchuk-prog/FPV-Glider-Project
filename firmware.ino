 🧠 Flight Control Logic

The aircraft uses a simple state-based control system written in Arduino-style code.

Modes include:
- Manual flight (RC control)
- Return-to-Home if signal is lost
- Emergency landing if battery is low
- Beacon mode after landing to transmit GPS location
- Basic object-following logic (concept implementation)

This firmware demonstrates the decision logic and safety behavior of the aircraft.


// =============================
// FPV Glider Basic Autonomy Logic
// =============================

// --- Assumed sensors ---
bool rcSignal = true;
float batteryVoltage = 12.3;
float currentLat, currentLon;
float homeLat = 50.4501;
float homeLon = 30.5234;

// --- Thresholds ---
const float LOW_BATTERY = 10.5;

// --- Flight states ---
enum FlightMode {
  MANUAL,
  RETURN_TO_HOME,
  EMERGENCY_LAND,
  BEACON_MODE,
  OBJECT_FOLLOW
};

FlightMode mode = MANUAL;

void setup() {
  Serial.begin(9600);
  // initialize GPS, radio, sensors
}

void loop() {
  readSensors();
  decideMode();
  executeMode();
}

// ----------------------------

void readSensors() {
  // Read RC signal status
  // Read battery voltage
  // Read GPS position
}

void decideMode() {
  if (!rcSignal) {
    mode = RETURN_TO_HOME;
  }

  if (batteryVoltage < LOW_BATTERY) {
    mode = EMERGENCY_LAND;
  }
}

void executeMode() {
  switch (mode) {

    case MANUAL:
      manualControl();
      break;

    case RETURN_TO_HOME:
      flyTo(homeLat, homeLon);
      break;

    case EMERGENCY_LAND:
      landSafely();
      mode = BEACON_MODE;
      break;

    case BEACON_MODE:
      sendLocationBeacon();
      break;

    case OBJECT_FOLLOW:
      followObject();
      break;
  }
}

// ----------------------------

void manualControl() {
  // RC controls directly move control surfaces
}

void flyTo(float lat, float lon) {
  // Simple navigation toward GPS point
  Serial.println("Returning to home...");
}

void landSafely() {
  // Reduce throttle, glide down
  Serial.println("Emergency landing...");
}

void sendLocationBeacon() {
  Serial.print("GPS Location: ");
  Serial.print(currentLat);
  Serial.print(", ");
  Serial.println(currentLon);
}

void followObject() {
  // Placeholder for object detection logic
  Serial.println("Tracking object...");
}

