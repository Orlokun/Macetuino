#include <Arduino.h>
#include <Macetuino.h>

//Iniciamos la clase principal de la libreria
Macetuino::Macetuino(int PinS)
{
        //Declarar el pin por si no se ha hecho en Main
        pinMode(PinS, INPUT);
}

float Macetuino::read(){

        //Se lee el valor de entrada del sensor
        _inS = analogRead(PinS);

        //Mapeo a un valor utilizable
        _outS = map(_inS, 1023, 0, 100, 0);

        //Devolver el valor a Main
        return _outS;
}
