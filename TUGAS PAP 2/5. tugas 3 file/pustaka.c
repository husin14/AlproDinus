#include "pustaka.h"

void nama(){
printf("Nama : Husin Sufi\n");
printf("Nim  : A11.2018.10909\n");
printf("Kel  : A11.4202\n\n");

}

void diamon(int angka){
int i,j,k,z,num;
    puts(" ");
    for(i=angka;i>= 0 ;i--){
        for (j=i; j>=0; j--){
            printf(" ");
        }
        for(k=1; k<= angka-i; k++ ){
            printf("*");
        }
        for(k=1; k<= angka-(i+1); k++){
            printf("*");
        }
        puts("");
    }
/// segitiga kebalik
    for(i=0; i<=angka; i++){
        for(j=i; j>=0; j--){
            printf(" ");
        }
        for(k=1;k<=angka-i; k++){
            printf("*");
        }
        for(k=1;k<=angka-(i+1);k++){
            printf("*");
        }
        puts("");
    }
}
