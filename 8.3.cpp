#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen N: ");
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Nhap phan tu tai vi tri [%d] [%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\nMa tran: \n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

