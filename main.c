#include <stdio.h>

int main() {
float nota1;
float nota2;
float nota3;
float nota4;
float media;
char nome;

printf ("\nDigite a nota da primeira unidade:");
scanf ("%f", &nota1);
printf ("\nDigite a nota da segunda unidade:");
scanf ("%f", &nota2);
printf ("\nDigite a nota da terceira unidade:");
scanf ("%f", &nota3);
printf ("\nDigite a nota da quarta unidade:");
scanf ("%f", &nota4);

media = (nota1+nota2+nota3+nota4)/4;
printf("\n\nSua nota final é: %.2f", media);

if (media >= 7.0) {                                           
  printf ("\n\nAprovado por média");
}
    
else {
  printf ("\n\nReprovado");
  printf ("\n\nDigite seu nome:");
  scanf ("%s", &nome);
  printf("\n\n%s as provas finais ocorrerão no dia 12/12", &nome);
 }

  return 0;
}
