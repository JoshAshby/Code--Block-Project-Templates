#include "WProgram.h"
void setup();
void loop();

extern "C" void __cxa_pure_virtual() {
cli();
for (;;);
}

//--------------------------------------
//include other libraries here:


//--------------------------------------
//Declare your variables here:
int led = 13;

//--------------------------------------
//setup the pins
void setup() {
pinMode(led, OUTPUT);
}
//--------------------------------------
//main loop
void loop() {
digitalWrite(led, HIGH);
}
//--------------------------------------
//Pandoras Box
//if you delete this, the world will end
int main(void)
{
	init();

	setup();

	for (;;)
		loop();

	return 0;
}

