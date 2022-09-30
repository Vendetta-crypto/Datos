#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int nalumnos, nmaterias, i, j, k;
struct alumnos
{
    int matricula[15];
    char carrera;
    char nombre;
    int calif[3];     // 3 calificaciones por materia
    char materia; // numero de materias maximo
};
main()
{
    FILE *fichero;

    printf("Cuantos alumnos son: ");
    scanf("%d", &nalumnos);
    
    struct alumnos alu[nalumnos];
    struct alumnos *alumnosP;
    alumnosP =&alu;
    
    for (i = 0; i < nalumnos; i++)
    {
        printf("Ingresa la matricula del alumno %d: ",i+1);
        scanf("%s", &alumnosP->matricula[i]);
        //fputs(alu[nalumnos].matricula[i],fichero);
        

       /* printf("Que carrera cursas: ");
        scanf("%s", &alu[nalumnos].carrera);
        //fputs(alu[nalumnos].carrera,fichero);

        printf("Ingresa el nombre: ");
        scanf("%s", &alu[nalumnos].nombre[i]);
        //fputs(alu[nalumnos].nombre[i],fichero);

        printf("Introduce la cantidad de materias que cursas: ");
        scanf("%d", &nmaterias);
        //fputs(nmaterias,fichero);

        for (j = 0; j < nmaterias; j++)
        {
            printf("Ingresa el nombre de la materia No%d: ",j+1);
            scanf("%s", &alu[nalumnos].materia);
            //fputs(alu[nalumnos].materia[j],fichero);
            for (k = 0; k < 3; k++)
            {
                printf("Introduce la calificacion No%d : ",k+1);
                scanf("%d", &alu[nalumnos].calif[k]);
                //fputs(alu[nalumnos].calif[k],fichero);
            }
        }*/
    }
    fichero = fopen("Alumnos.txt", "w");
    if (fichero)
    {
        for (i = 0; i < nalumnos; i++)
        {
            fputs(alu,fichero);
            //fwrite(alu,sizeof(struct alumnos),1,fichero);   
        }
        printf("listo");
    }
    else
    {
        printf("no lsto");
    }
    fclose(fichero);

    return 0;
}