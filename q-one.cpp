#include <iostream>
using namespace std;

#define N 3

void print_equations (float equat [N][N+1]) {
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N + 1; j++) {
            printf("%f ", equat[i][j]);
        }
        printf("\n");
    }
    cout<<endl;
};

void row_swap (float equat[N][N+1], int i, int j) {
    int k;
    i = i - 1, j = j - 1;
    for (k = 0; k < N + 1; k++) {
        int temp = equat [i][k];
        equat [i][k] = equat [j][k];
        equat [j][k] = temp;
    }
};

void triangular (float equat [N][N+1]) {
    int i, j, k;
    for (i = 0; i < N + 1; i++){
        for (j = i + 1; j < N + 1; j++) {
            float ratio = equat[j][i] / equat[i][i];
            for (k = 0; k < N + 1; k++) {
                equat[j][k] = equat[j][k] - equat[i][k] * ratio;
            }
        }
    }
    cout<<"Triangulation complete.\n";
    print_equations(equat);
};

void back_sub (float equat [N][N+1]){
    int i,j;
    float x[N];
    x[N-1] = equat[N-1][N] / equat[N-1][N-1];
    for (i = N - 2; i >= 0; i--) {
        x[i] = equat[i][N];
        for (j = N - 1; j > i; j--) {
            x[i] = x[i] - equat[i][j] * x [j];
        }
        x[i] = x[i] / equat[i][i];
    }
    
    printf("The solution is\n");
    for (i = 0; i < N; i++) {
        cout<<"x["<<i<<"] = "<<x[i]<<endl;
    }
};

float equations [N][N+1] =    {{2, 1, 1, 7},
                            {3, 2, 3, 16},
                            {4, 5, 3, 23}};

float triangulated [N][N+1] = {{2, 1, 1, 7},
                            {0, 0.5, 1.5, 5.5},
                            {0, 0, -8, -24}};

void guass_elim (float equat[N][N+1]) {
    cout<<"The given set of equations are \n";
    print_equations(equat);
    triangular(equat);
    back_sub(equat);
}

int main() {
    guass_elim(equations);
}
