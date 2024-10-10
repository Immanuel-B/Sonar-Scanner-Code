#include <SPI.h>
#include <TFT.h>            // Arduino LCD library

#define cs   10
#define dc   9
#define rst  8

TFT screen = TFT(cs, dc, rst);

void setup() {
  // initialize the screen
  screen.begin();

  // make the background black
  screen.background(0,0,0);

  // set the stroke color to white
  screen.stroke(255,255,255);

  // draw a box with a white outline in the middle of the screen
  screen.rect(screen.width()/2+10,screen.height()/2+10,screen.width()/2-10,screen.height()/2-10);
}

void loop() {

}
