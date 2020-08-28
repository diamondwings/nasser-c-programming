#include <stdio.h> //standart input output . header / <> : jib fichier stdio.h man blasa mnin installer devcpp

int main(){//fonction principal : point d'entrer du programme 
	
	//declaration des donnee
	int a,b,c;
	
	//declaration des variables d'aides
	int min;
	
	//saisir les donnees
	printf("\nEnter the value of A :");
	scanf("%d",&a);
	
	printf("\nEnter the value of B :");
	scanf("%d",&b);
	
	printf("\nEnter the value of C :");
	scanf("%d",&c);
	
	//traitement 
	if(a<b && a<c) min=a;
	else{
		
		if(b<a && b<c) min=b;
		else{
			
			if(c<a && c<b) min=c;
			else if(a==b==c) min=a;
			else if (b==c) min=b;
			else if (a==b) min=a ;
		}
	}
	
	//resultat
	printf("min : %d",min);
}
