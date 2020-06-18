#ifndef _CIRCULO_H_
#define _CIRCULO_H_
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

typedef struct Circulo {
    float radio;
    string color;
}circulo;

void setRadioCirculo(Circulo &circulo, float dato);

void setColorCirculo(Circulo &circulo, string dato);

float getRadioCirculo(Circulo &circulo);

string getColorCirculo(Circulo &circulo);

float areaCirculo(Circulo &circulo);

void mostrarCirculo(Circulo &circulo);

void borrarCirculo(Circulo &circulo);

#endif