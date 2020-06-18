#ifndef _LISTA_H_
#define _LISTA_H_

#include <stdio.h> 
#include <stdlib.h> 

using namespace std;

/* A linked list node */
struct Node{ 
    // Any data type can be stored in this node 
    void  *data; 
  
    struct Node *next; 
}; 

void push(struct Node** head_ref, void *new_data, size_t data_size);

void printList(struct Node *node, void (*fptr)(void *));

void printCirculo(void *n);

void printInt(void *n);


#endif