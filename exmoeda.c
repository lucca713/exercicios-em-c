#include <stdio.h>
#include <math.h>
int main(){

    float quantidade;

    printf("Digite o valor que voce quer decompor: ");
    scanf("%f", &quantidade);


       
      //primeiro vamos mecher com a parte real do numero
     
    float quantidadePositiva = floor(quantidade/100);
    
    // vai pegar o resultade uma divisao que vai dar com virgula e transformar em inteiro ex 450/100 = 4,5 vai pegar só o 4
    int numeroReal = (int)quantidadePositiva;
     
    printf("%i", numeroReal);
    
    //ja que o quantidade que eu digitei é um numero flutuante vou transformar meu int em um float para conseguir fazer a conta sem dar BO, ex pegar o 4 * 100 e tirar doq dividi para ver oq restou
    quantidade = (quantidade - ((float)numeroReal*100));

    printf("%f", quantidade);

return 0;

}