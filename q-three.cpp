#include <iostream>
#include <cmath>
using namespace std;

#define N 4

float value[N];
float equation[N] = {1, 2, 0, -19};
float range[2] = {1 , 2};

int diff (float equat[N]) {
    int i;
    int t;
    for (i = 0; i < N - 1; i++) {
        if (equat[0] != 0) {
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
 
float fx (float equat[N], float x) {
    int i;
    float fx;
    for (i = 0; i < N; i++) {
        fx = fx + equat[i] * pow(x, (N - 1) - i);
    }
    return fx;

};

void newton_raphson (float equat[N], float range[2]){
    int i;
    float x = (range[0] + range[1]) / 2;
    int t = diff(equat);
    
    while (t != 0){
        float fofx = fx(equat, x);
        cout<<"For x = "<<x<<" f(x) = "<<fofx<<endl;
        if (fofx == 0) {
            cout<<"x = "<<x<<endl;
            return;
        }
        else {
            x = x - (fx(equat,x)/fx(value, x)); 
            cout<<"New x = "<<x<<endl;
        }
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
    newton_raphson (equation, range);
}