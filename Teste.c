#include <stdio.h>
#include <assert.h>

void somar(){
  //Função de somar simples
  assert(1 + 1 == 2); // Verifica se 1 é igual a 1
  printf("Somando: 1 + 1 = \n" + 1+1);
}

int main(){
  somar();
  return 0;
}
