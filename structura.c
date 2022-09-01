/*#include<stdio.h>
#include<stdlib.h>

//declaracion globa
struct alumno
{
    char no [25];
    int ap[10];
    int edad;
    int anio;
    int nota[4];
    float prom;
};

main()
{
    int i, acum =0;
    struct alumno R1;
    printf("Ingrese los datos\n");
    printf("Nombre:");
    scanf("%s",&R1.no);
    printf("Apellido: ");
    scanf("%s",&R1.ap);
    printf("Edad: ");
    scanf("%d",&R1.edad);
    printf("Anio:");
    scanf("%d",&R1.anio);
    for (i=0; i<4; i++)
    {
        printf("Ingrese la nota %d:",i+1);
        scanf("%d",&R1.nota[i]);
        acum = acum +R1.nota[i];
    }
    R1.prom = (float) acum /4;
    printf("El promedio del alumno %s , %s es %2.2f\n",R1.ap,R1.no,R1.prom);
    return 0;
}*/
#include<stdio.h>
#include<stdlib.h>

//declaracion global
//debe almacenar los datos de 5 alumnos
struct alumno
{
    char no [25];
    int ap[10];
    int edad;
    int anio;
    int nota[4];
    float prom;
};

main()
{

    int i, acum =0;
    struct alumno alu[5];
    *R2 =alu;
    alum *R2;

for (int x =0;x<4;x++){
            printf("Ingrese los datos\n");
    printf("Nombre:");
    scanf("%s",&R2[x]->no);
    printf("Apellido: ");
    scanf("%s",&R2[x]->ap);
    printf("Edad: ");
    scanf("%d",&R2[x]->edad);
    printf("Anio:");
    scanf("%d",&R2[x]->anio);
    for (i=0; i<4; i++)
    {
        printf("Ingrese la nota %d:",i+1);
        scanf("%d",&R2->nota[i]);
        acum = acum +R2->nota[i];
    }
    R2->prom = (float) acum /4;

    }

    printf("El promedio del alumno %s , %s es %2.2f\n",R2->ap,R2->no,R2->prom);
    return 0;
}

no terminado
