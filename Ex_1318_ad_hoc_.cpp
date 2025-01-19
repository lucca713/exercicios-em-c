#include <iostream>


using namespace std;

int main(){
    int N, M, vet[1000], aux, cont1,cont2=0;
    cin >> N >> M;

    for(int i = 0; i < M; i++){
        cin >> vet[i];
    }

    for (int i = 0; i < M; i++)
    {
        cont1=0;
        aux = vet[i];
        for(int j = 0; j<M;j++){
            if(aux == vet[j])
                cont1 +=1;   
        }

        if(cont1 >= 1)
            cont2 +=1;
    }
    
    cout << cont2;



    return 0;
}