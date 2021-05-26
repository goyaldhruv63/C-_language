#include <stdio.h>
int main() {
    int x,temp,z, rev = 0;
    printf("Enter an integer: ");
    scanf("%d", &x);
    temp = x;

    while (x!= 0) 
	{
        z = x%10;
        
       rev += z * z * z;
       //rev = rev + z*z*z;
       
       x=x/10;
    }

    if (rev == temp)
        printf("%d is an Armstrong number.", temp);
    else
        printf("%d is not an Armstrong number.", temp);

    return 0;
}
	
