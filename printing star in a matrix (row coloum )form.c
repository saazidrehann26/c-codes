#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=10;i++){
            for(j=1;j<=10;j++){
                printf("*");
            }
            printf("\n"); /*we need to put next line here 
            cz we need next line forr only j*/ 
    }
    return 0;
}
