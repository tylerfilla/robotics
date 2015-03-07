
// The Doppler Effect
// FTC #5703

// Teleop Program

// Precision mode state definitions
#define PRECISION_MODE_STATE_DISABLED  0
#define PRECISION_MODE_STATE_ENABLING  1
#define PRECISION_MODE_STATE_ENABLED   2
#define PRECISION_MODE_STATE_DISABLING 3

// Delays
#define DELAY_LAUNCHER_RELEASE 50

// Controller 1 definitions
#define CONTROLLER_1_BUTTON_AUTO_APPROACH       4
#define CONTROLLER_1_BUTTON_PRECISION_MODE      6
#define CONTROLLER_1_JOYSTICK_1_DEADBAND_RADIUS 8.0/127.5
#define CONTROLLER_1_JOYSTICK_2_DEADBAND_RADIUS 8.0/127.5

// Controller 2 definitions
#define CONTROLLER_2_BUTTON_GOAL_CLAMP_LOWER 2
#define CONTROLLER_2_BUTTON_GOAL_CLAMP_RAISE 3
#define CONTROLLER_2_BUTTON_LAUNCHER_RELEASE 4

// Maximum drive powers
#define DRIVE_POWER_MAXIMUM_DEFAULT   100
#define DRIVE_POWER_MAXIMUM_PRECISION 60

// Servo values
#define SERVO_VALUE_GOAL_CLAMP_RAISE 0
#define SERVO_VALUE_GOAL_CLAMP_LOWER 127
#define SERVO_VALUE_LAUNCHER_HOLD    127
#define SERVO_VALUE_LAUNCHER_RELEASE 0

// Function prototypes
task main();
