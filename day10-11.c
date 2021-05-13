#include<stdio.h>
#include<stdlib.h>



// FACTORIAL WITH RECURSION
/*
int fact_with_rec(int num);
int main(void)
{
    int num;
    int answer;
    printf("Enter number");
    scanf("%d",&num);
    answer = fact_with_rec(num);
    printf("\nFactorial=%d",answer);
    return 0;
}

int fact_with_rec(int num)
{
    if (num==1)
    return 1;
    else 
    return num * fact_with_rec(num-1);
}
*/



//FACTORIAL WITHOUT RECURSION
/*
int fact_without_rec(int num);
int main(void)
{
    int num;
    int answer;
    printf("Enter number");
    scanf("%d",&num);
    answer = fact_without_rec(num);
    printf("\nFactorial=%d",answer);
    return 0;
}
int fact_without_rec(int num)
{
    int ans=1;
    while(num)
    {
        ans=ans*num;
        num--;
    }
    return ans;
}
*/



// EXTERN INTEGER
// By default zero value
// its scope is block and life is program


/*
extern int i; // memory data section
// it is an intimation to the compiler that i have just done the declaration part but definition i can do anywhere
int main(void)
{
    printf("I:%d",i);
    return 0;
}
i=50;  // it may be defined somewhere outside the program
*/



// REGISTER

// CPU: Registers(storage areas)
// we cannot request registers other than local scope

/*
register int num=30; // global area / variables in global area gets memory in the data section
// But above variable is a register, so it will be stored in the registers of a CPU. So CPU will get confused where to store the data
// we cannot use register keyword in global area 
// you cannot declare register keyword in the global area
// this will give compile time error
int main(void)
{

    return 0;
}
*/


/*
int main(void)
{
// & of register variable cannot be taken
// compile time error will happen
    register int reg;
    printf("Enter Number:");
    scanf("%d",&reg); // we cannot use & with register variable
    printf("%d",reg);

    return 0;
}
*/


/*
int main(void)
{
register int reg_var=40; // register variable
// they will receive memory inside CPU registers
// if data is in CPU it can be accessed fast
// if memory is free in my CPU register then my request to store the variable in the register is granted 
// i can enjoy the speedy performance
// if memory is not available in the register, then my request will not be granted and the register variable will automatically get converted in auto variables
printf("%d",reg_var);
    return 0;
}
*/




// LOCAL VARIABLE IS HAVING LOCAL SCOPE


// STATIC VARIABLE
// YOU CAN HAVE STATIC VARIABLE DECLARATION IN THE GLOBAL AREA
/*
static int svar=50;
void demo();
void demo1();
int main(void)
{
    printf("\n In Main: Svar:%d &Svar=%u",svar,&svar);
    demo();
    demo1();
    printf("\n Accessing Svar from Main again: Svar:%d &Svar=%u",svar,&svar);  // last updated value will be printed in this printf
    return 0;
}

void demo()
{
printf("\n Demo: svar :%d &svar:%u",svar,&svar);
}

void demo1()
{
    svar=svar+200;
printf("\n Demo: svar :%d &svar:%u",svar,&svar);
}
*/




/*

// STATIC VARIABLE

// IN THIS EXAMPLE THE STATIC VARIABLE DID NOT RETAINED THE LAST UPDATED VALUE 
// IF WE DEFINE THE STATIC VARIABLE AT THE LATER STAGE AFTER DECLARING,  THEN COMPILER AUTOMATICALLY CONVERTS STATIC VARIABLE INTO AUTO VARIABLE
// AND THATS WHY STATIC BEHAVIOUR WILL BE SIMILAR TO AUTO
// WE NEED TO DEFINE THE STATIC VARIABLE AT THE TIME OF DECLARATION i.e. INITIALIZE A STATIC VARIABLE 
// if we do not initialize then it will not give compile time error because in this case, only the rule is getting breaked

void test();
int main(void)
{
    test();
    printf("\nBack to main...calling test function again");
    test();
    printf("\nBack to main...calling test function again");
    test();
    return 0;
}
void test()
{
    int num=20; // local variable / auto variable
    static int s;  // declared static variable
     s=50;  // defined static variable at the later stage
    printf("\nNum:%d Num:%u S:%d S:%u",num,&num,s,&s);
    num++;
    s++;
    printf("\n Num:%d Num:%u S:%d S:%u",num,&num,s,&s);
}
*/






/*
void test();
int main(void)
{
    test();
    printf("\nBack to main...calling test function again");
    test();
    printf("\nBack to main...calling test function again");
    test();
    return 0;
}
void test()
{
    int num=20; // local variable / auto variable
 int val=40; // defined a static variable (Data section)
static int s=val; // error : initializer element is not constant
// we need to initialize static variable with integer constant only
// static integer should be always given a value / it cannot be given with value of another variable 
// you cannot assign a local variable value to static variable
// if you do not follow this, it will give complie time error

    printf("\nNum:%d Num:%u S:%d S:%u",num,&num,s,&s);
    num++;
    s++;
    printf("\n Num:%d Num:%u S:%d S:%u",num,&num,s,&s);
}
*/






/*
// in this example the value of num remains the same if we call the test function many times 
// but if we call the test function again and again, it will take the updated value of static variable s 
void test();
int main(void)
{
    test();
    printf("\nBack to main...calling test function again");
    test();
    printf("\nBack to main...calling test function again");
    test();
    return 0;
}
void test()
{
    int num=20; // local variable / auto variable
    static int s=40; // defined a static variable (Data section)
    printf("\nNum:%d Num:%u S:%d S:%u",num,&num,s,&s);
    num++;
    s++;
    printf("\n Num:%d Num:%u S:%d S:%u",num,&num,s,&s);
}
*/



/*
void swap(int n1,int n2);  // function declaration
// void swap(int,int) // Valid Function Declaration

int main(void)
{
    int val1,val2;
    printf("Enter Value 1 :");
    scanf("%d",&val1);
    printf("\n Enter Value 2 :");
    scanf("%d",&val2);
    printf("\n Before SWAP : val1 : %d Val2 : %d",val1,val2);
    swap(val1,val2); //function call
    printf("\n After SWAP : val1 : %d Val2 : %d",val1,val2);
    return 0;
}

//function definition
void swap(int n1,int n2)
{
    printf("\n Inside SWAP Function BEFORE: N1 : %d N2 : %d",n1,n2);
    //logic
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    printf("\n Inside SWAP Function AFTER : N1 : %d N2 : %d",n1,n2);
}
*/




/*
void sum(int num1,int num2);

int accept_num();  // function declaration whose return type is integer

int main(void)  // function declaration

{
        int n1,n2,n3,n4;
    
    // if the function is having a return type, i have to mention a locator
    // locator= function call();

    n1=accept_num(); //wirtten n1=function because if your function is returning some value, there should be someone who can catch that value
    n2=accept_num();  // if you do not catch that valur then that value will fall off
    n3=accept_num();
    n4=accept_num();

printf("\n N1:%d N2:%d N3:%d N4:%d",n1,n2,n3,n4);

sum(n1,n2);// function call
//call by value or pass by value

sum(n3,n4);

    return 0;
}

int accept_num()
{
    int num;
    printf("\nEnter Number:");
    scanf("%d",&num);
    return num; // as the function is returning integer thats why i have written int while writing function
}

void sum(int num1,int num2)
{
    int result;
    result=num1+num2;
    printf("\nResult:%d",result);
}
*/




/*
void sum(int num1,int num2); // function declaration
// sum is a user defined function which is taking two arguments 
// both the argumenst are of type integer
// also sum() is not returning anything


int main(void)
{
    int n1,n2,n3,n4;
    int res1,res2;

    printf("Enter Number:");
    scanf("%d",&n1);
    
     printf("\nEnter Number:");
    scanf("%d",&n2);

     printf("\nEnter Number:");
    scanf("%d",&n3);

     printf("\nEnter Number:");
    scanf("%d",&n4);

printf("\nCalling Function First time");
sum(n1,n2);// function call
//call by value or pass by value

printf("\nBack to maim");

printf("\nCalling Function Second time"); 
sum(n3,n4);

 printf("\nEnd of Main");
    return 0;
}

void sum(int num1,int num2)
{
    int result;
    result=num1+num2;
    printf("Result:%d",result);
}
*/



/*
void sum(int num1,int num2); // function declaration
// sum is a user defined function which is taking two arguments 
// both the argumenst are of type integer
// also sum() is not returning anything


int main(void)
{
    int n1,n2,n3,n4;
    int res1,res2;

    printf("Enter Number:");
    scanf("%d",&n1);
    
     printf("\nEnter Number:");
    scanf("%d",&n2);

     printf("\nEnter Number:");
    scanf("%d",&n3);

     printf("\nEnter Number:");
    scanf("%d",&n4);


sum(n1,n2); // function call
    res1=n1+n2; 
 printf("\nResult 1:%d",res1);

sum(n3,n4);
    res2=n3+n4;
 printf("\nResult 1:%d",res2);
   
    return 0;
}
*/



/*
void test();

int main(void)
{
    test();
    printf("\nHello Atharva");
    test();
    return 0;
}
void test()
{
    printf("Inside test function");
}
*/