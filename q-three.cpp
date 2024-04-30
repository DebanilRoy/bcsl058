#include <iostream>
#include <cmath>
using namespace std;

#define N 4

float value[N];

void diff (float equat[N]) {
    int i;    
    for (i = 0; i < N - 1; i++) {
        value[i + 1] = ((N - 1) - i) * equat[i];
    }
}

void print_equation (float equat [N]) {
    int i;
    for (i = 0; i < N; i++) {
        cout<<equat[i]<<" ";
        
    }
    cout<<endl;
};

int main () {
    float equation[N] = {5, 6, 3, -19};
    diff(equation);
    print_equation(value);
}