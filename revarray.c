#include <stdio.h>

int main()

{
    int n;
    printf("ENTER THE NUMBER OF ELEMENTS: ");
    scanf("%d",&n);
int a[n], i;

printf("Enter the numbers");
for(i = 0;i <n ; i++)
    {
        scanf("%d", &a[i]);
        }
printf("array in reverse is :");
for(i = n-1; i>= 0; i--)
{

printf("%d", a[i]);
}
    return 0;
}