#include <stdio.h>
/*Intestazione della funzione "stampaMese()", che consente, dato un intero, di stampare
il mese rispettivo.
int mese=>Numero del mese.*/
void stampaMese(int mese);
//Definizione funzione "main()".
int main()
{
	//Definizione variabili necessarie al funzionamento del programma.
	int mese;
	//Inserimento in input del mese di cui si vuol conoscere il nome.
	printf("Inserire il mese da convertire: ");
	scanf("%d",&mese);
	printf("\n");
	//Stampa del nome del mese mediante la funzione "stampaMese()".
	stampaMese(mese);
	printf("\n\n");
}
//Definizione della funzione stampaMese(int mese).
void stampaMese(int mese)
{
	//Definizione di un array di stringhe contenenti i mesi dell'anno.
	char mesi[20][12] = {"Gennaio","Febbraio","Marzo","Aprile","Maggio","Giugno",
	"Luglio","Agosto","Settembre","Ottobre","Novembre","Dicembre"};
	/*La funzione stampa l'elemento rispettivo dell'array solo se il mese passato
	come parametro è compreso tra 1 e 12 (inclusi).*/
	if(mese>=1 && mese<=12)
	{
		printf("%s",mesi[--mese]);
	}
}
