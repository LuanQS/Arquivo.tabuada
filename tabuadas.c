#include<stdio.h>

int main(){

    FILE *tablefile;
    tablefile = fopen("tabuas.txt", "w");

    if (tablefile == NULL);
    {
       printf("Erro ao abrir o arquivo.\n");
       return 1;
    }

    for (int i = 2; i <= 9; i++)
    {
        fprintf(tablefile, "Tabuado do %d:\n",i);
        for (int j = 1; j <=10; j++)
        {
            fprintf(tablefile, "%d x %d = %d", i, j, i * j);
        }

        
    
    }
    
    fclose(tablefile);
    printf("Arquivo 'tabuadas.txt' gerado com sucesso!\n");

    return 0;
}