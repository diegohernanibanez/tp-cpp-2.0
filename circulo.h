#ifndef _CIRCULO_H_
#define _CIRCULO_H_
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

typedef struct Circulo {
    float radio;
    string color;
    int numeroOrden;
}circulo;

void setRadioCirculo(Circulo &circulo, float dato);

void setColorCirculo(Circulo &circulo, string dato);

void setNroCirculo(Circulo &circulo, int dato);

float getRadioCirculo(Circulo &circulo);

string getColorCirculo(Circulo &circulo);

int getNroOrdenCirculo(Circulo &circulo);

float areaCirculo(Circulo &circulo);

void mostrarCirculo(Circulo &circulo);

void borrarCirculo(Circulo &circulo);

#endif