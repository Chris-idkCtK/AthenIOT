void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT); //sets the pin A0 to recieve data
  Serial.begin(9600); //initialises the serial interface at a baud rate of 9600bps
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0)); //prints the voltage of A0
  delay(5000); //waits 5seconds
}
