//Reads Values from Gyrometer (x,y,z)
//Written by ItzProxy@github.com

int pin = 11;
int xRest, yRest, zRest;
int xRead, yRead, zRead;
int x = 0;
int y = 1;
int z = 2;

double gx, gy, gz;

void setup() {
  pinMode(pin,OUTPUT);
  Serial.begin(9600);
  digitalWrite(pin, HIGH);
  delay(1000);
  xRest = analogRead(x);
  yRest = analogRead(y);
  zRest = analogRead(z);
  Serial.print("xRest: ");
  Serial.println(xRest);
  Serial.print("yRest: ");
  Serial.println(yRest);
  Serial.print("zRest: ");
  Serial.println(zRest);
  digitalWrite(pin,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  xRead = analogRead(x) - xRest;
  gx = xRead;
  yRead = analogRead(y) - yRest;
  gy = yRead;
  zRead = analogRead(z) - zRest;
  gz = zRead;
  Serial.print("Gyro X: ");
  Serial.print(gx);
  Serial.print(" Gyro Y: ");
  Serial.print(gy);
  Serial.print(" Gyro Z: ");
  Serial.println(gz);

  delay(1000);
}
