#include <Adafruit_NeoPixel.h>
#include <string.h> 
#define PIN 10 // pin for Neopixel matrix
#define NUMPIXELS  64
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int incomingByte = 0;

void setup() {
Serial.begin(9600); // opens serial port, sets data rate to 9600 bps  
pixels.begin(); // This initializes the NeoPixel library.
pixels.show(); 
pixels.clear();
}

void loop() {
pixels.clear();
int a[64]= {0,2,3,4,5,7,48,55,56,57,62,63};
if (Serial.available() > 0) {
incomingByte = Serial.read(); // read the incoming byte:
  uint8_t bitsCount = sizeof( incomingByte ) * 4;
  char str[ bitsCount + 1 ];
  uint8_t i = 0;
  while ( bitsCount-- )
  str[ i++ ] = bitRead( incomingByte, bitsCount ) + '0';
  str[ i ] = '\0';
  int arrSize1 = sizeof(str)/sizeof(str[0]);
  int dem= 7;
  Serial.println(dem);
  for(int i=0; i<arrSize1 ; i++){
    Serial.println("I received: ");
    Serial.println(str);
    if (str[i]=='1')
    {
      a[dem]=i+8;
      dem = dem+1;
    }
  }
 }
 int arrSize = sizeof(a)/sizeof(a[0]);
 for(int i=0; i<arrSize;i++)
 {
  pixels.setPixelColor(a[i], pixels.Color(250,250,250)); // Moderately bright green color (0, 150, 0) white =(250,250,250)
  //pixels.setPixelColor(a[i], pixels.Color(250,250,250)); // Moderately bright green color (0, 150, 0) white =(250,250,250)
  }
  pixels.show(); // This sends the updated pixel color to the hardware.
}
