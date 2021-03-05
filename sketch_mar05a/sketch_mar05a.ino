
const float c4 = 261.63;
 const float d4 = 293.67;
 const float f4 = 349.23;
 const float e4 = 329.63;
 const float g4 = 392.00;
 const float c5 = 523.25;
 const float a4 = 440.00;
 const float a4SH = 466.16; 


const int buzzer = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  playNote(c4,500);
  playNote(c4, 500);
  playNote(d4, 530);
  playNote(c4, 600);
  playNote(f4, 500);
  playNote(e4, 1000);
  delay(500);
  
  playNote(c4, 500);
  playNote(c4, 500);
  playNote(d4, 530);
  playNote(c4, 500);
  playNote(g4, 500);
  playNote(f4, 500);
  delay(500);

  playNote(c4, 500);
  playNote(c4, 500);
  playNote(c5, 500);
  playNote(a4, 500);
  playNote(f4, 500);
  playNote(e4, 500);
  playNote(d4, 1000);

  playNote(a4SH, 500);
  playNote(a4SH, 500);
  playNote(a4, 500);
  playNote(f4, 500);
  playNote(g4, 500);
  playNote(f4, 500);

  delay(1000);
}

void playNote(int note, int duration){
  //play a note on a buzzer
  tone(buzzer, note, duration);

  delay(duration);
  //stop playing a note on a buzzer
  noTone(buzzer);
}
