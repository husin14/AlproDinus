#include "header.h"

void frekuensine(char teks[], int kabeh[])
{
    int dowo = strlen(teks);
    int a, b;
    char abjad_cilik = 'a', abjad_gede = 'A';

    for (a=0; a<26; a++)
    {
        kabeh[a] = 0;
    }

    for (a=0; a<dowo; a++)
    {
        abjad_cilik = 'a';
        abjad_gede = 'A';

        for (b=0; b<26; b++, abjad_cilik++, abjad_gede++)
        {
            if (teks[a] == abjad_cilik || teks [a] == abjad_gede)
            {
                kabeh[b]++;
            }
        }
    }
}

int is_anagram(char text1[], char text2[])
{
    int kabeh_siji[26];
    int kabeh_loro[26];

    int i;

    frekuensine(text1, kabeh_siji);
    frekuensine(text2, kabeh_loro);

    for (i=0; i<26; i++)
    {
        if (kabeh_siji[i]!=kabeh_loro[i])
        {
            return printf("teks dari \"%s\" bukan anagram dari teks \"%s\" > FALSE > ", text1, text2), 0;
        }
    }
    return printf("teks dari \"%s\" merupakan anagram dari teks \"%s\" > TRUE > ", text1, text2), 1;
}
nama(){
    printf("Nama : Husin Sufi \n");
    printf("Nim  : A11.2018.10909\n");
    printf("Kelompok : A11.4202\n");

}
