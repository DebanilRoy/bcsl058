#include <iostream>
using namespace std;

#define N 3

void print_equations (int equat [N][N+1]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N + 1; j++) {
            printf("%d ", equat[i][j]);
        }
        printf("\n");
    }
};

void row_swap (int equat [N][N+1], int i, int j) {
    int k;
    i = i - 1, j = j - 1;
    for (k = 0; k < N + 1; k++) {
        int temp = equat [i][k];
        equat [i][k] = equat [j][k];
        equat [j][k] = temp;
    }
};

void triangular (int equat [N][N+1]);

void back_sub (int equat [N][N+1]);

int equations [N][N+1] =    {{2, 1, 1, 7},
                            {3, 2, 3, 16},
                            {4, 5, 3, 23}};

int main() {
    print_equations(equations);
    row_swap(equations, 1, 3);
}
