//Este programa encuentra la ecuación de una recta, el punto de corte y su pendiente
#include<stdio.h>
//crea 
typedef struct punto{
     float x,y; 
}pun;
float pend, pc; //pendiente y punto de corte//
int cont = 0;
void pdc(float *punc,float pend,float x1,float x2,float y1,float y2,int cont);//Esta función muestra el punto de corte del eje y
void pen(float *pend,float x1,float x2,float y1,float y2,int cont);//Esta función muestra la pendiente 
void pedirpuntos(float *x1,float *x2,float *y1,float *y2,int *cont);//Esta función pide los puntos al usuario

int main() {
	pun puntoa, puntob;
    int opcion;
	
    do{
        printf("\n Bienvenido\n \n Menu\n");
        printf("\n 1. Para ingresar puntos \n"); 
        printf("\n 2. Para ver Pendiente:\n");
        printf("\n 3. Para ver punto de corte con el eje y: \n");
        printf("\n 4. Para mostrar ecuacion de la recta \n");
        printf("\n 5. Para salir. \n");
		scanf("%d",&opcion);
        switch(opcion){
            case 1:
                printf("usted selecciono la opcion para ingresar puntos\n");
				pedirpuntos (&puntoa.x,&puntob.x,&puntoa.y,&puntob.y,&cont);
            break;
            case 2:
                printf("usted selecciono la opcion para ver la pendiente\n");
				pen(&pend,puntoa.x,puntob.x,puntoa.y,puntob.y,cont);	
            break;
            case 3:
                printf("usted selecciono la opcion para ver el punto de corte con el eje y\n");
				pdc(&pc,pend,puntoa.x,puntob.x,puntoa.y,puntob.y,cont);
            break;
            case 4:
                printf("usted selecciono la opcion para mostrar la ecuacion de la recta\n");
				if (cont >= 1){
			    printf ("La ecuacion de la recta es: y= %.3f",pend);
				printf ("x+ %.3f",pc);
				}
				else
		        {
					printf("Ingrese primero los puntos");
				}
		    break;
            case 5:
            break;
            default :
                printf("\n opcion incorrecta\n");
            break;
        }
    }while(opcion != 5);
}
 
void pedirpuntos(float *x1,float *x2,float *y1,float *y2, int *cont) {
    
	printf("\nEste programa halla la ecuanción de una recta que pasa por dos puntos introducuidos por un usuario.\n");
	printf("\ningrese los dos puntos, en eje de coordenada rectangulares, por los que quiere que pase la recta:\n"); 
	printf("\nIngrese la cordenada X del primer punto:");
	scanf("%f",&(*x1));
	printf("\nIngrese la cordenada Y del primer punto:");
	scanf("%f",&(*y1));
	printf("\nIngrese la cordenada X del segundo punto:") ;
	scanf("%f",&(*x2));
	printf("\nIngrese la cordenada Y del segundo punto:");
	scanf("%f",&(*y2));
	*cont = *cont + 1;
} 
void pen(float *pend,float x1,float x2,float y1,float y2,int cont){
	if (x1 == x2){
	    printf("\n No existe ecuación de la recta para esas coordenadas");
		
	}
	else
	{
	    if(cont >= 1){
		*pend = ((y2-y1)/(x2-x1));
		printf("La pendiente es m = %.3f",*pend);
		}
		else
		{
			printf("Ingrese primero los puntos");
		}
		
	}
}
void pdc(float *punc,float pend,float x1,float x2,float y1,float y2,int cont){
	 if (cont >= 1){
	 *punc = (y1/(x1*pend));
	 printf("El punto de corte es: b = %.3f",*punc);
	 }
	 else
    {
		printf("Ingrese primero los puntos");
	}
		
}

		