#include <iostream>
//ex 1180 cpp do modulo 1

using namespace std;

int main(){

int N;

cin >> N;

int vet[N];

for(int i = 0; i < N;i++){
    cin >> vet[i];
}

int aux = vet[0];
int pocicao = 0;

for (int i = 0; i < N; i++)
{

   if(vet[i] < aux){
        aux = vet[i];
        pocicao = i;}

}

cout << "Menor valor: "<< aux <<endl;
cout << "Posicao: " << pocicao <<endl;


    return 0;
}