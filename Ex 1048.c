/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float salario, novo, reajuste;
    
    scanf("%f", &salario);
    
    if(salario >= 0 && salario <= 400.00){
        novo = salario*0.15;
        novo +=salario;
        printf("Novo salario: %.2f\n", novo);
        reajuste = novo - salario;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %\n");
        
    }else if(salario >= 400.01 && salario <= 800.00){
        novo = salario*0.12;
        novo +=salario;
        printf("Novo salario: %.2f\n", novo);
        reajuste = novo - salario;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %\n");
        
    }else if(salario >= 800.01 && salario <= 1200.00){
        novo = salario*0.10;
        novo +=salario;
        printf("Novo salario: %.2f\n", novo);
        reajuste = novo - salario;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %\n");
        
    } else if(salario >= 1200.01 && salario <= 2000.00){
        novo = salario*0.07;
        novo +=salario;
        printf("Novo salario: %.2f\n", novo);
        reajuste = novo - salario;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %\n");
        
    }else if(salario > 2000.00){
        novo = salario*0.04;
        novo +=salario;
        printf("Novo salario: %.2f\n", novo);
        reajuste = novo - salario;
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %\n");  
        
    }
    

    return 0;
}