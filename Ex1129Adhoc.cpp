/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int N,A=1, menor = 127;;
    


   
while( cin>> N && N != 0){
   
   

    int mat[N][5];

 
    for(int i = 0; i <= N-1; i++){
        for(int j = 0; j<5; j++){
            cin>>A;
            
            mat[i][j] = A;
            
        }
            
        }
        
       
       //int repete = 0; 

        for(int i = 0; i <= N-1; i++){
            int indici = -1;
            int contador = 0;
        for(int j = 0; j<=4; j++){

            if(mat[i][j] <= menor){
                contador++;
                indici = j;
                
            }
                
            }
            
             if(contador == 1){
                
               if(indici == 0)      
                cout<< "A"<<endl;
             else if(indici == 1)
                cout<<"B"<<endl;
             else if(indici == 2)
                cout<<"C"<<endl; 
             else if(indici == 3)
                cout<<"D"<<endl;
             else if(indici == 4)
                cout<<"E"<<endl;
             }else
              cout<<"*"<<endl;


        }   
        
}
    return 0;
        
    
        
    
}