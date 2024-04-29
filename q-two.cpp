#include <iostream>
#include <cmath>
using namespace std;

#define N 4

void bisection(float equat[N], float range[2]) {
    float value;
    int i;
    while (true) {
        float x = (range[0] + range[1]) / 2;
        for (i = 0; i < N; i++) {
            value = value + equat[i] * pow(x, (N - 1) - i);
        }
        if (value == 0 && (value < 0.1 || value > -0.1)) {
            cout<<"x = "<<x;
            break;
        }
        else if (value < 0) {
            float newRange[2] = {x, range[1]};
            bisection(equat, newRange);
        }
        else {
            float newRange[2] = {range[0], x};
            bisection(equat, newRange);
        }
    }
}

int main() {
    float equation[N] = {1, 0, -5, 1};
    float range[2] = {1,2};
    bisection(equation, range);
    return 0;
}