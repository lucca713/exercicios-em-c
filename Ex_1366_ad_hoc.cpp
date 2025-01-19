#include <iostream>
using namespace std;
int main()
{
   int ci,vi, n, vet[1000],vet_pares[1000],divisao;
    
   
   while(true){
       int soma = 0;
       cin >> n;
       if(n != 0){
   //a aqui colocamos quantidade de varetas de cada cm em um vetor   
   for(int i = 0; i < n; i++){
      cin >> ci >> vi;
      vet[i] = vi;
   }
   
   //aqui descobrimos quantos pares da para  fazer 
   for(int i=0; i < n; i++){
      divisao = vet[i];
      divisao = divisao/2;
      vet_pares[i] = divisao;
   }
   
   //somar os pares
   for(int i=0; i < n; i++){
      soma += vet_pares[i];
   }
   
   cout<<soma/2<<endl;
       }else
        return 0;
   
   }
   
    return 0;
}