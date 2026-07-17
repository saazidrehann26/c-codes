#include<stdio.h>
int main()
{
    float taxRate,netSalary,taxAmount;
    int currentSalary;
    char occupationType;
    printf("Input occupation type(governmentEmployee=g,privateEmployee=p,frelancer=f):");
    scanf("%c",&occupationType);
    printf("Input Current Salary:");
    scanf("%d",&currentSalary);
    if(occupationType=='g'){
        if(currentSalary<=500000){
                taxRate=5;
        }
        else if(currentSalary>=500000){
                taxRate=10;
        }
        else{
            printf("No extra tax applied\n");
        }
    }
    else if(occupationType=='p'){
        if(currentSalary<=400000){
                taxRate=10;
        }
        else if(currentSalary>=400000&&currentSalary<=800000){
                taxRate=15;
        }
        else if(currentSalary>=800000){
                taxRate=20;
        }
        else{
            printf("No extra tax applied\n");
        }
    }
    else if(occupationType=='f'&&currentSalary>0){
                taxRate=12;
    }
    else{
        printf("Invalid Occupation\n");
    }
    if(taxRate>0){
        taxAmount=currentSalary*(taxRate/100);
        netSalary=currentSalary-taxAmount;
        printf("Applied tax is %.0f%%\n", taxRate);
        printf("Tax amount: %.2f\n", taxAmount);
        printf("Net salary: %.2f\n", netSalary);
    }
    else{
        printf("!!!!!!!!!!!");
    }
    return 0;
}
