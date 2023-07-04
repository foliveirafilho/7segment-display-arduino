#ifndef TM74HC595Display_h
#define TM74HC595Display_h

class TM74HC595Display
{
public:
	TM74HC595Display(int SCLK, int RCLK, int DIO);
	void timerIsr();
	void send(unsigned char X);
	void send(unsigned char X, unsigned char port);
	void digit(int display, unsigned char value);
	unsigned char get(int display);
	void clear();
	void clear(int digit);

private:
	int _SCLK;
	int _RCLK;
	int _DIO;
	int _DATA[4];
};

#endif
