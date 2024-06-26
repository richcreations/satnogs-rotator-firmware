// Pins file for Arduino Mega2560 with Ramps v1.4 3d printer shield
// https://osoyoo.com/wp-content/uploads/2016/07/Schematic-2.png
// https://osoyoo.com/wp-content/uploads/2016/07/Schematic-1.png
#define aziStepPin      A0  // X step
#define aziDirPin       A1  // X direction
#define aziENpin        38  // X enable
#define eleStepPin      A6  // Y step
#define eleDirPin       A7  // Y direction
#define eleENpin        A2  // Y enable
#define polStepPin      46  // Z step
#define polDirPin       48  // Z direction
#define polENpin        A8  // Z enable
#define tunStepPin      26  // E0 step
#define tunDirPin       28  // E0 direction
#define tunENpin        24  // E0 enable
#define auxStepPin      36  // E1 step
#define auxDirPin       34  // E1 direction
#define auxENpin        30  // E1 enable
// Code uses internal pullups
#define aziMinStopPin   3   // X- endstop
#define aziMaxStopPin   2   // X+ endstop
#define eleMinStopPin   14  // Y- endstop
#define eleMaxStopPin   15  // Y+ endstop
#define polMinStopPin   18  // Z- endstop
#define polMaxStopPin   19  // Z+ endstop

#define ledPinBuiltin   13  // Onboard led
#define ledPinExternal  4   // Servo pin D4

#define polPotPin       A3  // Polarize manual control potentiometer wiper