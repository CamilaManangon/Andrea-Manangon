#include<stdio.h>

void Paso(int piso, int actual){
    int i;
    if(piso==actual){
                printf("Ascensor ya se encuentra en el piso selecionado.\n");
            }else{
                if(piso>actual){
                    for(i=actual;i<=piso;i++){
                    printf("Ascensor en piso %d\n",i);
                    }
                    i = i - 1;
                } else{
                    for(i=actual;i>=piso;i--){
                    printf("Ascensor en piso %d\n",i);
                    }
                    i = i + 1;
                }
            }
}

int Llamar(int piso, int actual){
    do{
        printf("Indique el piso desde donde llama al ascensor.\n");
        scanf("%d",&piso);
        if(piso<0 || piso>9){
            printf("Piso invalido.\n");
        }

    }while(piso<0 || piso>9);
    Paso(piso, actual);
    return piso;
}

int Seleccion(int piso, int actual){
    do{
        printf("Indique el piso desde donde llama al ascensor.\n");
        scanf("%d",&piso);
        if(piso<0 || piso>9){
            printf("Piso invalido.\n");
        }
    }while(piso<0 || piso>9);
    Paso(piso, actual);
    return piso;
}

void Actual(int actual){
    switch(actual){
            case 0:
                printf("Se encuentra en planta baja.\n");
                break;
            case 1:
                printf("Se encuentra en el primer piso.\n");
                break;
            case 2:
                printf("Se encuentra en el segundo piso.\n");
                break;
            case 3:
                printf("Se encuentra en el tercer piso.\n");
                break;
            case 4:
                printf("Se encuentra en el cuarto piso.\n");
                break;
            case 5:
                printf("Se encuentra en el quinto piso.\n");
                break;
            case 6:
                printf("Se encuentra en el sexto piso.\n");
                break;
            case 7:
                printf("Se encuentra en el septimo piso.\n");
                break;
            case 8:
                printf("Se encuentra en el octavo piso.\n");
                break;
            case 9:
                printf("Se encuentra en el noveno piso.\n");
                break;
            }
}

void Menu(int opc, int piso, int actual){
    do{
        printf("Menu de opciones.\n");
        printf("1. Llamar ascensor.\n");
        printf("2. Seleccionar piso\n");
        printf("3. Mostrar piso actual.\n");
        printf("4. Salir\n");
        do{
            printf("Seleccione la opcion que desea realizar.\n");
            scanf("%d",&opc);
            if(opc<1 || opc>4){
                printf("Opcion invalida.\n");
            }
        }while(opc<1 || opc>4);

        switch(opc){
            case 1:
            actual = Llamar(piso, actual);
            break;
            case 2:
            actual = Seleccion(piso, actual);
            break;
            case 3:
            Actual(actual);
            break;
            default:
            printf("Saliste del menu.\n");
            break;
        }
    } while(opc!=4);
}

int main(void){
    int opc, actual, piso;
    actual = 0;

    Menu(opc, piso, actual);

    return 0;
}
