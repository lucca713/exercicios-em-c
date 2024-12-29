#include <stdio.h>
 
int main() {
    float A, B, C;
    scanf("%f %f %f", &A, &B, &C);

    float Delta = (B*B) + (-4*(A*C));

    float raiz2 = -(B + sqrt(Delta)) / (2 * A);
    float raiz1 = -(B - sqrt(Delta))/ (2* A); 

     if(A == 0 || Delta < 0 ){
        printf("Impossivel calcular\n");
  
     }else{
        printf("R1 = %.5f\n", raiz1);
       
        printf("R2 = %.5f\n", raiz2);

     }   



    printf("\n");
    return 0;
}