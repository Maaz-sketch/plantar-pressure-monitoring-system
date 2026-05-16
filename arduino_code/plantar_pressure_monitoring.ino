const int fsr1 = A0;
const int fsr2 = A1;
const int fsr3 = A2;
const int fsr4 = A3;
const int fsr5 = A4;
const int fsr6 = A5;

int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;
int sensorValue4 = 0;
int sensorValue5 = 0;
int sensorValue6 = 0;

void setup()
{
    Serial.begin(115200);
}

void loop()
{
    sensorValue1 = analogRead(fsr1);
    sensorValue2 = analogRead(fsr2);
    sensorValue3 = analogRead(fsr3);
    sensorValue4 = analogRead(fsr4);
    sensorValue5 = analogRead(fsr5);
    sensorValue6 = analogRead(fsr6);

    Serial.print(sensorValue1);
    Serial.print(",");

    Serial.print(sensorValue2);
    Serial.print(",");

    Serial.print(sensorValue3);
    Serial.print(",");

    Serial.print(sensorValue4);
    Serial.print(",");

    Serial.print(sensorValue5);
    Serial.print(",");

    Serial.println(sensorValue6);

    delay(100);
}
