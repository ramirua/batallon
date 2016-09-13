#include <stdio.h>
#include <stdlib.h>


int main()
{
	int hombre,i,cantidad, total=0;
		printf("\n\t\t EJERCITO DEL REY JAIME\n\n");
	printf("\n Cuantos hombres hay para la batalla Sr.: ");
	scanf("%d",&hombre);
	
	if(hombre>=1 && hombre<=500000)
	{
		//ejecutar la cantidad de hombres
		for(i=1;i<=hombre;i++) 
       {
          if(hombre%i==0)  // modulo genera los batallones
          {
          	 cantidad=hombre/i; // division genera los hombres por cada batallon
            // printf("\n %d batallones de %d hombres",i,cantidad);
             total=total+1;
          }
      }
      	  printf("\n Necesita %d batallones",total);
	}
	else
	  printf("\n No pertenecen al EJERCITO DE JAIME **INFILTRADO** ");

	return 0;
}
