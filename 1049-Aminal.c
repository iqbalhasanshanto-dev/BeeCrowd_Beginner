#include <stdio.h>

int main()
{
    char class[20], subclass[20], diet[20];
    scanf("%s %s %s", class, subclass, diet);

    if (class[0] == 'v') // vertebrado
    {
        if (subclass[0] == 'a') // ave
        {
            if (diet[0] == 'c') // carnivoro
                printf("aguia\n");
            else // onivoro
                printf("pomba\n");
        }
        else // mamifero
        {
            if (diet[0] == 'o') // onivoro
                printf("homem\n");
            else // herbivoro
                printf("vaca\n");
        }
    }
    else // invertebrado
    {
        if (subclass[0] == 'i') // inseto
        {
            if (diet[2] == 'm') // hematofago
                printf("pulga\n");
            else // herbivoro
                printf("lagarta\n");
        }
        else // anelideo
        {
            if (diet[0] == 'h') // hematofago
                printf("sanguessuga\n");
            else // onivoro
                printf("minhoca\n");
        }
    }

    return 0;
}