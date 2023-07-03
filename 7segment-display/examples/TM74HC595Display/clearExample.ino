#include <TM74HC595Display.h>
#include <TimerOne.h>

int SCLK = 7;
int RCLK = 6;
int DIO = 5;

TM74HC595Display disp(SCLK, RCLK, DIO);
unsigned char LED_0F[16];
int value;

void setup() {
  LED_0F[0] = 0xC0;
  LED_0F[1] = 0xF9;
  LED_0F[2] = 0xA4;
  LED_0F[3] = 0xB0;
  LED_0F[4] = 0x99;
  LED_0F[5] = 0x92;
  LED_0F[6] = 0x82;
  LED_0F[7] = 0xF8;
  LED_0F[8] = 0x80;
  LED_0F[9] = 0x90;
  LED_0F[10] = 0x88;
  LED_0F[11] = 0x83;
  LED_0F[12] = 0xC6;
  LED_0F[13] = 0xA1;
  LED_0F[14] = 0x86;
  LED_0F[15] = 0x8E;

  value = 0;
  
  Timer1.initialize(1500);
  Timer1.attachInterrupt(timerIsr);
}

void loop() {

  disp.digit(3, LED_0F[0]);
  delay(1000);
  disp.digit(2, LED_0F[1]);
  delay(1000);
  disp.digit(1, LED_0F[2]);
  delay(1000);
  disp.digit(0, LED_0F[3]);
  delay(1000);

  disp.clear(2);
  delay(1000);
  disp.clear(0);
  delay(1000);
  disp.clear(3);
  delay(1000);
  disp.clear(1);
  delay(1000);
}

void timerIsr()
{
  disp.timerIsr();
}
