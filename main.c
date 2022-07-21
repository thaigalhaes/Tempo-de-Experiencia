#include <stdio.h>

int main() {
  int Anos_de_experiencia;
  printf("Digite seu tempo de experiencia: ");
  scanf("%d", &Anos_de_experiencia);

   if (Anos_de_experiencia <=2)
    printf("Você é: Trainee");
    
   else if (Anos_de_experiencia <=5) {
   printf("Você é: Junior");
    }
     
     else if (Anos_de_experiencia <=9) {
   printf("Você é: Pleno");
    }
       
   else if (Anos_de_experiencia >=10){
   printf("Você é: Sênior");
   }
  
    
  return 0;
}
