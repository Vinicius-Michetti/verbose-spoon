#include <stdio.h>
#include <stdlib.h>

int somatorio (int n){
    if (n == 0){
        return 0;
    }
    return n + somatorio(n - 1);
}


int main()
{
    int n, resultado;
    printf("Digite um valor para n: ");
    scanf("%d", &n);

    resultado = somatorio(n);
    printf("%d", resultado);
}
