#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include "circulo.h"
#include "lista.h"

using namespace std;

int main(){

    Circulo circulito;
    circulito.color = "rojo";
    circulito.radio = 3;

    Node *lista = NULL;

    unsigned circulo_size = sizeof(Circulo);
    unsigned int_size = sizeof(int);
    int lala = 12;

    cout << "Tu vieja" << endl;

    push(&lista, &circulito, circulo_size);
    push(&lista, &lala, int_size);

    printList(lista, printCirculo);
    printList(lista, printInt);
    return 0;
}