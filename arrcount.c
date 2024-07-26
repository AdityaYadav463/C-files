#include <stdio.h>
int main ()
{
    int a,one=0,zero=0;
    scanf("%d",&a);
    int arr[a];
    for(int i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);


    }

    for(int i=0;i<a;i++)
    {
        if(arr[i]==1)
        {
            one++;
        }
        else
        {
            zero++;
        }
    }

    printf("number of ones : %d\n",one);
    printf("number of zeros : %d", zero);
    
    return 0;

}