#include "OrGate.h"

using namespace std;

OrGate::OrGate(int d, Wire* wire1, Wire* wire2, Wire* wire3) {
	delay = d;
	in1 = wire1;
	in2 = wire2;
	out = wire3;
}

Event OrGate::evaluate(int evTime) {
	if (in1->getValue(evTime) == 1 || in2->getValue(evTime) == 1) {
		return Event(-1, 1, evTime + delay, out);
	}
	else if (in1->getValue(evTime) == 0 && in2->getValue(evTime) == 0) {
		return Event(-1, 0, evTime + delay, out);
	}
}

int OrGate::getDelay()
{
	return delay;
}
