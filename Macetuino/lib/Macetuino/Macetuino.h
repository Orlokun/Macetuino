#ifndef Macetuino_h
#define Macetuino_h

#include "Arduino.h"

class Macetuino
{
public:
Macetuino(int PinS);
private:
int _PinS;
float _inS;
};

#endif
