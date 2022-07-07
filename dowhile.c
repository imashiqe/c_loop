#include <stdio.h>
     //print the sum of first n natural numbers also ,print them in reverse
int main(){
    int n;
    printf("Enter Number :");
    scanf("%d" , &n);

    int sum = 0;
    for (int i=1; i<=n;  i++)
    {
        sum = sum + i;
    }
    
    printf("Sum is %d \n" , sum);

    for (int i=n; i>=1;  i--)
    {
        printf("%d\n" , i);
    }
    

    return 0;
}