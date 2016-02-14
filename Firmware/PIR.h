#ifndef PIR_H
#define PIR_H

#include "arduino.h"

class PIR
{
	public:
		PIR(int signalPin);
		bool read();             
	private:
		int signalPin;
};
#endif //PIR_H
