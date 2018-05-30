#include <Macetuino.h>

//Iniciamos la clase principal de la libreria
Macetuino::Macetuino(int _PinS = PinS) :
{
        //Declarar el pin por si no se ha hecho en Main
        pinMode(_PinS, INPUT);
}

float Macetuino::read(){

        //Se lee el valor de entrada del sensor
        _inS = AnalogRead(_PinS);

        //Mapeo a un valor utilizable
        _outS = map(inS, 1023, 0, 0, 100);

        //Devolver el valor a Main
        return outS;
}
