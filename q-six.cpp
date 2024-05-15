#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double cosx (double x) {
    double cosx = 0;
    cosx = 1 - (pow(x, 2)/2) + (pow(x, 4)/24) + (pow(x, 6)/ 720);
    return cosx;
}

int main () {
    cout<<"As per taylor series, cos x = "<<cosx(0.7)<<endl;
    cout<<"As per inbuilt function, cox = "<<cos(0.7)<<endl;
    cout<<"Error = "<<setprecision(4)<<setprecision(4)<<(cosx(0.7) - cos(0.7))<<endl;
    return 0;
}