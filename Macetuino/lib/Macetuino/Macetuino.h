#ifndef Macetuino_h
#define Macetuino_h

#include "Arduino.h"

class Macetuino
{
public:
Macetuino(int PinS);
float read();
int PinS;
private:
int _inS;
int _outS;
};

#endif
