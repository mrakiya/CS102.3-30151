//Question 01

#include <stdio.h>

int main()
{
    int n1,n2;
    printf("enter numbers");
    scanf("%d %d",&n1,&n2);
    if (n1>n2)
        printf("number one is the highest number");
    else
        printf("second number is the highest number");
}


//Question 02

#include <stdio.h>

int main()
{
    int n1,n2,n3,max,min;
    printf("enter numbers");
    scanf("%d %d %d",&n1,&n2,&n3);
    max=n1;
    if (n2>max)
        max=n2;
    if (n3>max)
        max=n3;
    min=n1;
    if (n2<min)
        min=n2;
    if (n3<min)
        min=n3;

    printf("The highest number is %d \n",max);
    printf("The smallest number is %d \n",min);
}


//Question 03

int main()
{
    char employeen[50];
    float basicsalary,newsalary,increment;

    printf("enter employee name ");
    scanf("%s",&employeen);

    printf("enter basic salary ");
    scanf("%f",&basicsalary );

    if (basicsalary < 5000)
        increment = basicsalary * 0.05 ;
        else if (basicsalary >= 5000 && basicsalary < 10000 )
        increment = basicsalary * 0.10 ;
        else
        increment = basicsalary * 0.15 ;
    newsalary = basicsalary+increment;
    printf("Employee Name %s \n ",employeen);
    printf("New Salary  %.2f \n ",newsalary);
    return 0;
}



//Question 04

#include <stdio.h>

int main()
{
    float r,d,c,a;
    float p=3.14159;
    printf("enter radius of circle___");
    scanf("%f",&r);

    d=2*r;
    c=2*p*r;
    a=p*pow(r,2);

    printf("diameter of the circle is : %.2f \n",d);
    printf("circumference of the circle is : %.2f \n",c);
    printf("Area of the circle is : %.2f \n",a);

    return 0;
}


//Question 05

#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    if (num1 % num2 == 0) {
        printf("%d is a multiple of %d\n", num1, num2);
    } else {
        printf("%d is not a multiple of %d\n", num1, num2);
    }

    return 0;
}



//Question 06

#include <stdio.h>

int main() {
    // Uppercase letters
    printf("Integer equivalent of 'A': %d\n", 'A');
    printf("Integer equivalent of 'B': %d\n", 'B');
    printf("Integer equivalent of 'C': %d\n", 'C');

    // Lowercase letters
    printf("Integer equivalent of 'a': %d\n", 'a');
    printf("Integer equivalent of 'b': %d\n", 'b');
    printf("Integer equivalent of 'c': %d\n", 'c');

    // Digits
    printf("Integer equivalent of '0': %d\n", '0');
    printf("Integer equivalent of '1': %d\n", '1');
    printf("Integer equivalent of '2': %d\n", '2');

    // Special symbols
    printf("Integer equivalent of '$': %d\n", '$');
    printf("Integer equivalent of '*': %d\n", '*');
    printf("Integer equivalent of '+': %d\n", '+');
    printf("Integer equivalent of '/': %d\n", '/');

    // Blank character
    printf("Integer equivalent of ' ': %d\n", ' ');

    return 0;
}


//Question 07

#include <stdio.h>

int main()
{
    char cityn;
    float basicsalary,grosssalary,monthlys,bonus;
    int servicetime;

    printf("enter basicsalary ");
    scanf("%f",&basicsalary);

    printf("enter monthly sales RS: ");
    scanf("%f",&monthlys);

    printf("enter first letter of your city ");
    scanf("%s",&cityn);

    printf("enter your service years as a salesman ");
    scanf("%d",&servicetime);

    if (servicetime >= 5)
        basicsalary = basicsalary + (basicsalary * 0.1);

    if (cityn == 'C')
        basicsalary = basicsalary + 2500;

    if (monthlys < 25000)
        bonus = monthlys * 0.1;
    else if (monthlys >= 25000 && monthlys < 50000)
        bonus = monthlys * 0.12;
    else if (monthlys >= 50000)
        bonus = monthlys * 0.15;

    grosssalary = basicsalary + bonus;

    printf(" \n Gross monthly remuneration of the salesman: %.2f\n", grosssalary);

    return 0;
}
