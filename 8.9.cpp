#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so nguyen N: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
            printf("Nhap phan tu tai vi tri [%d]: ",i+1);
            scanf("%d",&arr[i]);
    }
    int dem=0,lonnhat;
    for(int i=0;i<n;i++)
    {
        int dem1=0;
        for (int j = 0; j < n; j++)
        {
         if (arr[i] == arr[j])
         {
             dem1++;
         }
        }
        if(dem1>dem)
        {
            dem=dem1;
            lonnhat=arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: %d (xuat hien %d lan)",lonnhat,dem);

    return 0;
}
