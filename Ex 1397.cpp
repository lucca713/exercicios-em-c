#include <iostream>

using namespace std;

//ex ad-hoc
int main(){

while (true)
{
   
 int N, Og, filho, pontoOg=0, pontofilho = 0;
 cin >> N;

 if(N == 0)
    break;

 for(int i = 0; i < N; i++){
    cin >> Og >> filho;
    
    if( Og > filho){
        pontoOg +=1;
    }else if(filho > Og){
        pontofilho +=1;
    }

 }   

 cout << pontoOg<<" "<< pontofilho <<endl;
}

}