#include "KNWRobot.h"
#include <infraredsensor.h>

KNWRobot *robot;
bool startBump;
int IRSensorPin = 15;
void setup()
{
    robot = new KNWRobot(0x3F);
    Serial.begin(9600);
}

void loop()
{
    int numCharsReadFromIR = scanIR(IRSensorPin);
    if (numCharsReadFromIR != 0){
    // Now print the reading on the next line of the LCD
    //Serial.print(numCharsReadFromIR);
    char* IRCharacters = getIR();
    Serial.print(IRCharacters);
    }
}
