#include <stdio.h>

//primeiro a recursividade da torre
void torre(){
    int torre = 5;
    printf("Movendo a torre 5 casas pra direita\n");
for ( int i = 0; i < 5; i++) //faz o elemento i se repetir 5 vezes, fazendo imprimir a palavra 5x
{
    printf("Direita\n");
}
}
//segundo a recursividade da rainha
 void rainha (){
    int esqrainha = 8, contadorRainha = 1;

    do {
    printf("Esquerda\n", contadorRainha);
    contadorRainha++;
    } while (contadorRainha <= esqrainha);
 }


 //terceiro recursividade do bispo, seguindo a regra ''tilize loops aninhados para o bispo, sendo o loop mais externo o vertical, e o mais interno o horizontal.''

 void bispo (){

for (int i = 0; i < 3; i++)
{
    printf("Esquerda\n");
    for (int j = 0; j < 1; j++)
    {
        printf("cima\n");
    }
    
}
    
}

int main (){
    printf("Vamos movimentar a Torre: \n");
    torre();

    printf("Vamos movimentar a Rainha: \n");
    rainha();

    printf("Vamos movimentar o Bispo: \n");
    bispo();

    printf("Vamos movimentar o Cavalo: \n");

    for (int cima = 0, direita = 0; cima < 2 || direita < 1;)
    {
        if (cima < 2)
        {
            printf("cima\n");
            cima++;
        } else
        {
            printf("direita");
            direita++;
        }
        
        
    }