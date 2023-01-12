#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char tersikelime[50];
    int uzunluk,k; //k diznin tersini bulmada isimize yarayacak.
    printf("Kontrol edilecek kelime :");
    gets(tersikelime);

    uzunluk=strlen(tersikelime);
    uzunluk--;
    k=0;
    while (uzunluk>k)
    {
        if (tersikelime[uzunluk]!=tersikelime[k]) //uzunluðu bir azaltarak dizinin son elemanýn degerini ilk elemanýn degeri ile kontrol ettiriyoruz.
            {
                printf("%s nin tersi esit degil",tersikelime);
                exit(0);
            }
            uzunluk--;
            k++;
    }
    printf("%s kelimenin tersi esit",tersikelime);

    return 0;
}
