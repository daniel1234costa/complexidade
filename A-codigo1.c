#include <stdio.h>
#include <time.h>


int x(int n) {
    if (n <= 1)
        return 1;
    return x(n - 1) + x(n - 2);
}


int main() {
    int n = 30;             
    int NMax = 100;        
    double total_time = 0;


    for (int i = 0; i < NMax; i++) {
        clock_t start = clock();
        x(n);
        clock_t end = clock();
        total_time += (double)(end - start) / CLOCKS_PER_SEC;
    }


    printf("Tempo medio: %f segundos\n", total_time / NMax);


    return 0;
}
//a-)
//Para NMax = 1000 e n = 10 temos um tempo médio de = 0,000001 segundos
//b-)
//n = 15 temos um tempo = 0,000006 segundos  
//n = 20 temos um tempo = 0,000057 segundos 
//n = 25 temos um tempo = 0,000607 segundos 
//n = 30 temos um tempo = 0,006766 segundos 
//Em n = 35 chegou no ponto proibitivo

//c-)
//Assim como na teoria, na prática o código demonstra que o tempo aumenta exponencialmente em função de n, como foi registrado o código apresentou valores distintos e cada vez maiores à medida que n aumenta, até n chegar em certo ponto onde atingiu os valores proibitivos.
