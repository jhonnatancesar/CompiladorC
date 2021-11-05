#include <stdio.h>
#include <stdlib.h>
#include "interpretador.h"

int main(int argc,char *argv[]){

  FILE *codigo_fonte_entrada;
  FILE *codigo_fonte_saida;

  /*Verifica a quantidade de parametros.*/
  if(argc!=3){
    printf("\nInterpretador\n\nUtilização: %s {ARQUIVO_FONTE} {ARQUIVO_SAIDA}\n\nExemplo: ./marco-interp ./exemplos/exemplo.c aquivo_saida\n\n",argv[0]);
    exit(1);
  }

  /*Abre os arquivos e Verifica se o tipo de arquivo associado a FILE possui um formato valido.*/
  codigo_fonte_entrada = fopen(argv[1], "r");
  if (codigo_fonte_entrada == NULL) {
    perror(argv[1]);
    exit(1);
  }

  codigo_fonte_saida = fopen(argv[2], "w");
  if (codigo_fonte_saida == NULL) {
    perror(argv[2]);
    exit(1);
  }

  /* Leitura 
  char buffer[500];
  fread(&buffer,sizeof(char),500,codigo_fonte_entrada); */

  /*Quantidade de Caracteres do Arquivo.
  fseek(codigo_fonte_entrada, 0L, SEEK_END);
  int qnt1 = ftell(codigo_fonte_entrada);
  printf("%d", qnt1);*/

  char c;
  while ((c = fgetc(codigo_fonte_entrada)) != EOF){
   printf("%d", c);
   /*printf("%c", c);*/
  }


  return 0;
}