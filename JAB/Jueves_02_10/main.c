#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
struct agendaPersonal{
    char diasDeLaSemana[20];
    char nombresDeContacto[50];
    char notas[50];
    int fecha;
};
*/
struct datosPersonales{
    char nombre[50];
    char calle[50];
    char estadoCivil[10];
    int numero;
};

int main()
{
    /*Estructuras - Operador Punto (acceso a los campos)
    struct agendaPersonal miAgenda;
    strcpy(miAgenda.diasDeLaSemana,"Jueves");
    strcpy(miAgenda.nombresDeContacto,"Roberto Pandolfo");
    strcpy(miAgenda.notas,"Dia de Cumple de Robert");
    miAgenda.fecha=20102019;
    printf("Dia de semana :  %s\n",miAgenda.diasDeLaSemana);
    printf("Nombre :  %s\n",miAgenda.nombresDeContacto);
    printf("Notas :  %s\n",miAgenda.notas);
    printf("Fecha :  %i\n",miAgenda.fecha);
    */

    /*struct datosPersonales agenda;

       printf("Inrese Nombre\n");
       gets(agenda.nombre);

       printf("Ingrese Apellido : \n");
       gets(agenda.apellido);
       printf("El nombre y apellido ingresado es : %s %s",agenda.nombre,agenda.apellido);
    */
    struct datosPersonales vectorAgenda[4];
    int i;
    // Cargo vector con valores del usuario
    for(i=0;i<4;i++){
        printf("Ingrese nombre\n");
        gets(vectorAgenda[i].nombre);

        printf("Ingrese calle\n");
        gets(vectorAgenda[i].calle);

        printf("Ingrese numero\n");
        scanf("%i",&vectorAgenda[i].numero);
        fflush(stdin);
        printf("\nIngrese Estado Civil\n");
        gets(vectorAgenda[i].estadoCivil);
    }
    // Imprimo los valores

    for(i=0;i<4;i++){
        printf("El nombre ingresado : %s\n",vectorAgenda[i].nombre);
        printf("La calle ingresada : %s\n",vectorAgenda[i].calle);
        printf("Altura de calle : %i",vectorAgenda[i].numero);
        printf("Estado Civil : %s\n",vectorAgenda[i].estadoCivil);
    }
    return 0;
}
