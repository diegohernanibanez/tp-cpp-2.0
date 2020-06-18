#include "lista.h"
#include "circulo.h"

using namespace std;

void push(struct Node** head_ref, void *new_data, size_t data_size){ 
    // Allocate memory for node 
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node)); 
  
    new_node->data  = malloc(data_size); 
    new_node->next = (*head_ref); 
  
    // Copy contents of new_data to newly allocated memory. 
    // Assumption: char takes 1 byte. 
    int i; 
    for (i=0; i<data_size; i++){ 
        *(char *)(new_node->data + i) = *(char *)(new_data + i); 
    }
    // Change head pointer as new node is added at the beginning 
    (*head_ref)    = new_node; 
} 

void printList(struct Node *node, void (*fptr)(void *)){ 
    while (node != NULL) 
    { 
        (*fptr)(node->data); 
        node = node->next; 
    } 
}

void printCirculo(void *n){ 
    mostrarCirculo(*(Circulo *)n);
}

void printInt(void *n){ 
   printf(" %d", *(int *)n); 
} 