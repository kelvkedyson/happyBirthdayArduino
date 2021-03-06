
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
  delay(600);
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
  delay(400);
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
  delay(300);
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
  delay(1000);
  
}

void playNote(int note, int duration){
  //play a note on a buzzer
  tone(buzzer, note, duration);

  delay(duration);
  //stop playing a note on a buzzer
  noTone(buzzer);
}
