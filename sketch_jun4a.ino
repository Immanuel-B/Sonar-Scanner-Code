#include <SPI.h>
#include <TFT.h>     
const int trig = 7;
const int echo = 6;

long duration;
float dist;
#define cs   10
#define dc   9
#define rst  8

TFT screen = TFT(cs, dc, rst);

void setup() {
  pinMode(trig, OUTPUT); 
  pinMode(echo, INPUT); 
  Serial.begin(9600); 
  screen.begin();
  screen.background(0,0,0);
  screen.stroke(0,255,0);
  screen.rect(screen.width()/2+10,screen.height()/2+10,screen.width()/2-10,screen.height()/2-10);
  
}
void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  duration = pulseIn(echo, HIGH);
  dist = duration * 0.00343 / 2;
  Serial.println(dist);

}
