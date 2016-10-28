#include <stdio.h>
#include <math.h>
/*Intestazione della funzione "calcolaLogaritmo(double x,double b), la quale consente di calcolare
il logaritmo di un numero "x" nella base "b".
double x=>Parametro che rappresenta il numero di cui si vuol calcolare il logaritmo.
double b=>Parametro che rappresenta la base del logaritmo.*/
double calcolaLogaritmo(double x, double b);
//Definizione della funziona "main()".
int main()
{
	//Definizione variabili necessarie al funzionamento del programma.
	double numero,nuovaBase;
	double log;
	//Richiesta in input del numero di cui calcolare il logaritmo e della base."
	printf("Inserire il numero di cui calcolare il logaritmo: ");
	scanf("%lf",&numero);
	printf("\nInserire la base del logaritmo: ");
	scanf("%lf",&nuovaBase);
	//Calcolo del logaritmo del numero mediante la funzione precedentemente definita.
	log = calcolaLogaritmo(numero,nuovaBase);
	//Stampa del logaritmo del numero "x" in base "b", calcolato mediante l'apposita funzione.
	printf("\nIl logaritmo in base %g di %g e': %g",numero,nuovaBase,log);
	printf("\n");
}
//Definizione della funzione "calcolaLogaritmo(double x,double b).
double calcolaLogaritmo(double x,double b)
{
	/*Il logaritmo in base "b" del numero "x" viene calcolato mediante la formula del
	cambio di base e mediante le funzioni della libreria "math.h".*/
	return (log(x)/log(b));
}