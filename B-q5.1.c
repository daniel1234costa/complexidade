#include <stdio.h>
#include <time.h>


#define MAX 1000


int memo[MAX];


int x(int n) {
    if (memo[n] != -1)
        return memo[n];
   
    if (n <= 1)
        memo[n] = 1;
    else
        memo[n] = x(n - 1) + x(n - 2);
   
    return memo[n];
}


int main() {
    int n = 40;
    int NMax = 100;      
    double total_time = 0;


    for (int i = 0; i < MAX; i++)
        memo[i] = -1;


    for (int i = 0; i < NMax; i++) {
        clock_t start = clock();
        x(n);
        clock_t end = clock();
        total_time += (double)(end - start) / CLOCKS_PER_SEC;


        for (int j = 0; j <= n; j++)
            memo[j] = -1;
    }


    printf("Tempo medio: %f segundos\n", total_time / NMax);
    return 0;
}



//Agora os valores já calculados são armazenados, o que diminui o uso de chamadas recursivas e faz a complexidade ser linear o(n), abaixo está o tempo médio para n nos mesmos valores do algoritmo anterior:
//n = 15 temos um tempo = 0,000000 segundos 
//n = 20 temos um tempo = 0,000000 segundos 
//n = 25 temos um tempo = 0,000001 segundos 
//n = 30 temos um tempo = 0,000001 segundos 
//n = 35 temos um tempo = 0,000001 segundos 

