#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pilihan,tinggi,lebar,n,j,i,j1;
    ulang:
        {
            printf("--------------------------------------------------\n");
            printf("| 1. bintang berbentuk segitiga siku-siku \t|\n| 2. bintang berbentuk jam pasir \t\t|\n| 3. Keluar \t\t\t\t\t|");
            printf("\n--------------------------------------------------\n");
            printf("pilihan: ");
            scanf("%d",&pilihan);

            if(pilihan==1)
            {
                printf("tinggi:");
                scanf("%d",&tinggi);
                for (n=0;n<tinggi;n++)
                {
                    for (j=0;j<=n;j++)
                        {
                            printf("*");
                        }
                    printf("\n");
                }
            }

            else if(pilihan==2)
            {

                printf("lebar:");
                scanf("%d",&lebar);
                int l=lebar/2;
                for (n=0;n<l;n++)
                {
                    for (i=0;i<n;i++)
                        {
                            printf(" ");
                        }
                    for (j=l;j>n;j--)
                        {
                            printf("*");
                        }
                    for (j1=l;j1>=n;j1--)
                        {
                            printf("*");
                        }
                    printf("\n");
                }
                for (n=1;n<=l+1;n++)
                {
                    for (i=l;i>n;i--)
                        {
                            printf(" ");
                        }
                    for (j=n/2;j>n;j++)
                        {
                            printf("*");
                        }
                    for (j1=n/2;j1>=n;j1++)
                        {
                            printf("*");
                        }
                    printf("\n");
                }
            }

            else if(pilihan==3)
            {
                return 0;
            }
            else
            {
                printf("!!!pilihan anda tidak ada pada menu, silahkan input ulang !!!\n");
                goto ulang;
            }

        }
}
