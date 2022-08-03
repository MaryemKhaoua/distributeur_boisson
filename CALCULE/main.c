#include <stdio.h>

int main() {
    float nbr1, nbr2, q;
    char M;
    do
    {
        printf("choisir l'opperateur : +, -, *, /\n");
     scanf("%c", &M);
    }while ( M != '+' && M != '-' && M != '*' && M != '/');
    printf("Saisir le 1er nombre\n");
    scanf("%f", &nbr1);
   printf("Saisir un 2eme nombre\n");
    scanf("%f", &nbr2);




    switch (M)
    {
        case '+' :	q = nbr1 + nbr2;
			        printf ("q = %f\n", q);
			        break;
		case '-' :
		            q = nbr1 - nbr2;
			printf ("q = %f\n", q);
			break;
		case '*' :
		            q = nbr1 * nbr2;
			printf ("q = %f\n",q);
			break;
		case '/' :
		if (nbr2 != 0)
		{
		        q = nbr1 / nbr2;
		    printf("q = %f\n", q);
		}
		else
		printf("l'opperation est impossible\n");
			break;
		default :
		printf("Opperation invalid\n");

    }

    return 0;
}

