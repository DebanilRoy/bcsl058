#include <iostream>
#include <cmath>
#include <unistd.h>
using namespace std;

#define N 4

float value[N];
float equation[N] = {1, 4, 0, -19};
float range[2] = {1 , 2};

void copyEquation (float c[], float p[]) {
    int i;
    for (i = 0; i < N; i++) {
        p[i] = c[i];
    }
}

int diff (float equat[]) {
    int i;
    int t;
    for (i = 0; i < N - 1; i++) {
        if (equat[i] != 0) {
            t = 1;
        }
    }
    
    if (t == 1){
        for (i = 0; i < N - 1; i++) {
            value[i + 1] = ((N - 1) - i) * equat[i];
        }
        return 1;
    }
    else {
        return 0;
    }
}
 
float fx (float equat[], float x) {
    int i;
    float fx = 0;
    for (i = 0; i < N; i++) {
        fx = fx + (equat[i] * pow(x, (N - 1) - i));
    }
    return fx;

};

void newton_raphson (float equat[], float x){
    int i;
    int t = 1;
    float copy[N] = {0, 0, 0, 0}; 
    float fofx = fx(equat, x);
    if (fofx == 0 && t != 0) {
        cout<<"x = "<<x<<endl;
        return;
    }
    else if (t != 0) {
        copyEquation(value, copy);
        t = diff(equat);
        x = x - (fofx/fx(value, x)); 
        newton_raphson(copy, x);
        return;
    }
    else {
        cout<<"Best approximation of x = "<<x<<endl;
        return;
    }
};

void print_equation (float equat [N]) {
    int i;
    for (i = 0; i < N; i++) {
        cout<<equat[i]<<" ";
        
    }
    cout<<endl;
};

int main () {
    newton_raphson (equation, 1.5);
}