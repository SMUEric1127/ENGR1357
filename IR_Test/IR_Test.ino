#include <infraredsensor.h>
int RECV_PIN = 7;
int numRead;
void setup() {
  Serial.begin(9600);     
}

void loop() {
  numRead = scanIR(RECV_PIN);
  //if (numRead!= 0)  {
    Serial.print(scanIR(numRead));
    char* IRCharacters = getIR();
    Serial.println(IRCharacters);
  //}
}
