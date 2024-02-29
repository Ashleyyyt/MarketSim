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

double** transpose(double** matrix){
    int c = length(matrix);
    int r = length(matrix[0]); 
    for(int i=0; i<r; i++){  
        for(int j=0; j<c; j++){  
            int temp = matrix[i][j];  
            matrix[i][j] = matrix[j][i];  
            matrix[j][i] = temp;  
        }  
    }  
    return matrix;
}

double weighted_sum_of_squares(double *y, double *X, double *weights, double *beta, int n, int p) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        double y_pred = 0.0;
        for (int j = 0; j < p; j++) {
            y_pred += X[i * p + j] * beta[j];
        }
        double residual = y[i] - y_pred;
        sum += weights[i] * residual * residual;
    }
    return sum;
}



double[] diagonAlleyMatrix(){
    
}


//w_(k+1) = (transpose(T) * S_k * X)^-1 * transpose(T) * (S_k * X * W_k + y - miu_k)
void weights(double *weight_matrix, int n){
    node_t * head = NULL;
    head = (node_t *) malloc(sizeof(node_t));
    if (head == NULL) {
        return 1;
    }

    //*weight_matrix = 
}

double coeff(){
}

void logReg(){
}