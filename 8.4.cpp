#include <stdio.h>

int main()
{
    int hang,cot;
    int lon=0;
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
   for(int i=0;i<hang;i++)
    {
        for(int j=0;j<cot;j++)
        {
            if(lon<arr[i][j])
            {
                lon=arr[i][j];
            }
        }
    }
    printf("\n So lon nhat trong mang la: %d",lon);

    return 0;
}

