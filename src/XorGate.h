#ifndef XOR
#define XOR
#include "Gate.h"
#include "Event.h"
#include "Wire.h"

class XorGate : public Gate {
	public:
	XorGate(int d, Wire* wire1, Wire* wire2, Wire* wire3);
	void evaluate(int evTime);
	int getDelay();
};

#endif // !XOR
