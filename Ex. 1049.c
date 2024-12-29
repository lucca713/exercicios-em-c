#include <stdio.h>
#include <string.h>

int main(){
    
    char A[20], B[20], C[20];
    scanf("%s", A);
    scanf("%s", B);
    scanf("%s", C);
    
    if(strcmp(A, "vertebrado") == 0){
        if(strcmp(B, "ave") == 0){
            if(strcmp(C, "carnivoro") == 0){
                printf("aguia");
            }else{
                printf("pomba");
            }
        }else if(strcmp(B, "mamifero") == 0){
            if(strcmp(C, "onivoro") == 0){
                printf("homem");
            }else{
                printf("vaca");
            }
        }
    }else if(strcmp(A, "invertebrado") == 0){
        if(strcmp(B, "inseto") == 0){
            if(strcmp(C, "hematofago") == 0){
                printf("pulga");
            }else{
                printf("lagarta");
            }
        }else if(strcmp(B, "anelideo") == 0){
            if(strcmp(C, "hematofago") == 0){
                printf("sanguessuga");
            }else{
                printf("minhoca");
            }
        }
    }
    printf("\n");

    return 0;
}
