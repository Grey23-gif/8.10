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
    int dem=0,lon[n];
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
        if(dem1>=dem)
        {
            dem=dem1;
            lon[i]=arr[i];
        }
    }
    printf("Phan tu xuat hien nhieu nhat la: (xuat hien %d lan: ",dem);
     for (int i = 0; i < n; i++)
    {
        if(lon[i]>0)
        {
        if (lon[i] != -1) 
        {
            printf("%d ", lon[i]);
           
            for (int j = i + 1; j < n; j++)
            {
                if (lon[j] == lon[i])
                {
                    lon[j] = -1; 
                }
            }
        }
        }
    }

    return 0;
}
