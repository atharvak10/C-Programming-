#include<stdio.h>


// 1. Function  declaration  / Prototype / Signature
// 2. Function definition / Function
// 3. Function call

/*
// 1.Function Declaration
// returntype functionname (list of arguments)
void test(); // ====> function declaration
// test() is my function name, which is not taking any arguments
int main(void)
{
//  once the below function definition is done i have to give a functiomn call
printf("\nInside main funtion...");
test();
printf("\nBack to main function...");
}

// function definition / function body
void test()
{
    printf("\nInside Test Function:");
    printf("Welcome Atharva");  
    // if i am not having any return statement here that's the reason i have written void before test()
    // as there is no return 0, after printing welcome atharva, it will go back to int main(void) and perform the remaining task
}
*/



//enum : "enumeration list" is also called as user defined datatype
// enum is always declared before main
// enum always takes integer constants. You cannot use fractional or decimal values
// enumeration is basically list of integers constant
// set of values with some specific constant
// enum size is always 4 bytes as it always take integers 


/*
typedef enum DEPARTMENTS{ADMIN,PLACEMENT,TRAINING} DEPT;
// enum DEPARTMENTS : Real name
// DEPT : Nick name

int main(void)
{
enum DEPARTMENTS real_var; // real_var is a variable
DEPT nick_var; // nick_var is a variable

real_name=ADMIN;
printf("%d",real_var);

nick_name=ADMIN;
printf("\n%d",nick_var);

    return 0;
}
*/



/*
enum{ADMIN,TRAINING,PLACEMENT}; // enum who is not given any name that enum is called as Anonymous enum
int main(void) // you can directly access the elements of anonymous enum like in this example
{
    printf("%d\n%d\n%d",ADMIN,TRAINING,PLACEMENT);
    return 0;
}
*/



/*
// accessing the enum elements by creating enum variable
enum DEPARTMENTS{ADMIN,TRAINING,PLACEMENT};
// enum DEPARTMENTS is user defined datatype

int main(void)
{
    enum DEPARTMENTS d; // d is a variable of type enum DEPARTMENTS
d=ADMIN; // ADMIN element value is stored inside the variable d
printf("Value of variable d:%d",d);
d=TRAINING;
printf("\nValue of variable d:%d",d);
d=PLACEMENT;
printf("\nValue of variable d:%d",d);

printf("\nSize of enum:%d",sizeof(d));
printf("\nSize of enum:%d",sizeof(enum DEPARTMENTS));
return 0;
}
*/



/*
enum colors{RED=-5,BLUE,GREEN=-30,GREY};
 int main(void)
{
    printf("Red=%d",RED);
    printf("\nBlue=%d",BLUE);
    printf("\nGreen=%d",GREEN);
    printf("\nGrey=%d",GREY);
    return 0;
}
*/



/*
enum colors{RED,BLUE,GREEN=30,GREY};
 int main(void)
{
    printf("Red=%d",RED);
    printf("\nBlue=%d",BLUE);
    printf("\nGreen=%d",GREEN);
    printf("\nGrey=%d",GREY);
    return 0;
}
*/



/*
enum colors{RED=10,BLUE,GREEN=30,GREY};
 int main(void)
{
    printf("Red=%d",RED);
    printf("\nBlue=%d",BLUE);
    printf("\nGreen=%d",GREEN);
    printf("\nGrey=%d",GREY);
    return 0;
}
*/


/*
enum colors{RED=10,BLUE,GREEN,GREY=40};  // here as blue is not assigned with any value,it will take the next value of its previous element 
//as red=10, blue will be 10+1=11
 int main(void)
{
    printf("Red=%d",RED);
    printf("\nBlue=%d",BLUE);
    printf("\nGreen=%d",GREEN);
    printf("\nGrey=%d",GREY);
    return 0;
}
*/



/*
enum colors{RED=10,BLUE=20,GREEN=30,GREY=40};
int main(void)
{
printf("Red=%d",RED);
    printf("\nBlue=%d",BLUE);
    printf("\nGreen=%d",GREEN);
    printf("\nGrey=%d",GREY);
    return 0;
}
*/



/*
enum colors{RED,BLUE,GREEN,GREY};   // ';' is cumpulsory
 // enum is a keyword
 //colors is a name given to enum
// RED,BLUE,GREEN,GREY are the elements available inside enum colors
// by default red=0 blue=1 green=2 grey=3
// you can also give values to the elements inside enum
int main(void)
{
    // accessing the enum list of elements by their name
    printf("Red=%d",RED);
    printf("\nBlue=%d",BLUE);
    printf("\nGreen=%d",GREEN);
    printf("\nGrey=%d",GREY);
    return 0;
}
*/



/*
int main(void)  // you can also use typedef char character;
{
    typedef int atharva; // atharva is a nickname given to existing datatype int
    // int is real name 
    // atharva is nickname
    int num1=30; // create a variable using real name
    // creating variable using nickname
    atharva num2=40; // using nickname here
    printf("Number1=%d Number2=%d",num1,num2);
    return 0;
}
*/



/*
int main(void)
{
    int num1,num2;
    int choice;
    printf("Enter First number:");
    scanf("%d",&num1);

     printf("\nEnter Second number:");
    scanf("%d",&num2);
do{
printf("\nEnter choice");
printf("\n1.ADD 2.SUB 3.MUL 4.DIV 5.MOD");
scanf("%d",&choice);

switch(choice)
{
    case 1:
    printf("\nAddition:%d",num1+num2);
    break;                               
    case 2:                              // using break will bring directly out of the switch case
    printf("Subtraction:%d",num1-num2);
    break;

case 3:
    printf("\nMultiplication:%d",num1*num2);  
    break;                                     
case 4:  
    printf("\nDivision:%d",num1/num2);          
    break;

case 5:
    printf("\nModulus:%d",num1%num2);
    break;
}
}while(choice!=0);  // it will continue to ask for input till this condition comes
// when the user will press 0 , then the loop will break

    return 0;
}
*/


// continue statement

/*
int main(void)
{
    int x=10,y=5,ans;
    while(y-->=1,x-->=1)
    {
        if(y==0)
        continue; // when the condition y==0 will come, it will not print that condition rather it will continue printing the next conditions
        // here even if y condition is not true but the x conditions is true
        // it will print the all the values until both the conditions are false
        // but due to this continue statement it will not break the loop
        // it will immediately perform the next operation in the looping are 

        ans=x/y;
        printf("\n%d/%d=%d",x,y,ans);
    }   
    return 0;
}
*/


// break jump statement 

/*
int main(void)
{
    int x=10,y=5,ans;
    while(y-->=1,x-->=1)
    {
        if(y==0)
        break;   // break will break the loop if one of the condition is false i.e when x=0 or y=0
        ans=x/y;
        printf("\n%d/%d=%d",x,y,ans);
    }
// can write any printf() and it will be executed     
    return 0;
}
*/




// goto jump statement
// goto is rarely used as it skips multiple statements when used 

/*
int main(void)
{
    int num;
    printf("Enter Num:");
    scanf("%d",&num);
    if(num==5)  // if this condition is satisfied, then it will go inside the loop
    // if not them also goto is going to be executed
{
    goto test; //goto lablename // it will directly jump to the test on next to below line
    printf("Inside if block");  // it will not print this line of printf()
    test: printf("\nNum Value is 5");
    printf("\nAfter lable test");
}
printf("\nOut of if loop");  // this out of the loop printf() statement will be printed
    return 0;
}
*/



// NESTED FOR LOOP

//if we want to represent the data in form of rows and colums, we go for nested for() loop
// first for loop is form maintaining the row data. It is also called as outer for() loop
// outer for()loop will always try to work with row data 
// inner for()loop will always try to work with column data 


/*
int main(void)
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
*/


/*
int main(void)
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            printf(" %d %d ",i,j);
        }
        printf("\n");
    }
    return 0;
}
*/



/*
int main(void)
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<=5;j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
*/



// FOR LOOP
// if you know the initial and final condition then go for FOR LOOP


// if we just type for(;;)
// it will be empty for loop 
// it will execute but it will not having any body
// it will not give compile time error 

/*
int main(void)
{
int i;
for(i=0;i<10;i++)
{
    printf("%d ",i++);  // the output will be 0 2 4 6 8 
    // the reason is , one increment is of loop and another is of printf()
    // even if we dont give{} for this input, its okay because there is only one statement within the for loop
}
    return 0;
}
*/


/*
int main(void)
{
    int i=1;
    for(;i<5;) // there is no terminating condition given
    // it will display the value in infinite loop as the terminating condition is not given
    // it will continuously print 1 1 1 1 1 1 1 1 1 1..............till infinity
    // press ctrl+c or ctrl+z to get out of the infinite loop
    {
        printf("%d ",i);
        
    }
    return 0;
}
*/



/*
int main(void)
{
    int i;
    for(i=1;i<=5;i++);  // ';'(semi colan) is given. Then scpoe{} should not be given
                       // it executes the for loop and completes here itself
                       // as there is no body or scope of the for loop, it will just perform the operations like usual
                       // but when i=6 , condition is false. It will not have an executable body 
                       // then it will come out of the loop because of the ;(semi colan) used
                       // it will print the last updated value of i i.e. 6 in this example
                       // it there was not any ; used then the answer would have been 1 2 3 4 5 like below example 
    printf("%d",i);
    return 0;
}
*/



/*
int main(void)
{
    int i;  // logic for printing odd numbers
    for(i=1;i<=10;i+=2)
    {
        printf("%d ",i);
    }
    return 0;
}
*/


/*
int main(void)
{
    int i; // logic for printing even numbers
    for(i=0;i<=10;i+=2) // short hand operators can also be used 
    {
        printf("%d ",i);
    }
    return 0;
}
*/


/*
int main(void)
{
    int i=1;
    for(;i<=7;)
    {
        printf("%d ",i);
        i++;   // instead of writnig the terminating condition int for(), we can write it in the end like shown
        // but it should always be in the loop
    }
    return 0;
}
*/


/*
int main(void)
{
     int i=0;  
    for(;i<=10;i++)  // skipping the initialization part in the FOR loop and it is allowed to do so
    {
printf("%d ",i);
    }
    return 0;
}
*/


/*
int main(void)
{
    int i;
    for(i=10;i>=1;i--)
    {
        printf("%d ",i);
    }
    return 0;
}
*/


/*
// for( ; ; )   for(initialization; conditional statement; incr/decr operation)
int main(void)
{
    int i;
    for(i=0;i<=8;i++)  // format of for loop
    {
        printf("%d",i);
    }
    return 0;
}
*/


//  WHILE LOOP
// if you do not know the intial condition but you know the terminating condition then use while loop
//  ";" (semi colan) cannot be used in while loop 
// it will give error if used 

/*
int main(void)
{
    int i=1;
    while(i<10)  // i<10 is called as the terminating condition
    {
printf(" %d",i);
i++; // it can increment or decrement i.e (i++ or i-- or --i or ++i)
 // i++ will increase the value of i after every step until the condition of the while()becomes false i.e 10<10
    }
    return 0;
}
*/



/*
// structue of while loop
int main(void)
{
    while(condition)
    {
        //body of the while loop
    }
    return 0;
}
*/


/*
// to avoid these multiple statements, looping is done 
int main(void)
{
printf("%d",1);
printf(" %d",2);
printf(" %d",3);
printf(" %d",4);
printf(" %d",5);
    return 0;
}
*/


