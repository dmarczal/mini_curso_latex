#include <stdio.h>
/*
 * Ler um numero inteiro e imprimir seu valor absoluto.
 */
main()
{ 
  int numero, valor_absoluto;

  printf("Digite um numero qualquer: \n");
  scanf("%d", &numero);
  
  if (numero < 0)
     valor_absoluto = numero * -1;
     
  printf("O valor abosulo de %d e igual a %d \n", numero, valor_absoluto);
  
  system("PAUSE");
}
