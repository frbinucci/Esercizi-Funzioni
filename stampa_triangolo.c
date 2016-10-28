#include<stdio.h>
/*Intestazione della funzione "stampaTriangolo(int n)", necessaria a stampare un triangolo
di base e altezza di dimensione n.
int n=>Dimensione del triangolo.
*/
void stampaTriangolo(int n);
//Definizione della funzione "main()".
int main()
{
	//Definizione delle variabili necessarie al funzionamento del programma.
	int n;
	//Inserimento in input della dimensione di base e altezza del triangolo.
	printf("Inserire la dimensione di base e altezza del triangolo: ");
	scanf("%d",&n);
	printf("\n");
	//Stampa del triangolo mediante la funzione "stampaTriangolo()".
	printf("Triangolo generato:\n");
	stampaTriangolo(n);
	printf("\n");

}
/*Definizione della funzione "stampaTriangolo(int n)", necessaria alla stampa
del triangolo di "*".*/
void stampaTriangolo(int n)
{
	int scorrimento;
	scorrimento = n-1;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<scorrimento;k++)
		{
			printf(" ");
		}
		for(int j=scorrimento;j<n;j++)
		{
			printf("*");
		}
		printf("\n");
		scorrimento--;
	}
}