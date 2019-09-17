#include "pustaka.h"

void nama(){
printf("Nama : Husin Sufi\n");
printf("Nim  : A11.2018.10909\n");
printf("Kel  : A11.4202\n\n");

}
int hitung_vokal(char text[]){
int a=0;
int jumlah=0;
while(text[a]!= '\0'){
    if(text[a]=='a'||text[a]=='i'||text[a]=='u'||text[a]=='e'||text[a]=='o'){
        jumlah++;
    }
    else if(text[a]=='A'||text[a]=='I'||text[a]=='U'||text[a]=='E'||text[a]=='O'){
        jumlah++;
    }
    a++;
}
return jumlah;
}
