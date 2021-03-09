
 const float c4 = 261.63;
 const float d4 = 293.67;
 const float f4 = 349.23;
 const float e4 = 329.63; //this is the e after major c
 const float g4 = 392.00; //this is the g after major c
 const float c5 = 523.25; //this is the c after major c
 const float a4 = 440.00; //this is the a note
 const float a4SH = 466.16; //this is the a#


const int buzzer = 8; //buzzer as a speaker

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT); //defining the buzzer as the output pin

}

void loop() {
  // put your main code here, to run repeatedly:
  //playing the first section
  firstSection();
  delay(600);

  //playing the second section
  secondSection();
  delay(400);

  //playing the third section
  thirdSection();
  delay(300);

  //playing the fourth section
  fourthSection();
  delay(1000);
  
}

//function to play a note in a certain duration
void playNote(int note, int duration){
  //play a note on a buzzer
  tone(buzzer, note, duration);

  delay(duration);
  
  //stop playing a note on a buzzer
  noTone(buzzer);
}

//playing the first section
void firstSection(){
  playNote(c4,200);
  delay(100);
  playNote(c4,200);
  delay(100);
  playNote(d4, 450);
  delay(100);
  playNote(c4,330);
  delay(100);
  playNote(f4,380);
  delay(100);
  playNote(e4, 495);
}

//playing the second section
void secondSection(){
  playNote(c4, 200);
  delay(100);
  playNote(c4, 200);
  delay(100);
  playNote(d4, 450);
  delay(100);
  playNote(c4, 390);
  delay(100);
  playNote(g4, 400);
  delay(100);
  playNote(f4, 500);
}

//playing the third section
void thirdSection(){
  playNote(c4, 210);
  delay(130);
  playNote(c4, 210);
  delay(130);
  playNote(c5, 600);
  delay(120);
  playNote(a4, 550);
  delay(120);
  playNote(f4, 500);
  delay(120);
  playNote(e4, 500);
  delay(120);
  playNote(d4, 500);
}

//playing the fourth section
void fourthSection(){
  playNote(a4SH, 400);
  delay(100);
  playNote(a4SH, 400);
  delay(100);
  playNote(a4, 620);
  delay(200);
  playNote(f4, 400);
  delay(200);
  playNote(g4, 500);
  delay(100);
  playNote(f4, 800);
}
