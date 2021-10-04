const int SensorPin = 12;
const int RelayPin = 11;

void setup() 
{
  // initialize serial communication:
  Serial.begin(9600);
  
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SensorPin, INPUT);
  pinMode(RelayPin, OUTPUT);
}

void loop() 
{
  int val;
 
  val = digitalRead(SensorPin);
  
  Serial.print(val);
  Serial.println();

  if(val == 0)
  { 
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(RelayPin, LOW);
  
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(RelayPin, HIGH);
  } 
  
  delay(1000);
}
