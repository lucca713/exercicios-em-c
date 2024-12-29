#include <iostream>
using namespace std;
int main()
{
    int N, D, cont = 0;
    while(true){
        
    cin>>N >> D;
    
    if(N == 0 && D ==0){
        return 0;
    }
    
    int vet[D][N];
    
    //preechendo vetor com as linhas
    for(int i = 0; i<D;i++){
        for(int j = 0; j<N; j++ ){
            
            cin>>vet[i][j];
            
                  
        };
    };
    
   for(int j = 0; j<N;j++){
       cont = 0;
        for(int i = 0; i<D; i++ ){
            if(vet[i][j] == 1){
                cont +=1;
            }
        }
        if(cont == D)
            break;
    }

    if(cont == D){
        cout<<"yes"<<endl;
    }else{
        
        cout<<"no"<<endl;
    }
    }
    return 0;
}