#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
  char arma;
  int num, opc, v, i;
  char nombre[15];
  v = 100;

  printf("Ingrese el nombre del personaje.\n");
  scanf("%s", &nombre);
  printf("Elija el arma que desea utilizar:\n");
  printf("Espada(E): Daño 50\nHacha(H): Daño 70\nArco(A): Daño 30\n");
  // eleccion de armas
  do {
    printf("Ingrese la letra correspondiente al arma deseada.\n");
    scanf("%s", &arma);
    if (arma == 'E') {
      printf("Ha elegido la espada.\n");
    } else {
      if (arma == 'H') {
        printf("Ha elegido el hacha.\n");
      } else {
        if (arma == 'A') {
          printf("Ha elegido el arco.\n");
        } else {
          printf("Dato inválido.\n");
        }
      }
    }
  } while (arma != 'E' && arma != 'H' && arma != 'A');

  printf(
      "\nSe le presentarán dos situaciones en las que tendrá que elegir entre "
      "dos opciones para actuar.\nIniciarás con una vida incial de 100HP.\n");

  // situaciones para actuar
  for (i = 1; i <= 2; i++) {
    // random
    srand(time(NULL)); // time(NULL) devuelve la hora del sistema
    num = rand() % 5 + 1;
    // situaciones
    switch (num) {
    case 1:
      printf("Situación 1:\n");
      printf(
          "Vas caminando por el bosque solo, está anocheciendo y te encuentras "
          "con un dragon. Tienes dos opciones.\n 1.Huir\n2.Pelear\n");
      do {
        printf("Ingresa el número de opción que deseas realizar.\n");
        scanf("%d", &opc);
        if (opc == 1) {
          printf(
              "Has elegido huir. Corres lo más rápido que puedes, sin embargo "
              "el dragón logra alcanzarte. Has perdido 50 puntos.\n");
          v = v - 50;
        } else {
          if (opc == 2) {
            printf("Has elegido pelear. Logras defenderte, pero has salido con "
                   "ciertas heridas.\n");
            if (arma == 'E') {
              printf("Su vida ha bajado 20 puntos.\n");
              v = v - 20;
            } else {
              if (arma == 'H') {
                printf("Tu vida ha bajado 10 puntos.\n");
                v = v - 10;
              } else {
                if (arma == 'A') {
                  printf("Tu vida ha bajado 30 puntos.\n");
                  v = v - 30;
                }
              }
            }
          } else {
            printf("Opción  inválida.\n");
          }
        }
      } while (opc != 1 && opc != 2);

      break;

    case 2:
      printf("Situación 2:\n");
      printf(
          "Te han encargado la tarea de vigilar la seguridad de uno d elos "
          "museos más importantes de la ciudad. Es la 1am y escuchas un ruido "
          "en la ventilación del lugar. Tienes dos opciones:\n1. Ir a "
          "chequear ventilación\n2. Chequear cámaras de vigilancia.\nIngresa "
          "el número de opción que deseas realizar.\n");
      scanf("%d", &opc);
      if (opc == 1) {
        printf("Revisas la ventilación directamente por lo que el ladrón te "
               "escuchó y logró atacarte primero. Pierdes 40 puntos.\n");
        v = v - 40;
      } else {
        if (opc == 2) {
          printf("Revisas las cámaras y logras detectar donde está el ladrón y "
                 "cerrar el acceso de ventilación antes de que logre entrar. "
                 "Ganas "
                 "10 puntos. \n");
          v = v + 10;
        } else {
          printf("Opción  inválida.\n");
        }
      }
      break;

    case 3:
      printf("Situación 3:\n");
      printf(
          "Te encuentras en una nave espacial que transporta los prisioneros "
          "más peligrosos del planeta. Hay fallo en la electricidad por lo "
          "que corres el riesgo de que algunas de las celdas se abran. "
          "Decides ir a revisar el cableado. Escuarto está oscuro y mientras "
          "revisas el cableado escuchas unos pasos cerca.\n1.Regresas a ver "
          "para comprobar.\n2.Arreglas primero el cableado para tener mejor "
          "visibilidad.\n");

      do {
        printf("Ingresa el número de opción que deseas realizar.\n");
        scanf("%d", &opc);
        if (opc == 1) {
          printf(
              "A pesar de que el cuarto está oscuro, logras detectar donde "
              "está el "
              "prisionero y defenderte. Pierdes puntos por salir herido.\n ");

          if (arma == 'E') {
            printf("Su vida ha bajado 20 puntos.\n");
            v = v - 20;
          } else {
            if (arma == 'H') {
              printf("Tu vida ha bajado 10 puntos.\n");
              v = v - 10;
            } else {
              if (arma == 'A') {
                printf("Tu vida ha bajado 30 puntos.\n");
                v = v - 30;
              }
            }
          }
        } else {
          if (opc == 2) {
            printf("Te confiaste y el prisionero logra alcanzarte antes de que "
                   "puedas reaccionar. Pierdes 60 puntos.\n");
            v = v - 60;
          } else {
            printf("Opción  inválida.\n");
          }
        }
      } while (opc != 1 && opc != 2);

      break;

    case 4:
      printf("Situación 4:\n");
      printf("Es de noche y está empezando a llover. Te encuentras con una "
             "cabaña "
             "abandonada en el medio del bosque.\n1.Entrar a la "
             "cabaña.\n2.Seguir "
             "explorando.\n");

      do {
        printf("Ingresa el número de opción que deseas realizar.\n");
        scanf("%d", &opc);
        if (opc == 1) {
          printf("Entras a la cabaña y te encuentras con un oso con el que te "
                 "enfrentas. Logras defenderte.\n");
          if (arma == 'E') {
            printf("Su vida ha bajado 20 puntos.\n");
            v = v - 20;
          } else {
            if (arma == 'H') {
              printf("Tu vida ha bajado 10 puntos.\n");
              v = v - 10;
            } else {
              if (arma == 'A') {
                printf("Tu vida ha bajado 30 puntos.\n");
                v = v - 30;
              }
            }
          }
        } else {
          if (opc == 2) {
            printf("Decides seguir explorando, pero te pierdes en medio del "
                   "bosque. Pierdes 50 puntos.\n");
            v = v - 50;
          } else {
            printf("Opción  inválida.\n");
          }
        }
      } while (opc != 1 && opc != 2);
      break;

    case 5:
      printf("Situación 5:\n");
      printf("Estás por enfrentarte en la batalla final con tu peor enemigo. "
             "Es el goblin más fuerte de todo el reino. Tienes dos equipos y "
             "debes elegir cual llevar.\n1. Equipo de fuerza\n2.Equipo de "
             "estrategia.\n");
      do {
        printf("Ingresa el número de opción que deseas realizar.\n");
        scanf("%d", &opc);
        if (opc == 1) {
          printf("Ganas la partida. Solo pierdes puntos por los daños "
                 "producidos durante el enfrentamiento. \n");
          if (arma == 'E') {
            printf("Su vida ha bajado 20 puntos.\n");
            v = v - 20;
          } else {
            if (arma == 'H') {
              printf("Tu vida ha bajado 10 puntos.\n");
              v = v - 10;
            } else {
              if (arma == 'A') {
                printf("Tu vida ha bajado 30 puntos.\n");
                v = v - 30;
              }
            }
          }

        } else {
          if (opc == 2) {
            printf("Pierdes la batalla. Se necesitaba más fuerza que "
                   "estrategia.Pierdes 70 puntos.\n");
            v = v - 70;
          } else {
            printf("Opción  inválida.\n");
          }
        }
      } while (opc != 1 && opc != 2);

      break;

    } // corchete del switch
    printf("Tu vida actual es de: %i\n", v);
    printf("\n\n\n");
  }
  fflush(stdin);
  if (v > 0) {
    printf("Has ganado el juego %s.\n",nombre);
  } else {
    printf("GAME OVER\n");
  }

  return 0;
}