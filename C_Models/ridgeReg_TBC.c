#include <stdio.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

void weights(double *weight_matrix, int n){

    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    if (head == NULL) {
        return 1;
    }

    //TBC
    head->val = 1;
    head->next = (node_t *) malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;
    //TBC
    head->next = NULL;

    //TBC
    *weight_matrix = 0;
    //TBC
}

double coeff(){
    //TBC
}

void ridgeReg(double x[], double y[], double *weight_matrix){
    int weights;

    //TBC
    // Check if linked list head is empty
    // Initialize wieght array if emtpy

    //TBC 
    // Eval weight array for iteration

    //TBC
    // Eval iteration coeff

}

