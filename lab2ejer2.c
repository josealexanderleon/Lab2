//Este programa pide dos palabras y realiza diversas funciones con ellas
#include<stdio.h>
#include<string.h>
#define max 10
#define maxi 30
char pal[max],pal2[max],pal3[max],unirpal[30],pr1[max],pr2[max],pr3[max];
int cont = 0,cnt1= 0,long1,long2,long3;
void ingresarp(char pal[max],char pal2[max],char pal3[max], int *cont,int *long1,int *long2,int *long3);//Esta función guarda las palabras ingresadas por el usuario
void compararp(char pal[max],char pal2[max],char pal3[max],int cont,int long1,int long2,int long3);//esta funcion compara las tres palabras
void mostrarpr(char pal[max],char pal2[max],char pal3[max],int cont,int long1,int long2,int long3,char pr1[max],char pr2[max],char pr3[max],int cnt1);//Esta función escribe las palabras al reves
void unirp(char pal[max],char pal2[max],char pal3[max],int cont,char unirpal[maxi],int long1,int long2,int long3);
void sum(char pal[max],char pal2[max],char pal3[max],int cont,int long1,int long2,int long3);//Esta funcion suma los numeros corespondientes a cada palabra
int main() {
    int opcion;
	int cont;
    do{
        printf("\n\n Bienvenido\n \n Menu\n");
        printf("\n 1. Para ingresar palabras \n"); 
        printf("\n 2. Para comparar palabras:\n");
        printf("\n 3. Muestra las palabras al revés \n");
        printf("\n 4. Une las palabras \n");
        printf("\n 5. Muestra la longitud de las tres palabras\n");
		printf("\n 6. Mustrar la suma decimal de los caracteres de cada palabra\n");
		printf("\n 7. Para salir. \n");
		scanf("%d",&opcion);
		
        switch(opcion){
            case 1:
                printf("\n usted selecciono la opcion para ingresar ingresar palabras\n");
				ingresarp(pal,pal2,pal3,&cont,&long1,&long2,&long3);
            break;
            case 2:
                printf("\n usted selecciono la opcion para comparar las palabras \n");
				compararp(pal,pal2,pal3,cont,long1,long2,long3);
					
            break;
            case 3:
                printf("\n usted selecciono la opcion de mostrar las palabras al revés \n");
				mostrarpr(pal,pal2,pal3,cont,long1,long2,long3,pr1,pr2,pr3,cnt1);
            break;
            case 4:
                printf("\n usted selecciono la opcion para unir las palabras\n");
				unirp(pal,pal2,pal3,cont,unirpal,long1,long2,long3);
		    break;
            case 5:
				printf("\n usted selecciono la opcion para mostrar la longitud de cada palabra\n");
				if((cont >= 1) && (long1 >= 3) && (long1 <= 10) && (long2 >= 3) && (long2 <= 10) && (long3 >= 3) && (long3 <= 10)){
				printf("\n La longitud de la primera palabra es: %d\n",long1);
				printf("\n La longitud de la segunda palabra es: %d\n",long2);
				printf("\n La longitud de la tercera palabra es: %d\n",long3);
				}
				else{
					printf("\n Usted no ingero los datos o ingreso un dato invalido intente ingresar los datos de nuevo \n");
		        }
            break;
			case 6:
				printf("\n usted selecciono la opcion que muestra la suma decimal de los caracteres de cada palabra\n");
				sum(pal,pal2,pal3,cont,long1,long2,long3);
				
			break;
			case 7:
			break;
            default :
                printf("\n opcion incorrecta\n");
            break;
        }
    }while(opcion != 7);
}
void ingresarp(char pal[max],char pal2[max],char pal3[max], int *cont,int *long1,int *long2,int *long3){
	printf("\nIngrese la primera palabra\n ");
	scanf("%s",pal);
	printf("\nIngrese la segunda palabra\n ");
	scanf("%s",pal2);
	printf("\nIngrese la primera palabra\n ");
	scanf("%s",pal3);
	*long1 = strlen(pal);
	*long2 = strlen(pal2);
	*long3 = strlen(pal3);
	*cont = *cont + 1;
}
void compararp(char pal[max],char pal2[max],char pal3[max],int cont,int long1,int long2,int long3){
	if((cont >= 1) && (long1 >= 3) && (long1 <= 10) && (long2 >= 3) && (long2 <= 10) && (long3 >= 3) && (long3 <= 10)){
		if(strcmp(pal,pal2)==0){
			if(strcmp(pal,pal3)==0){
				printf("\n Las tres palabras que ingreso son iguales\n");
			}
			else
			{
				printf("\n La primera palabra y la segunda son iguales\n");
			}
		}
		else
		{
			if (strcmp(pal2,pal3)==0){
				printf("\n La palabra dos y la tres son iguales\n");
			}
			else{
				printf("\n Las tres palabras son diferentes\n");
			}
	    }
	}
    else
    {
		printf("\n Usted no ingero los datos o ingreso un dato invalido intente ingresar los datos de nuevo \n");
	}
}	

void mostrarpr(char pal[max],char pal2[max],char pal3[max],int cont,int long1,int long2,int long3,char pr1[max],char pr2[max],char pr3[max],int cnt1){
	if((cont >= 1) && (long1 >= 3) && (long1 <= 10) && (long2 >= 3) && (long2 <= 10) && (long3 >= 3) && (long3 <= 10)){
		int cnt2,cnt3,cnt4;
		cnt2 = long1;
		cnt3 = long2;
		cnt4 = long3;
		while (cnt1 < long1){
			cnt2 = cnt2 -1;
			pr1[cnt1] = pal[cnt2];
			cnt1 = cnt1 + 1;
		}
		cnt1 = 0;
	    while (cnt1 < long2){
			cnt3 = cnt3 - 1; 
			pr2[cnt1] = pal2[cnt3];
			cnt1 = cnt1 + 1;
		}
		cnt1 = 0;
		while (cnt1 < long3){
			cnt4 = cnt4 - 1; 
			pr3[cnt1] = pal3[cnt4];
			cnt1 = cnt1 + 1;
		}
		printf("\n La palabra uno al reves es: %s",pr1);
		printf("\n La palabra dos al reves es: %s",pr2);
		printf("\n La palabra tres al reves es: %s",pr3);
	}
	else{
		printf("\n Usted no ingero los datos o ingreso un dato invalido intente ingresar los datos de nuevo \n");
	}
}
void unirp(char pal[max],char pal2[max],char pal3[max],int cont,char unirpal[maxi],int long1,int long2,int long3){
	if((cont >= 1) && (long1 >= 3) && (long1 <= 10) && (long2 >= 3) && (long2 <= 10) && (long3 >= 3) && (long3 <= 10)){
		strcpy(unirpal,pal);
		strcat(unirpal,pal2);
		strcat(unirpal,pal3);
		printf("\nLas palabras unidas son: %s\n",unirpal);
	}
	else{
		printf("\n Usted no ingero los datos o ingreso un dato invalido intente ingresar los datos de nuevo \n");
	}
}
void sum(char pal[max],char pal2[max],char pal3[max],int cont,int long1,int long2,int long3){
	if((cont >= 1) && (long1 >= 3) && (long1 <= 10) && (long2 >= 3) && (long2 <= 10) && (long3 >= 3) && (long3 <= 10)){
		int i;
		int suma = 0;
		for (i = 0; pal[i] != '\0'; i++){
				suma = pal[i] + suma;
		
		}
		printf("\n La suma de la primera palabra es:%d\n",suma);
		suma = 0;
		for (i = 0; pal2[i] != '\0'; i++){
				suma = pal2[i] + suma;
		}
		printf("\n La suma de la segunda palabra es:%d\n",suma);
		suma = 0;
		for (i = 0; pal3[i] != '\0'; i++){
					suma = pal3[i] + suma;
		}
		printf("\n La suma de la tercera palabra es:%d\n",suma);	
	}
	else
	{
		printf("\n Usted no ingero los datos o ingreso un dato invalido intente ingresar los datos de nuevo \n");
	}
}



