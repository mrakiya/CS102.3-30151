// Question 01

 #include <stdio.h>
 #include <stdlib.h>

  int main()
  {
    printf("Name: Akila lakshitha\n");
          	printf("School: Royal Collage\n");
            return 0;
   }



// Question 02


    #include <stdio.h>
    #include <stdlib.h>

   int main()
   {
             printf("*\n");
             printf("**\n");
             printf("***\n");
             printf("****\n");
             printf("*****\n");

    	  return 0;
   }


// Question 03


#include <stdio.h>
#include <stdlib.h>
int main()
{
    int no1;
    float no2;
    double no3;
    char name[10];

    printf("Enter first number:");
    scanf("%d",&no1);
    printf("Enter second number:");
    scanf("%f",&no2);
    printf("Enter third number:");
    scanf("%lf",&no3);
    printf("Enter a character:");
    scanf("%s",name);
    printf("First number   %d\n",no1);
    printf("Second number  %f\n",no2);
    printf("Third number   %lf\n",no3);
    printf("Character      %s\n",name);
    return 0;
}

Question 04
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,total;
    printf("Enter first number:");
    scanf("%d",&no1);
    printf("Enter second number:");
    scanf("%d",&no2);
    total = no1+no2;
    printf("the total is %d\n",total);

    return 0;
}

// Question 05

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float no1,no2,avg;
    printf("Enter the first number:");
    scanf("%f",&no1);

    printf("Enter the second number:");
    scanf("%f",&no2);

    avg=(no1+no2)/2;
    printf("The average is %.2f\n",avg);

    return 0;
}


// Question 06


#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stdname[50];
    int byear;
    int age;

    printf("Enter stdname:");
    scanf("%s",&stdname);

    printf("Enter your byear:");
    scanf("%d",&byear);

    age = (2023 - byear);

    printf("stdname is %s\n", stdname);
    printf("age is %d\n", age);

     return 0;
}


// Question 07


#include <stdio.h>
#include <stdlib.h>

int main()
{
    double no1,no2,temp;

    printf("Enter the first number:");
    scanf("%lf",&no1);

    printf("Enter the second number:");
    scanf("%lf",&no2);

    printf("\nBefore swapping, no1=%.2lf \n",no1);
    printf("Before swapping, no2=%.2lf \n",no2);

    temp=no1;
    no1=no2;
    no2=temp;

    printf("\n After swapping,no1=%.2lf \n",no1);
    printf("After swapping,no2=%.2lf",no2);

    return 0;
}




