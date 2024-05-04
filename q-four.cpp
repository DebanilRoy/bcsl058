#include <iostream>
#include <cmath>
using namespace std;

#define N 4

float fx (float equat[], float x) {
    int i;
    float fx = 0;
    for (i = 0; i < N; i++) {
        fx = fx + (equat[i] * pow(x, (N - 1) - i));
    }
    return fx;
};

void intg_trpz (float eq[], float range[], int intervals) {
    float interval = (range[1] - range[2]) / intervals;  
    cout<<"interval = "<<interval<<endl;
    int i;
    float intg = 0; 
    intg = intg + fx(eq, range[0]) + fx(eq, range[1]);
    for (i = 1; i < intervals; i++) {
        intg = intg + 2 * (fx(eq, (range[0] + (interval * i))));
        cout<<"Adding f("<<(range[0] + (interval * i))<<")"<<endl;
    }
    intg = intg * (interval / 2);
    cout<<"Approximate value of integral for 6 intervals = "<<intg<<endl;
}

int main() {
    float equation[] = {0, 4, 0, 0};
    float range[] = {0, 3};
    intg_trpz(equation, range, 6);
    return 0;
}