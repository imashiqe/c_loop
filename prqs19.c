#include <stdio.h>
//print all numbers from 1 to 10 except for 6
int main(){

        for (int i = 1; i<=10; i++)
    {
        if (i == 6)//skip
        {
            continue;
        }
        printf("%d \n" , i);
    }
    

}