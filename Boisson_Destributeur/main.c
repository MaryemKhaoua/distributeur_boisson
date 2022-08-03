#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choix, sucre, Lait;
    float prix;
    char MessageB[15], MessageS[15], MessageL[15];
    do
    {
    printf("Bienvenu!\nveuillez choisir votre boissan\n");
    printf("*****\n");
    printf("pour choisir un cafe saisir 1\n");
    printf("pour choisir un Chokolat saisir 2\n");
    printf("pour choisir un The saisir 3\n");
    printf("pour choisir un Soda saisir 4\n");
    printf("*****\n");
    scanf("%d", &choix);
    }
    while (choix < 1  || choix > 5);

    switch (choix)
    {
      case  1 : prix = 2;
                strcpy(MessageB, "cafe");
                printf("saisir la dose du sucre\n");
                printf("0 sans sucre, 1 sucree, 2 tres sucree\n");
                scanf("%d", &sucre);
                if(sucre == 1)
                {
                    prix = prix + 0.25;
                    strcpy(MessageS, "sucree");
                }
                else if (sucre == 2)
                {
                    prix = prix + 0.50;
                   strcpy(MessageS, "tres sucree");
                }
                else if (sucre == 0)
                {
                    prix = prix + 0;
                    strcpy(MessageS, "sans sucre");
                }
                printf("tape 1 pour Lait ou 0 sans lait\n");
                scanf("%d", &Lait);
                if (Lait == 1)
                {
                    prix = prix += 1;
                    strcpy(MessageL, " avec lait");
                }
                else if (Lait == 0)

                {
                   strcpy(MessageL, " sans lait");
                }
                printf("vous devez payer %fDH\n", prix);
                 printf("votre %s %s %s est pret", MessageB,  MessageS, MessageL);


      break;

      case 2 : prix = 2;
      strcpy(MessageB, "chokolat");
                printf("saisir la dose du sucre\n");
                printf("0 sans sucre, 1 sucree, 2 tres sucree\n");
                scanf("%d", &sucre);
                if(sucre == 1)
                {
                    prix = prix + 0.25;
                    strcpy(MessageS, " sucree");
                }
                else if (sucre == 2)
                {
                    prix = prix + 0.50;
                    strcpy(MessageS, " tres sucree");
                }
                else if (sucre == 0)
                {
                    prix = prix + 0;
                    strcpy(MessageS, " non sucree");
                }
                printf("tape 1 pour Lait ou 0 sans lait\n");
                scanf("%d", &Lait);
                if (Lait == 1)
                {
                    prix = prix + 1; //prix += 1
                    strcpy(MessageL, " avec lait");
                }
                else if (Lait == 0)
                {
                    strcpy(MessageL, " sans lait");
                }
                printf("vous devez payer %fDH\n", prix);
                printf("votre %s %s %s est pret", MessageB,  MessageS, MessageL);


      break;
      case 3 : prix = 2.5;
      strcpy(MessageB, "the");
                printf("saisir la dose du sucre\n");
                printf("0 sans sucre, 1 sucree, 2 tres sucree\n");
                scanf("%d", &sucre);
                if(sucre == 1)
                {
                    prix = prix + 0.25;
                    strcpy(MessageS, " sucree");
                }
                else if (sucre == 2)
                {
                    prix = prix + 0.50;
                    strcpy(MessageS, " tres sucree");
                }
                else if (sucre == 0)
                {
                    prix = prix + 0;
                    strcpy(MessageS, " non sucree");
                }

                printf("vous devez payer %f\n", prix);
                 printf("votre %s %s est pret", MessageB,  MessageS);

      break;
      case 4 :  prix = 3; //printf("votre choix est Soda\n");
                strcpy(MessageB, "soda");
                printf("vous devez payer %fDH\n", prix);
            printf("votre %s est pret", MessageB);
      break;
        default : printf("Error");
    }
    return 0;
}
