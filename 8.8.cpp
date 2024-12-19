	#include <stdio.h>

int main()
{
    int hang,cot,n;
    int sum=0;
    printf("Nhap so nguyen N: ");
    scanf(" %d",&n);
    hang=cot=n;
    int arr[hang][cot];
    for(int i=0;i<hang;i++)
    {
        for(int j=0;j<cot;j++)
        {
            printf("Nhap phan tu tai vi tri [%d] [%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMa tran vua nhap là:\n");
    for (int i = 0; i < hang; i++) 
    {
        for (int j = 0; j <cot; j++) 
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    printf("Cac so tren duong cheo chinh la: ");
   for(int i=0;i<hang;i++)
    {
        for(int j=0;j<cot;j++)
        {
           if(i+j==n-1)
            {
                printf(" %d",arr[i][j]);
                sum+=arr[i][j];
            }
        }
    }
    printf("\n Tong cac so tren duong cheo phu: %d",sum);

    return 0;
}

