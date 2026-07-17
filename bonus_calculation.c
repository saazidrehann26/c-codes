#include<stdio.h>
int main()
{
    float salary,rating,service_year,updated_salary,bonus,salaryIncrease;
    printf("Enter salary:");
    scanf("%f",&salary);
    printf("Enter rating:");
    scanf("%f",&rating);
    printf("Enter service_year:");
    scanf("%f",&service_year);
    if(service_year>=5){
        if(rating>=8.0){
            bonus=20;
        }
        else if(rating<=8.0){
            bonus=10;
        }
        else{
            printf("NO BONUS APPLIED!!!!");
        }
    }
    else if(service_year==3 && service_year<5){
        if(rating>=9.0){
            bonus=5;
        }
        else{
            printf("NO BONUS APPLIED!!!!");
        }
    }
    else if(service_year<=3){
            printf("NO BONUS APPLIED!!!!");
    }
    else{
        printf("Get out");
    }
    if (bonus > 0) {
        updated_salary = salary + (salary * (bonus / 100));
        printf("Updated salary is: %.1f\n", updated_salary);
        salaryIncrease=updated_salary-salary;
        printf("salary Increase is: %.1f\n",salaryIncrease);

    } else {
        printf("NO BONUS APPLIED!!!!\n");
    }

    return 0;
}
