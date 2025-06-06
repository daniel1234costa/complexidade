 #include <stdio.h>
#include <time.h>


long long fibonacci(int n) {
    if (n <= 1)
        return 1;


    long long a = 1, b = 1, temp;


    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }


    return b;
}


int main() {
    int n = 40;          
    int NMax = 100;      
    double total_time = 0;


    for (int i = 0; i < NMax; i++) {
        clock_t start = clock();
        fibonacci(n);
        clock_t end = clock();
        total_time += (double)(end - start) / CLOCKS_PER_SEC;
    }


    printf("Tempo medio: %f segundos\n", total_time / NMax);


    return 0;
}



//n = 15 temos um tempo = 0,000000 segundos 
//n = 20 temos um tempo = 0,000000 segundos 
//n = 25 temos um tempo = 0,000000 segundos 
//n = 30 temos um tempo = 0,000000 segundos 
//n = 35 temos um tempo = 0,000000 segundos 
