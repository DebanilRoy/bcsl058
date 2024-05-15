#include <iostream>
#include <cmath>
using namespace std;

#define N 4

float f_xy (float t, float y) {
    int i;
    float fxy = 0;
    fxy = (-2 * t) * (y * y);
    return fxy;
};

void euler (float init_t, float init_y, float final_t, float stepsize) {
    float i;
    float t = init_t;
    float y = init_y;
    for (t = init_t; t < final_t; t = t + stepsize) {
        y = y + (stepsize * (f_xy(t, y)));
    }
    cout<<"Given f'(x) = -2xy^2, for x = "<<t<<" y = "<<y<<endl;
}

int main() {
    euler(0, 1, 0.5, 0.1);
    return 0;    
}