#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter value of n:");
        scanf("%d",&n);
    for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                printf("*");
            }
            printf("\n"); /*we need to put next line here 
            cz we need next line forr only j*/ 
    }
    return 0;
}
