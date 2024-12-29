
#include <stdio.h>

int main()
{
  float N1, N2, N3, N4, exame;
  scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
  float media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1))/10;
  printf("Media: %.1f\n", media);
  if(media >= 7.0){
      printf("Aluno aprovado.\n");
  }else if(media < 5.0){
      printf("Aluno reprovado.\n");
      
  } else if(media >= 5.0 && media <= 6.9){
      printf("Aluno em exame.\n");
      scanf("%f", &exame);
      printf("Nota do exame: %.1f\n", exame);
      
      float nova_media = (exame + media)/2;
      if(nova_media >= 5.0){
          printf("Aluno aprovado.\n");
      }else if(nova_media <= 4.9){
          printf("Aluno reprovado\n");
      }
    printf("Media final: %.1f\n", nova_media);  
  }
printf("\n");
    return 0;
}
