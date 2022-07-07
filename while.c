#include <stdio.h>
//print the number from 0 to n , if n is given by user
int main(){
   int n;
   printf("Enter Number :");
   scanf("%d" , &n);

   int i=0;
   while (i <= n)
   {
    printf("%d\n" , i);
    i++;
   }
   
}