#include <stdio.h>
int main()
 {
    int num, dig, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    int divi = 1;

    while (temp >= 10) 
    {
        temp /= 10;
        divi *= 10;
    }
     temp = num; 
    while (divi > 0) 
    {
        dig = temp / divi;       
        if (dig == 0) 
    {
            dig = 1;             
        }
        printf("%d", dig);        
      temp = temp % divi;      
        divi /= 10;               
    }

    printf("\n");

    return 0;
}