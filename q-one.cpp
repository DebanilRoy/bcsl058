#include <iostream>
using namespace std;

#define N 3

void row_swap (int equat [N][N+1], int k, int j);

void triangular (int equat [N][N+1]);

void back_sub (int equat [N][N+1]);

void print_equations (int equat [N][N+1]);

int equations [N][N+1] =    {{2, 1, 1, 7},
                            {3, 2, 3, 16},
                            {4, 5, 3, 23}};

int main() {
    printf("OK");
}
