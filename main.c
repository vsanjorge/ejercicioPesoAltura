#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PESOMAX 300
#define ALTOMAX 250
#define C1 3600

int main(int argc, char *argv[]) {
  char res = 'S';
  float peso, altura;
  //FILE *logfile;

  //logfile = fopen("registro", "a");
  do {
    system("clear");
    printf("\nIntroduzca peso en kilogramos (0-%3d): ",PESOMAX);
    scanf("%f", &peso);
    printf("\nIntroduzca altura en centimetros (0-%3d): ",ALTOMAX);
    scanf("%f", &altura);

    if (peso <= 0 || altura <= 0 || peso >= PESOMAX || altura >= ALTOMAX) {
      printf("\nALGUNO DE LOS VALORES DE ENTRADA SE SITUA FUERA DEL RANGO ADMITIDO\n");
    } else {
      printf("\nLA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", sqrt(peso*altura/C1));
      //fprintf(logfile, "\nLA SUPERFICIE CORPORAL CALCULADA (SEGUN MOSTELER): %1.4f (M2)\n", sqrt(peso*altura/C1));
    }

    printf("\n<S> para continuar (cualquier otra finaliza): ");
    fflush(stdin);
    scanf("%c", &res);
    //res = getch();
  } while (res == 'S' || res == 's');

  return 0;
}