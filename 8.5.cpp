#include <stdio.h>

int main()
{
    int hang,cot;
    int sum=0;
    printf("Nhap so hang: ");
    scanf("%d",&hang);
    printf("Nhap so cot: ");
    scanf("%d",&cot);
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
   for(int i=0;i<hang;i++)
    {
        for(int j=0;j<cot;j++)
        {
           if(i==0||i==hang-1||j==0||j==cot-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    printf("\n Tong cac so tren duong bien: %d",sum);

    return 0;
}

