/*
  Mask decontaminator box final code

  Author: dECOntaminator team
*/

//Initializations
// constants won't change
const int led = 2; //initialize digital pin 2 as "led"
const int button = 3; //initialize digital pin 2 as "button"
const int relay = 4; //initialize digital pin 4 "relay"
const int buzzer = 7; //initialize digital pin 7 "buzzer"

//the setup function runs once when you press reset or power the board
void setup()
{
  pinMode(led, OUTPUT); //initialize "led" as an output
  pinMode(button, INPUT); //initialize "button" as an input
  pinMode(relay, OUTPUT); //initialize "relay" as an output
  pinMode(buzzer, OUTPUT); //initialize "buzzer" as an output
}

//the loop function runs over and over again forever
void loop()
{
  buttonState = digitalRead(button); //read if button is pressed

  //if button is pressed
  if(buttonState == HIGH)
  {
    //play a tone
    tone(buzzer, 1000); //send 1KHz sound signal
    delay(1000);        //for 1 sec
    noTone(buzzer);     //stop sound
    delay(1000);        //for 1 sec

    digitalWrite(led, HIGH); //light the led
    digitalWrite(relay, HIGH); //open the relay to light the led bar
    delay(180000); //for 3 mins
    digitalWrite(relay, LOW); //close the relay to turn off the led bar
    digitalWrite(led, LOW); //turn off the led

    //play a tone
    tone(buzzer, 1000); //send 1KHz sound signal
    delay(1000);        //for 1 sec
    noTone(buzzer);     //stop sound
    delay(1000);        //for 1 sec

    int buttonState = 0; //assigned the value 0 to the "buttonState" variable, as the button is not pressed anymore
  }
}
