#include <stdio.h>
/*Intestazione della funzione "calcolaOrario(int ore, int minuti,int secondi), la quale consente di
calcolare il numero di secondi trascorsi dalla mezzanotte a partire da un orario nel formato h:m:s.
int ore => Ora dell'orario interessato.
int minuti => Minuto dell'orario interessato.
int secondi => Secondo dell'orario interessato.
*/
int calcolaOrario(int ore,int minuti,int secondi);
//Definizione funzione "main()".
int main()
{
	//Definizione variabili necessarie al funzionamento del programma.
	int ore,minuti,secondi;
	int t1,t2;
	//Richiesta in input del primo orario all'utente.
	printf("Inserire il primo orario nel formato h m s: ");
	scanf("%d%d%d",&ore,&minuti,&secondi);
	/*Calcolo del numero di secondi trascorsi tra il primo orario e la mezzanotte, mediante
	la funzione "calcolaOrario()".
	*/
	t1 = calcolaOrario(ore,minuti,secondi);
	//Richiesta in input dell secondo orario all'utente.
	printf("\nInserire il secondo orario nel formato h m s: ");
	scanf("%d%d%d",&ore,&minuti,&secondi);
	/*Calcolo del numero di secondi trascorsi tra il secondo orario e la mezzanotte, mediante
	la funzione "calcolaOrario()".
	*/
	t2 = calcolaOrario(ore,minuti,secondi);
	//Stampa della differenza di secondi tra i due orari.
	printf("\nI secondi trascorsi tra i due orari sono: %d",t2-t1);
	printf("\n\n");
}
//Definizione della funzione calcolaOrario(int ore,int minuti,int secondi).
int calcolaOrario(int ore,int minuti,int secondi)
{
	//Restituzione del numero di secondi trascorsi dalla mezzanotte.
	return (ore*3600)+(minuti*60)+secondi;
}