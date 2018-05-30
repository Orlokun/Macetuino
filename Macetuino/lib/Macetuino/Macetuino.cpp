#include <Macetuino.h>

//Iniciamos la clase principal de la libreria
Macetuino::Macetuino(int _PinS = PinS) :
{
        //Declarar el pin por si no se ha hecho en Main
        pinMode(_PinS, INPUT);
}

void Macetuino::read(){

}
