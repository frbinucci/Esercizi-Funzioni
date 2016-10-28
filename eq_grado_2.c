#include <stdio.h>
#include <math.h>
/*Intestazione della funzione "calcolaSoluzioni(double a,double b,double c), necessaria al calcolo
delle radici di un'equazione di secondo grado.
double a => Parametro che rappresenta il coefficente del termine x^2.
double b => Parametro che rappresenta il coefficente del termine x.
double c => Parametro che rappresenta il termine noto.
*/
void calcolaSoluzioni(double a,double b,double c);
//Definizione funzione "main()".
int main()
{
	//Definizione delle variabili necessarie al funzionamento del programma.
	double a,b,c;
	//Inserimento in input dei coefficenti.
	printf("Inserire il coefficente a: ");
	scanf("%lf",&a);
	printf("Inserire il coefficente b: ");
	scanf("%lf",&b);
	printf("Inserire il termine noto: ");
	scanf("%lf",&c);
	printf("\n");
	//Calcolo delle soluzioni mediante la funzione definita.
	calcolaSoluzioni(a,b,c);
	printf("\n\n");
}
//Definizione della funzione "calcolaSoluzioni(double a,double b,double c)".
void calcolaSoluzioni(double a,double b,double c)
{
	//Calcolo del discriminante.
	double delta = (pow(b,2)-4*a*c);
	//Definizione delle variabili contenenti le soluzioni.
	double x1,x2;
	//Se il delta è maggiore di zero, verranno calcolate le soluzioni dell'equazione.
	if(delta>0)
	{
		x1 = ((-1)*b+sqrt(delta))/2*a;
		x2 = ((-1)*b-sqrt(delta))/2*a;
		//Stampa delle soluzioni.
		printf("Soluzioni: x1:%g x2:%g",x1,x2);
	}
	else
	{
		/*Se il delta è minore di zero, verrà stampato il messaggio che comunicherà
		che l'equazione non ha soluzioni reali.*/
		printf("Non esistono soluzioni reali!");
	}

}