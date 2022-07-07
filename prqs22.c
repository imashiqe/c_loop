#include <stdio.h>
//print reverse of the table for a number n
int main(){
    int n;
    printf("Enter number :");
    scanf("%d" , &n);

    for (int i = 10; i>=n;  i--)
    {
        printf("%d \n" , n * i);
    }
    
 return 0;
}