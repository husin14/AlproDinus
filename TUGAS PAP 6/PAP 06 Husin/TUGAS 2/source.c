#include "header.h"

int Search_Word(char word[], char text[])
{
    int i, j, k, sama;
    int kalimat = strlen(text);
    int huruf = strlen(word);

    for (i=0; i<= kalimat - huruf; i++)
    {
        sama = 0;
        for (j=0, k=i; j<huruf; j++, k++)
        {
            if (word[j] == text[k])
            {
                sama++;
            }
        }
        if (sama == huruf)
        {
            return printf("kata dari \"%s\" terdapat pada teks \"%s\" > TRUE > ", word, text), 1;
        }
    }
    return printf("kata dari \"%s\" tidak ada di teks \"%s\" > FALSE > ", word, text), 0;

}

void nama()
{
    printf("Nama = Husin Sufi\n");
    printf("NIM= A11.2018.10909\n");
    printf("Kelp=A11.4202\n");
}
