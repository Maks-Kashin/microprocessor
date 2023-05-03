#include "math.h"

extern "C" float funcC(int x) {
	float f;
	f = ((tan(x) + sin(x)) / exp(x));
	return f;
}