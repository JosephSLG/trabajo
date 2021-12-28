#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include "leercadena.h"

int main(int argc, char *argv[]) {
  if (argc == 1){
          printf("Indique el programa que desea se ejecute\n");
  	  exit(1);
  }	

  char *str = argv[1];
  char **vector;

  vector = de_cadena_a_vector(str);
  execvp(vector[0],vector);

  return 0;
}
