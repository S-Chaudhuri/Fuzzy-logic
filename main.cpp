#include <stdio.h>

void set_union(float a[], float b[], int l) {
    float c[l];
    for(int i=0; i<l; i++) {
        if(a[i] > b[i]) 
            c[i] = a[i];
        else 
            c[i] = b[i];
    }
    for(int j=0; j<l; j++){
        printf("%f ", c[j]);
    }
    printf("\n");
}

void intersection(float a[], float b[], int l) {
    float c[l];
    for(int i=0; i<l; i++) {
        if(a[i] < b[i]) 
            c[i] = a[i];
        else 
            c[i] = b[i];
    }
    for(int j=0; j<l; j++) {
        printf("%f ", c[j]);
    }
    printf("\n");
}

void comp(float a[], int l) {
    float c[l];
    for(int i=0; i<l; i++) {
        c[i] = 1 - a[i];
    }
    for(int j=0; j<l; j++) {
        printf("%f ", c[j]);
    }
    printf("\n");
}

void algsum(float a[], float b[], int l) {
    float c[l];
    for(int i=0; i<l; i++) {
        c[i] = a[i] + b[i] - (a[i] * b[i]);
    }
    for(int j=0; j<l; j++) {
        printf("%f ", c[j]);
    }
    printf("\n");
}

void algpro(float a[], float b[], int l) {
    float c[l];
    for(int i=0; i<l; i++) {
        c[i] = a[i] * b[i];
    }
    for(int j=0; j<l; j++) {
        printf("%f ", c[j]);
    }
    printf("\n");
}

void boundsum(float a[], float b[], int l) {
    float c[l];
    for(int i=0; i<l; i++) {
        if(1 > a[i] + b[i]) 
            c[i] = a[i] + b[i];
        else 
            c[i] = 1;
    }
    for(int j=0; j<l; j++) {
        printf("%f ", c[j]);
    }
    printf("\n");
}

void bounddif(float a[], float b[], int l) {
    float c[l];
    for(int i=0; i<l; i++) {
        if(0 < a[i] - b[i]) 
            c[i] = a[i] - b[i];
        else 
            c[i] = 0;
    }
    for(int j=0; j<l; j++) {
        printf("%f ", c[j]);
    }
    printf("\n");
}

int main() {
    float arr1[] = {0.5, 0.66, 0.76, 0.87};
    float arr2[] = {0.11, 0.5, 0.25, 0.32};
    int l = sizeof(arr1)/sizeof(arr1[0]);
    printf("union:\n");
    set_union(arr1, arr2, l);
     printf("intersection:\n");
    intersection(arr1, arr2, l);
     printf("algorithmic sum:\n");
    algsum(arr1, arr2, l);
     printf("compliment of A:\n");
    comp(arr1, l);
    printf("compliment of B:\n");
    comp(arr2,l);
     printf("algorithmic product:\n");
    algpro(arr1, arr2, l);
     printf("bounded difference:\n");
    bounddif(arr1, arr2, l);
     printf("bounded sum:\n");
    boundsum(arr1, arr2, l);
    return 0;
}