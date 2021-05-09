

// Assignment Day 7
/*
1. Write a program to accept a 5 digit number and check whether it is a numeric
palindrome. (If reversed number is same as entered number it is called palindrome).

#include<stdio.h>
int main(void)
{
    int num,temp,sum =0;
    printf("Enter a five digit number :");
    scanf("%5d",&num);
    temp = num;     // 12321
    sum = sum*10 + temp%10;  //0+ 1= 1
    temp = temp/10;   // 1232
    sum = sum*10 + temp%10;  // 10+ 2=12
    temp = temp/10;     // 123
    sum = sum*10 + temp%10;   // 120+3=123
    temp = temp/10;   // 12
    sum = sum*10 + temp%10;  // 1230+2=1232
    temp = temp/10;  // 1
    sum = sum*10 + temp%10; // 12320+ 1=12321
    if(sum == num)
    printf("Yes, this %d is a palindrome",sum);
    else
    printf("No, this %d is a not palindrome as reverse is %d.",num,sum);
    return 0;
}
*/

/*
2. Write a program to display number of days in the given year. Check condition for
leap year. A year is a leap year if it is divisible by 4 but not by 100, except that years
divisible by 400 are leap years.
a. Without using logical operators
b. Using logical operators
c. Conditional operator
*/
/*
#include<stdio.h>
int main(void)
{
    int year;
    printf("Enter the year which you want to check : ");
    scanf("%d",&year);
   
    //Without using logical operator
    if(year%4 == 0) 
    {
        if(year%100 != 0)
        printf("%d is a leap year",year);
        else
        printf("%d is not leap year",year);
        
    }

    else
        printf("%d is not leap year",year);
    if(year%400 == 0)  
        printf("%d is a leap year",year);
}

    //With logical operator
    if(year%400 == 0 || year%4 == 0 && year%100 != 0)
    {
        printf("%d is a leap year",year);
        
    }
    else
        printf("%d is not leap year",year);

    //Using Conditional operator
    if( year%4 == 0 ? year%100 != 0 : year%400 == 0)
    {
        printf("%d is a leap year",year);
        
    }
    else
        printf("%d is not leap year",year);
    
    return 0;
}
*/


/*
3. Write a program that will calculate the price for a quantity entered from the
keyboard, given that the unit price is Rs.5 and there is a discount of 10 percent for quantities over 30
and a 15 percent discount for quantities over 50.
*/
/*
#include<stdio.h>
int main(void)
{
    float qty;
    printf("Enter Quantity value  :");
    scanf("%f",&qty);
    if(qty > 50)
    printf("Price is : %.2f",(100.0/115.0)*qty*5);
    else if(qty > 30)
    printf("Price is : %.2f",(100.0/110.0)*qty*5);
    else
    printf("Price is : %.2f",qty*5);
    return 0;
}
*/



