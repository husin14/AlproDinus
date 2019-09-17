#include "pustaka.h"

void nama(){
printf("Nama : Husin Sufi\n");
printf("Nim  : A11.2018.10909\n");
printf("Kelompok : A11.4212\n");
}


void char_frequency(char text[])
{
    int mak=strlen(text);
    int sum=0;
    int abjad[27];
    int x,y,z;
    int huruf;



    for(x=0;x<26;x++)
    {
        abjad[x]=0;

    }




    for(y=0;y<mak;y++)
    {
        for(z=0;z<26;z++)
        {
            huruf=tolower(text[y]);
            if(huruf>=97 && huruf<=122)
            {
                abjad[huruf-97]+=1;

                break;
            }
        }
    }

    for(z=0;z<26;z++)
    {
        if(abjad[z]>0)
        {
           printf("%d. %c = %d\n",z,97+z,abjad[z]);
        }

    }


}
