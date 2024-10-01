const int buttonPin = 4; 
const int REDPin    = 0; 
const int GREENPin  = 3; 
const int YELLOWPin = 2;

int ledState = LOW;           
int lastButtonState;          
int currentButtonState;  

void setup() {
  Serial.begin(115200);                 
  pinMode(buttonPin, INPUT_PULLUP);    
  pinMode(REDPin, OUTPUT);         
  pinMode(GREENPin, OUTPUT);
  pinMode(YELLOWPin, OUTPUT);
  currentButtonState = digitalRead(buttonPin);
  digitalWrite(REDPin, HIGH);
}


void loop() {
    lastButtonState = currentButtonState;
    currentButtonState = digitalRead(buttonPin);

    if (lastButtonState == HIGH && currentButtonState == LOW) {
        digitalWrite(REDPin, LOW);
        digitalWrite(YELLOWPin, HIGH);
        delay(1000);
        digitalWrite(GREENPin, HIGH);
        digitalWrite(YELLOWPin, LOW);
        delay(3000);
        digitalWrite(YELLOWPin, HIGH);
        digitalWrite(GREENPin, LOW);
        delay(1000);
        digitalWrite(REDPin, HIGH);
        digitalWrite(YELLOWPin, LOW);
    }
   
}