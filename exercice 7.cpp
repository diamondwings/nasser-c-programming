#include <stdio.h> 

int main (){
	 
	 // declaration des variables 
	  
	 float a , b ; 
	 float choix ;
	 
	 printf ("Calculatrice \n Addition : 1 \n Soustraction : 2 \n Multiplication : 3 \n Division : 4 \n Quitter : 0 \n ");
	 
	 // saisir la valeur du choix et des variables
	 
	 printf ("Votre choix : ");
	 scanf ("%f",&choix);
	 
	 if (choix==0) printf ("Quitter");
	 else {
	 
	 printf ("Entrer la valeur de a :");
	 scanf ("%f", &a);
	 
	 printf ("Entrer la valeur de b :");
	 scanf ("%f", &b);
	 }
	 
	 // ciblage de l'operation choisie
	 
	 if (choix==1)printf ("la somme est : %f + %f = %f", a ,b , a+b);
	else if (choix==2)printf ("\n le produit est : %f * %f = %f" , a , b , a*b);
	else if (choix==3)printf ("\n la soustraction est : %f - %f = %f", a , b , a-b);
    else if (choix==4){
	 		if (b==0)
			printf ("\n Erreur b=0");
			else
			printf("\n la division est : %f / %f = %f", a , b , a/b);
	}
	
	
	
	}
