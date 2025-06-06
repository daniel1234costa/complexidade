 #include <stdio.h>
#include <math.h>
#include <time.h>


long long fibonacci(int n) {
    const double sqrt5 = sqrt(5);
    const double phi = (1 + sqrt5) / 2;


    return (long long)round(pow(phi, n) / sqrt5);
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
//n = 35 temos um tempo = 0,000001 segundos 

