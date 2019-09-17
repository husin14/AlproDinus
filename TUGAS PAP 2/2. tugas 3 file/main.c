#include "pustaka.h"

int main()
{
       nama();
    int hasil;
    printf("Menentukan huruf vokal pada Kalimat\n");
    puts("");
    hasil=hitung_vokal("laki-laki");
    printf("jumlah huruf vokal dari Laki-laki adalah           :%d \n",hasil);
    hasil=hitung_vokal("Ada apa sih");
    printf("jumlah huruf vokal dari Ada apa sih adalah         :%d \n",hasil);
    hasil=hitung_vokal("Ada ini di situ");
    printf("jumlah huruf vokal dari Ada ini di situ adalah     :%d \n",hasil);
    hasil=hitung_vokal("Anak kos makan mie");
    printf("jumlah huruf vokal dari Anak kos makan mie adalah  :%d \n",hasil);


    puts("");
    return 0;
}
