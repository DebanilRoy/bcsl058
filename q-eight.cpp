#include <iostream>
#include <cmath>
using namespace std;

#define N 3

float fx (float x) {
    return (2 * sqrt(x * x * x));
};

void simpson (float range[], float intervals) {
    float stepsize = (range[1] - range[0]) / intervals;
    float x = range[0];
    float value = 0;
    value += fx(x);
    x += stepsize;

    for (x = x; x < range[1]; x += 2 * stepsize ) {
        value += 4 * (fx (x));
    } 

    for (x = range[0]; x < range[1]; x += 2 * stepsize) {
        value += 2 * (fx(x));
    }
    value += fx(range[1]);
    value = (value * stepsize) / 3;
    cout<<"Using Simpson 1/3 rule, integral of f(x) = 2x^3/2 over the interval [1,9] = "<<value<<endl;
}

int main () {
    float range[] = {1, 9};
    simpson(range, 8);
    return 0;
}