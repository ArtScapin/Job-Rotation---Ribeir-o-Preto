#include <stdio.h>
#include <string.h>

void inverter_string(char string[100]){
    int j=strlen(string);
    char aux;
    
    for (int i = 0; i <= j/2; i++) {
        j--;
        aux=string[i];
        string[i]=string[j];
        string[j]=aux;
    }
    puts(string);
}

int main()
{
    system("clear");
    char string[100];

    printf("Digite uma string: ");
    gets(string);
    
    inverter_string(string);
    
    return 0;
}
