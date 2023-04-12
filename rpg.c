#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void) {

  char arma;
  int num1, num2, opc, v, i;
  char nombre[15];
  v = 100;

  printf("Ingrese el nombre del personaje.\n");
  scanf("%s", &nombre);
  printf("Elija el arma que desea utilizar:\n");
  printf("Espada(E): Dano 50\nHacha(H): Dano 70\nArco(A): Dano 30\n");
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
          printf("Dato invalido.\n");
        }
      }
    }
  } while (arma != 'E' && arma != 'H' && arma != 'A');

  printf(
      "\nSe le van a presentar dos situaciones en las que tendra que elegir entre "
      "dos opciones para actuar.\n\nIniciaras con una vida incial de 100HP.\n\n");
  
  srand(time(NULL)); // time(NULL) devuelve la hora del sistema
  num1 = rand() % 5 + 1;
  num2 = rand() % 5 + 1;
  do{
    if(num1==num2){
      num2 = rand() % 5 + 1;
    }
  }while(num1==num2);

    // situacion con numero random 1
    switch (num1) {
    case 1:
      printf("Situacion 1:\n");
      printf(
          "Vas caminando por el bosque solo, esta anocheciendo y te encuentras "
          "con un dragon. Tienes dos opciones.\n1.Huir\n2.Pelear\n");
      do {
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
          case 1:
            printf(
                "Has elegido huir. Corres lo mas rapido que puedes, sin embargo "
                "el dragon logra alcanzarte. Has perdido 50 puntos.\n");
            v = v - 50;
            break;
          case 2:
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
            break;
          default:
            printf("Opcion  invalida.\n");
            break;
        }
      } while (opc != 1 && opc != 2);

      break;

    case 2:
      printf("Situacion 2:\n");
      printf(
          "Te han encargado la tarea de vigilar la seguridad de uno de los "
          "museos mas importantes de la ciudad. Es la 1am y escuchas un ruido "
          "en la ventilacion del lugar. Tienes dos opciones:\n1. Ir a "
          "chequear ventilacion\n2. Chequear camaras de vigilancia.\n");
      do{
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
            case 1:
              printf("Revisas la ventilacion directamente por lo que el ladron te "
                "escucho y logro atacarte primero. Pierdes 40 puntos.\n");
              v = v - 40;
              break;
            case 2:
              printf("Revisas las camaras y logras detectar donde esta el ladron y "
                  "cerrar el acceso de ventilacion antes de que logre entrar. "
                  "Ganas 10 puntos. \n");
              v = v + 10;
              break;
            default:
              printf("Opcion  invalida.\n");
              break;
          }
      } while (opc != 1 && opc != 2);
      break;

    case 3:
      printf("Situacion 3:\n");
      printf(
          "Te encuentras en una nave espacial que transporta los prisioneros "
          "mas peligrosos del planeta. Hay fallo en la electricidad por lo "
          "que corres el riesgo de que algunas de las celdas se abran. "
          "Decides ir a revisar el cableado. El cuarto esta oscuro y mientras "
          "revisas el cableado escuchas unos pasos cerca.\n1.Regresas a ver "
          "para comprobar.\n2.Arreglas primero el cableado para tener mejor "
          "visibilidad.\n");

      do {
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
          case 1:
            printf(
              "A pesar de que el cuarto esta oscuro, logras detectar donde "
              "esta el "
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
            break;
          case 2:
            printf("Te confiaste y el prisionero logra alcanzarte antes de que "
                   "puedas reaccionar. Pierdes 60 puntos.\n");
            v = v - 60;
            break;
          default:
            printf("Opcion  invalida.\n");
            break;
        }
      } while (opc != 1 && opc != 2);

      break;

    case 4:
      printf("Situacion 4:\n");
      printf("Es de noche y esta empezando a llover. Te encuentras con una "
             "cabana "
             "abandonada en el medio del bosque.\n1.Entrar a la "
             "cabana.\n2.Seguir "
             "explorando.\n");

      do {
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
          case 1:
            printf("Entras a la cabana y te encuentras con un oso con el que te "
                 "enfrentas. Logras defenderte.\n");
            if (arma == 'E') {
              printf("Tu vida ha bajado 20 puntos.\n");
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
            break;
          case 2:
            printf("Decides seguir explorando, pero te pierdes en medio del "
                   "bosque. Pierdes 50 puntos.\n");
            v = v - 50;
            break;
          default:
            printf("Opcion  invalida.\n");
            break;
        }
      } while (opc != 1 && opc != 2);
      break;

    case 5:
      printf("Situacion 5:\n");
      printf("Estas por enfrentarte en la batalla final con tu peor enemigo. "
             "Es el goblin más fuerte de todo el reino. Tienes dos equipos y "
             "debes elegir cual llevar.\n1. Equipo de fuerza\n2.Equipo de "
             "estrategia.\n");
      do {
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
          case 1:
            printf("Ganas la partida. Solo pierdes puntos por los danos "
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
            break;
          case 2:
            printf("Pierdes la batalla. Se necesitaba mas fuerza que "
                   "estrategia.Pierdes 70 puntos.\n");
            v = v - 70;
            break;
          default:
            printf("Opcion  invalida.\n");
            break;
        }
      } while (opc != 1 && opc != 2);
      break;

    } // corchete del switch

    if(v<=0){
    printf("\nTu vida actual es de: 0 puntos.\n");
    }else{
      printf("\nTu vida actual es de: %i\n\n", v);
    }

  //situacion con numero random 2
  switch (num2) {
    case 1:
      printf("Situacion 1:\n");
      printf(
          "Vas caminando por el bosque solo, esta anocheciendo y te encuentras "
          "con un dragon. Tienes dos opciones.\n1.Huir\n2.Pelear\n");
      do {
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
          case 1:
            printf(
                "Has elegido huir. Corres lo mas rapido que puedes, sin embargo "
                "el dragon logra alcanzarte. Has perdido 50 puntos.\n");
            v = v - 50;
            break;
          case 2:
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
            break;
          default:
            printf("Opcion  invalida.\n");
            break;
        }
      } while (opc != 1 && opc != 2);

      break;

    case 2:
      printf("Situacion 2:\n");
      printf(
          "Te han encargado la tarea de vigilar la seguridad de uno de los "
          "museos mas importantes de la ciudad. Es la 1am y escuchas un ruido "
          "en la ventilacion del lugar. Tienes dos opciones:\n1. Ir a "
          "chequear ventilacion\n2. Chequear camaras de vigilancia.\n");
      do{
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
            case 1:
              printf("Revisas la ventilacion directamente por lo que el ladron te "
                "escucho y logro atacarte primero. Pierdes 40 puntos.\n");
              v = v - 40;
              break;
            case 2:
              printf("Revisas las camaras y logras detectar donde esta el ladron y "
                  "cerrar el acceso de ventilacion antes de que logre entrar. "
                  "Ganas 10 puntos. \n");
              v = v + 10;
              break;
            default:
              printf("Opcion  invalida.\n");
              break;
          }
      } while (opc != 1 && opc != 2);
      break;

    case 3:
      printf("Situacion 3:\n");
      printf(
          "Te encuentras en una nave espacial que transporta los prisioneros "
          "mas peligrosos del planeta. Hay fallo en la electricidad por lo "
          "que corres el riesgo de que algunas de las celdas se abran. "
          "Decides ir a revisar el cableado. El cuarto esta oscuro y mientras "
          "revisas el cableado escuchas unos pasos cerca.\n1.Regresas a ver "
          "para comprobar.\n2.Arreglas primero el cableado para tener mejor "
          "visibilidad.\n");

      do {
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
          case 1:
            printf(
              "A pesar de que el cuarto esta oscuro, logras detectar donde "
              "esta el "
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
            break;
          case 2:
            printf("Te confiaste y el prisionero logra alcanzarte antes de que "
                   "puedas reaccionar. Pierdes 60 puntos.\n");
            v = v - 60;
            break;
          default:
            printf("Opcion  invalida.\n");
            break;
        }
      } while (opc != 1 && opc != 2);

      break;

    case 4:
      printf("Situacion 4:\n");
      printf("Es de noche y esta empezando a llover. Te encuentras con una "
             "cabana "
             "abandonada en el medio del bosque.\n1.Entrar a la "
             "cabana.\n2.Seguir "
             "explorando.\n");

      do {
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
          case 1:
            printf("Entras a la cabana y te encuentras con un oso con el que te "
                 "enfrentas. Logras defenderte.\n");
            if (arma == 'E') {
              printf("Tu vida ha bajado 20 puntos.\n");
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
            break;
          case 2:
            printf("Decides seguir explorando, pero te pierdes en medio del "
                   "bosque. Pierdes 50 puntos.\n");
            v = v - 50;
            break;
          default:
            printf("Opcion  invalida.\n");
            break;
        }
      } while (opc != 1 && opc != 2);
      break;

    case 5:
      printf("Situacion 5:\n");
      printf("Estas por enfrentarte en la batalla final con tu peor enemigo. "
             "Es el goblin más fuerte de todo el reino. Tienes dos equipos y "
             "debes elegir cual llevar.\n1. Equipo de fuerza\n2.Equipo de "
             "estrategia.\n");
      do {
        printf("Ingresa el numero de opcion que deseas realizar.\n");
        scanf("%d", &opc);
        switch (opc){
          case 1:
            printf("Ganas la partida. Solo pierdes puntos por los danos "
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
            break;
          case 2:
            printf("Pierdes la batalla. Se necesitaba mas fuerza que "
                   "estrategia.Pierdes 70 puntos.\n");
            v = v - 70;
            break;
          default:
            printf("Opcion  invalida.\n");
            break;
        }
      } while (opc != 1 && opc != 2);
      break;

    } // corchete del switch

  //Gana o pierde juego
  if(v<=0){
    printf("\n\nTu vida final es de: 0 puntos.\n\n");
    printf("%s, GAME OVER\n\n",nombre);
  }else{
    printf("\n\nTu vida fianl es de: %i\n\n", v);
    printf("%s has ganado el juego.\n\n",nombre);
  }

  return 0;
}