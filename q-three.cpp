#include <iostream>
#include <cmath>
#include <unistd.h>
using namespace std;

#define N 4

float value[N];
float equation[N] = {1, 4, 0, -19};
float range[2] = {1 , 2};
 
float func(double x)
{
    return x*x*x + 4*x*x - 19;
}

float derivFunc(double x)
{
    return 3*x*x + 8*x;
}

void newton_raphson (float range[]){
    float x = range[0] + range[1] / 2;
    float h = func(x)/derivFunc(x);
    while (abs(h) > 0.01) {
        h = func(x)/derivFunc(x);
        x -= h; 
    }
    
    cout<<"Using Newtown-Raphson method, x = "<<x<<endl;
};

int main () {
    float range[] = {0 , 2};
    newton_raphson (range);
}