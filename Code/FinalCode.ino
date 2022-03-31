/*
  Mask decontaminator box final code

  Author: dECOntaminator team
*/

//Initializations
// constants won't change
const int led = 2; //led to arduino pin 2
const int button = 3; //button to arduino pin 3
const int relay = 4; //relay to arduino pin 4
const int buzzer = 7; //buzzer to arduino pin 7

// the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  pinMode(relay, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  buttonState = digitalRead(button);

  if(buttonState == HIGH)
  {

    tone(buzzer, 1000); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);        // ...for 1 sec

    digitalWrite(led, HIGH);
    digitalWrite(relay, HIGH);
    delay(180000); //3 mins
    digitalWrite(relay, LOW);
    digitalWrite(led, LOW);

    tone(buzzer, 1000); // Send 1KHz sound signal...
    delay(1000);        // ...for 1 sec
    noTone(buzzer);     // Stop sound...
    delay(1000);        // ...for 1 sec

    int buttonState = 0; //
  }
}
