#include <stdio.h>

int existe_fibonacci(int n){
    int a = 0, b = 1, aux = 0;
    
    while (aux < n) {
        aux = a + b;
        a = b;
        b = aux;
    }
    if(aux==n)
        return 1;
    return 0;
}

int main()
{
    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    if(existe_fibonacci(n)==1)
        printf("Existe %d na sequencia de fibonacci!", n);
    else
        printf("Nao existe %d na sequencia de fibonacci!", n);
    
    return 0;
}
