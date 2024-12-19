#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9},n,dem=0;
    printf("Nhap so nguyen N can tim: ");
    scanf("%d",&n);
    for(int i=0;i<sizeof(arr) /sizeof(arr[0]);i++)
    {
        if(n==arr[i])
        {
            dem=1;
            break;
        }
        
    }
    
    if(dem=1)
        {
        printf("So %d co ton tai trong mang",n);
      
        }
        else
        {
        printf("Trong mang k co phan tu nay.");
      
        }


    return 0;
}

