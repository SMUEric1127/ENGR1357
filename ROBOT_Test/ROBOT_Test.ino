#include "KNWRobot.h"
#include <infraredsensor.h>

KNWRobot *robot;
bool startBump;
int IRSensorPin = 15; //choose your IR Pin

void setup()
{
    robot = new KNWRobot(0x3F); //Creates a new robot
    Serial.begin(9600); // For printing
}

void loop()
{
    int numCharsReadFromIR = scanIR(IRSensorPin); //read the input from IR Receiver
    if (numCharsReadFromIR != 0){
    // Now print the reading on the next line of the LCD
    //Serial.print(numCharsReadFromIR);
    char* IRCharacters = getIR();
    Serial.print(IRCharacters); //Get the character from the nums read from IR Receiver
    }
}
