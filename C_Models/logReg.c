#include <stdio.h>

typedef struct node {
    int val;
    struct node * next;
} node_t;

int length(double arr[]){
    return sizeof(arr)/sizeof(arr[0]);
}

double arg_min(double arr[]){
    int n = length(arr);
    if (n < 1){
        return 0.0;
    }
    double min = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

void weights(double *weight_matrix, int n){

    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    if (head == NULL) {
        return 1;
    }
    head->val = 1;
    head->next = (node_t *) malloc(sizeof(node_t));
    head->next->val = 2;
    head->next->next = NULL;

    head->next = NULL;

    *weight_matrix = 
}

double coeff(){
}

void logReg(){
}