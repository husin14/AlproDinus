#include "pustaka.h"

int main()
{

    int a[100];
    int i,n,cari;

    printf("berapa banyak data = "); scanf("%d",&n);
    printf("masukkan nilai integer (urut)\n");

    for (i=0; i<n; i++)
    {
        printf("nilai indeks %d = ",i); scanf("%d",&a[i]);
    }

    printf("masukkan nilai yang akan kita cari = "); scanf("%d",&cari);

printf("%d",binnary_search(a,n,cari));
    return 0;
}
