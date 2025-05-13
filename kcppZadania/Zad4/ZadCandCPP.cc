#include <stdio.h>

extern "C"
{

    int zapisz_i_odczytaj_plik_c()
    {
        FILE *fp;
        char buf[256];

        printf("Zapisuje zdanie do pliku plik1.txt\n");

        fp = fopen("plik1.txt", "w");
        if (fp == NULL)
        {
            fprintf(stderr, "Nie można otworzyć pliku do zapisu: plik1.txt\n");
            return 1;
        }

        fprintf(fp, "Bardzo proste zdanie.\n");
        fclose(fp);

        printf("Otwieram plik plik1.txt:\n");

        fp = fopen("plik1.txt", "r");
        if (fp == NULL)
        {
            fprintf(stderr, "Nie można otworzyć pliku do odczytu: plik1.txt\n");
            return 1;
        }

        while (fgets(buf, sizeof(buf), fp) != NULL)
        {
            printf("%s", buf);
        }
        fclose(fp);

        printf("Otwieram nieistniejący plik:\n");

        fp = fopen("nieistniejacy_plik.txt", "r");
        if (fp == NULL)
        {
            fprintf(stderr, "Nie można otworzyć pliku do odczytu: nieistniejacy_plik.txt\n");
            return 1;
        }

        while (fgets(buf, sizeof(buf), fp) != NULL)
        {
            printf("%s", buf);
        }
        fclose(fp);

        return 0;
    }
}

int main()
{
    zapisz_i_odczytaj_plik_c();
}