#include <iostream>
using namespace std;
//#define L.len_elementos 2

struct Loop
    {
       int len_elementos;
       int inicio, fim;
       int elementos[1000]; 

        };
/* 
    void escolherTamanho(Loop &L, escolha){
        cin>>escolha;
        L.elementos[escolha];
    } 

    */   
    void inicializar(Loop &L){
        L.inicio = L.fim = 0;
    }

    bool isEmpty(Loop &L){
        return L.inicio == L.fim;
    }
    bool isFull(Loop &L){
        return (L.fim + 1 == L.len_elementos && L.inicio == 0) || L.fim + 1 == L.inicio;

    }   

    void adicionar(Loop &L, int elemento){
       if(!isFull(L)){
            L.elementos[L.fim] = elemento;
                L.fim++;
       }else
            cout<<"Fila esta cheia"<<endl; // assim tramtamos o overflow
    }

    void contadorPicos(Loop &L){
        int contador = 0;
    
        if(L.fim == 2){
            contador = 2;
        }else{
        
        L.fim = 0;

        //int aux;

        int aux2, aux1;
        for (int i = L.fim; i < L.len_elementos; i++)
        {
             if(i + 1 == L.len_elementos)
                L.fim = 0;
            
             aux2 = 2;
             i + 2 >= L.len_elementos ? aux2 = (i + aux2) - L.len_elementos : aux2 +=i; 

            
             aux1 = 1;
             i + 1 >= L.len_elementos ? aux1 = (i + aux1) - L.len_elementos : aux1 +=i; 
           // estourando o vetor?
             if((L.elementos[i] < L.elementos[aux1] && L.elementos[aux1 ] > L.elementos[aux2]) ||
               (L.elementos[i] > L.elementos[aux1] && L.elementos[ aux1 ] < L.elementos[aux2]))
                contador++;
                }
       
        
        }
         cout<<contador<<endl;
    }
int main(){
     int x;
    Loop loop;
   
    cin>> x;
    loop.len_elementos = x;
    adicionar(loop, 1);
    adicionar(loop, -3);

    contadorPicos(loop);
    
    return 0;
}