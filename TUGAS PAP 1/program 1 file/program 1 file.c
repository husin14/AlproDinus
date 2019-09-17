#include <stdio.h>
#include <stdlib.h>

///nama = Husin Sufi
///nim = A11.2018.10909
///kelp = A11.4202

float hasil(int num1,int num2,char operator)
{

    if ( operator == '+')
    {

        return num1+num2;
    }

    else if ( operator == '-')
    {
        return num1-num2;
    }

    else if ( operator == '*')
    {
       return num1*num2;
    }

    else if ( operator == '/')
    {
        return num1/num2;
    }
}

int main()
{
    print_identitas();

    puts("");

    print_jumlah(15,12);
    print_jumlah(44,29);

    puts("");

    float hitung = hasil(2,3,'+');
    puts("===================================");
    printf("%d %c %d = %.2f\n",2,'+',3,hitung);
    hitung = hasil(9,2,'-');
    printf("%d %c %d = %.2f\n",9,'-',2,hitung);
    hitung = hasil(4,3,'*');
    printf("%d %c %d = %.2f\n",4,'x',3,hitung);
    hitung = hasil(9,3,'/');
    printf("%d %c %d = %.2f\n",9,':',3,hitung);
    puts("======================================");


    return 0;
}


void print_identitas ()
{
    printf("NIM    = A11.2018.10909\n");
    printf("Nama   = Husin Sufi\n");
    printf("Alamat = Bangetayu Wetan\n");
}

void print_jumlah (int num1,int num2)
{
    int k;
    k = num1 + num2;
    printf("%d + %d = %d\n",num1,num2,k);


}



