#include<stdio.h>
#include<conio.h>
viod main() 
{
    float baseSalary, hraPercent, daPercent, taPercent;
    float hra, da, ta, grossSalary;
    printf("Enter the base salary: ");
    scanf("%f", &baseSalary);
    printf("Enter the percentage of HRA: ");
    scanf("%f", &hraPercent);
    printf("Enter the percentage of DA: ");
    scanf("%f", &daPercent);
    printf("Enter the percentage of TA: ");
    scanf("%f", &taPercent);
    hra = (hraPercent / 100) * baseSalary;
    da = (daPercent / 100) * baseSalary;
    ta = (taPercent / 100) * baseSalary;
    grossSalary = baseSalary + hra + da + ta;
    printf("The gross salary is: %.2f\n", grossSalary);
    getch();
}
