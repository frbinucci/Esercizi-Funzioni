#include<stdio.h>
/*Intestazione della funzione "stampaTriangolo(int n)", necessaria a stampare un triangolo
di base e altezza di dimensione n.
int n=>Dimensione del triangolo.
char c=>Carattere con cui disegnare il triangolo.
*/
void stampaTriangolo(int n,char c);
//Definizione funzione "main()".
int main()
{
	//Definizione delle variabili necessarie al funzionamento del programma.
	int n;
	char c;
	//Inserimento in input della dimensione di base e altezza del triangolo.
	printf("Inserire la dimensione di base e altezza del triangolo: ");
	scanf("%d",&n);
	//Inserimento in input del simbolo da stampare.
	printf("\nInserire il simbolo da stampare: ");
	scanf(" %c",&c);
	printf("\n");
	//Stampa del triangolo mediante la funzione "stampaTriangolo()".
	printf("Triangolo generato:\n\a");
	stampaTriangolo(n,c);
	printf("\n");

}
/*Definizione della funzione "stampaTriangolo(int n,char c)", necessaria alla stampa
del triangolo del carattere passato come parametro.*/
void stampaTriangolo(int n,char c)
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
			printf("%c",c);
		}
		printf("\n");
		scorrimento--;
	}
}