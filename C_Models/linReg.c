#include <stdio.h>

int length(double arr[]){
    return sizeof(arr)/sizeof(arr[0]);
}

double mean(double arr[], int n){
    //func to eval mean given length of array and size
    double sum = 0.0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum/n;
}

void linearRegression(double x[], double y[], int n, double *slope, double *intercept){
    //func to eval slope and intercept from 2 arrays of x and y
    int n = length(x);
    if (n != length(y)){
        print("Array X is not the same dimension as array Y");
        exit();
    }
    double xMean = mean(x, n);
    double yMean = mean(y, n);
    double numerator = 0.0;
    double denominator = 0.0;
    for (int i = 0; i < n; i++){
        numerator += (x[i] - xMean) * (y[i] - yMean);
        denominator += (x[i] - xMean) * (x[i] - xMean);
    }
    *slope = numerator / denominator;
    *intercept = yMean - (*slope * xMean);    
}

