#include <stdio.h> 
#include <stdlib.h> 
int main (){
	 
	 // declaration des variables 
	  
	 float a , b ; 
	 int choix , repeat ;
	 
	 M : printf ("----------------Calculatrice---------------- \n Addition : 1 \n Soustraction : 2 \n Multiplication : 3 \n Division : 4 \n Quitter : 0 \n ");
	 
	 // saisir la valeur du choix et des variables
	 
	 printf ("Votre choix : ");
	 scanf ("%d",&choix);
	 
	 if (choix==4) printf ("B most be different than 0\n");
	 if (choix>4 || choix<0) printf ("error"); 
	 else if (choix==0) goto L ;
	 else {
	 
	 printf ("Entrer la valeur de a :");
	 scanf ("%f", &a);
	 
	 printf ("Entrer la valeur de b :");
	 scanf ("%f", &b);
	 
	 
	 }
	 
	 switch (choix)
	 
	 {
	 	case 1 :{
	 		printf ("\n 1 : addition \n");
	 		printf ("la somme est : %f + %f = %f",a , b , a+b);
	 		printf ("\n Do you want to repeat the programme ? : \n Yes : 1 \n No : 0 \n");
	 		scanf ("%d",&repeat);
	 		system ("cls");
			if (repeat==1) goto M ;
			else goto L ;
			break;
		 }
		 
		case 2 : {
			printf ("\n  2 : soustraction \n ");
			printf ("la difference est : %f - %f = %f",a , b , a-b);
			printf ("\n Do you want to repeat the programme ? : \n Yes : 1 \n No : 0 \n");
			scanf ("%d",&repeat);
			system ("cls");
	 		if (repeat==1) goto M ;
	 		else goto L ;
			break;
		} 
		
		case 3 : {
			printf ("\n 3 : multiplication \n");
			printf ("le produit est : %f * %f = %f", a , b , a*b);
		    printf ("\n Do you want to repeat the programme ? : \n Yes : 1 \n No : 0 \n");
			scanf ("%d",&repeat);
			system ("cls");
	 		if (repeat==1) goto M ;
	 		else goto L ;
			break;
		}
		case 4 : {
			printf ("\n 4 : division \n");
			if (b==0) printf ("error");
			else printf ("la division est : %f / %f = %f", a , b , a/b);
			printf ("\n Do you want to repeat the programme ? : \n Yes : 1 \n No : 0 \n");
			scanf ("%d",&repeat);
			system ("cls");
	 		if (repeat==1) goto M ;
	 		else goto L ;
			break;
	
		}
		 default :{
		 
		L : printf ("see you soon ;)") ;
		}
		
	 }
	 
	 
	 
	 
	 
}
