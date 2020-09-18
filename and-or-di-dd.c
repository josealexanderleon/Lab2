//Este programa cambia un nombre por otro
#include<stdio.h>
#define tam 4

int main(){
	char nom1[tam] ="jose",nom2[tam];
	
	printf ("\n El nombre era %s\n",nom1);
	nom2[0] = (nom1[0] & 0b1011111);
	nom2[1] = ((nom1[1] & 0b1100101) | 0b0010000);
	nom2[2] = (((nom1[2] << 1) & 0b1100000) | 0b0000001);
	nom2[3] = (((nom1[3] >> 1) & 0b1101111) | 0b1001100);
	printf ("\n\n El nombre ahora es:%s\n\n",nom2);
} 
