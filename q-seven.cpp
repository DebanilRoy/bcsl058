#include <iostream>
using namespace std;

void lag_int (double x[], double y[], double n) {
    double result = 0;
    int i,j;
    for (i = 0; i < 3; i++) {
        double p = 1;
        for (j = 0; j < 3; j++) {
            if (j != i) {
                p = p * (n - x[j])/(x[i] - x[j]);
            }
        }
        p = p * y[i];
        result = result + p;
    }
    cout<<"Using Langrange Interpolation, f(pi/6) = "<<result;
}

int main() {
    double x[] = {0, 45, 90};
    double y[] = {0, 1.77, 1.0};
    lag_int(x, y, 30);
}