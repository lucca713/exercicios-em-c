#include <stdio.h>

int main()
{
    float A, B, C, P, AR;
    

    scanf("%f %f %f", &A, &B, &C);
    if(A + B > C && A + C > B && C + B > A){
      
      P = A + B +C;
      printf("Perimetro = %.1f", P);
        
    }else{
        
        AR = ((A+B)*(C/2));
        printf("Area = %.1f", AR);
}
    printf("\n");
    return 0;
}
