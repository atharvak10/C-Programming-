#include<stdio.h>
#include<stdlib.h>

// DAY 7

// Control Statement
// Switch Case
/*
int main(void)
{
    int month;
    printf("Enter Month Number :");
    scanf("%d",&month); 

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("It is having 31 days");
        break;
        case 2:
        printf("It is having 28 or 29 days");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("It is having 30 days");
        break;

    }
    return 0;
}
*/


// Switch case
// 1. ADD   2. SUB  3. MUL  4.DIV  5. MOD
/*
int main(void)
{
    int num1,num2;
    int choice;
    printf("Enter First number:");
    scanf("%d",&num1);

     printf("\nEnter Second number:");
    scanf("%d",&num2);

printf("\nEnter choice");
printf("\n1.ADD 2.SUB 3.MUL 4.DIV 5.MOD");
scanf("%d",&choice);

// sequence of case does not matter
// for i.e  case 4 can be first then case 5 then case1 then case3 and case 2
// for this it will print the right output of our entered choice. it is not dependent on the sequence of written choice

// using case 1 and case1 two times will give error
// break means if we enter choice, only one case gets executed at a time
// it break is not given, it will execute all programs until it realize break 
// this means if there is no break provided, and we enter our choice, still all choices will be printed
// using break will bring directly out of the switch case

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

default:
printf("\nYou have entered a wrong option");
}

    return 0;
}
*/


// ASCII Values
// A-Z : 65 to 90
// a-z : 97 to 122
// 0 to 9 : 48 to 57
/*
int main(void)
{
    char ch;
printf("Enter a Character:");
scanf("%c",&ch);

if((ch>=65) && (ch<=90))
printf("It is a Capital Letter");

else
if((ch>=97) && (ch<=122))
printf("It is a Small Letter");

else
if((ch>=47) && (ch<=57))
printf("It is a Numeric value");

else
printf("It is a Special Character");

return 0;
}
*/

/*
int main(void)
{
int num;
printf("Enter Number:");
scanf("%d",&num);

if(num>0)
printf("Entered Number Is a Positive Number");
else
if(num<0)                     // this is also called as nested if else
printf("Entered Number is a Negative Number");
else
printf("It is zero");

return 0;
}
*/



/*
int main(void)
{
int num;
printf("Enter Number:");
scanf("%d",&num);

if(num%2==0)
{
    printf("Entered Number is Even Number"); 
} 
else
printf("Entered Number is Odd");
    return 0;
}
*/


// Control Statement

// now i want to write a program to check whether the given number is even or odd
/*
int main(void)
{
int num;
printf("Enter Number:");
scanf("%d",&num);

if(num%2==0)   // if we give';' after if block then it will give compile time error
{
    printf("Entered Number is Even Number"); // its not necessary to give scope i.e. "{}" to 'íf' block if only one statement is used 
} // but in case of multiple statements within if block, then scope is necessary
// this is called as scope of 'if' block
    return 0;
}
*/



// Ternary operators / Conditional operator
//    ? :
// format: (Expression)? True : False
// if the expression is true then then it will print the true value and if the expression is false then it will print the false value


/*
int main(void)
{
int num1,num2;
int max1,max2;
printf("Enter First Number:");
scanf("%d",&num1);

printf("\nEnter Second Number:");
scanf("%d",&num2);

printf("\nNum1:%d Num2:%d",num1,num2);

max1=(num1>num2)?num1:num2;
printf("\nResult of Max1:%d",max1);

max2=(num1<num2)?num1:num2;
printf("\nResult of Max2:%d",max2);
return 0;
}
*/



/*
int main(void)
{
    int a=4,b=3;
    int res;
    res= a++ + ++a + --b;
    printf("Result:%d \nUpdated Value of a:%d \nUpdated value of b:%d",res,a,b);
    return 0;
}
*/


/*
int main(void)
{
 int a=2,b;
 b= a++ + a-- + ++a + --a;   // this is multiple occurances of pre and post operation within expression
 printf("A:%d B:%d",a,b);    // solve from left to right as it is in an expression 
    return 0;
}
*/

/*
int main(void)
{
    int i=6;                            //multiple occurances of pre and post operation within printf statement , travel from right to left for solving 
    printf("%d %d %d %d",i,i--,i,i++);  // these types are compiler dependent answers
    return 0;                           // some may get diff diff answers
                                        // if these types of questions comes in exam then solve manually
}
*/



// ASSIGNMENT DAY 6

/*
3. Write a program to calculate Area and Perimeter of Triangle for given length of
three sides of triangle.
 Use sqrt() function from math.h to calculate square root.
 Perimeter = a + b + ca+b+c
 Area = √s x (s – a) x (s – b) x (s - c)
Test the program using values 3,4,5 and 1, 2, 3 and 1, 2, 4 for a, b, c. Observe the
results.
*/
/*
int main(void)   // use #include<math.h> for this program
{
    float a,b,c;

    printf("Enter Value of A, B and C:");
    scanf("%f%f%f",&a,&b,&c);
    printf("\nPerimeter of Triangle:%.4f",a+b+c);
    float s=(a+b+c)/2;
    printf("\nArea of triangle:%.3f",sqrt(s*(s-a)*(s-b)*(s-c)));
    return 0;
}
*/


/*
2. Write a program to convert temperature in Celsius to Fahrenheit and vice versa.
Formula for conversion is
ºC = 5/9 x (ºF - 32)
*/

/*
int main(void)
{
    double temp;
    printf("Enter temperature in Celsius : ");
    scanf("%lf",&temp);
    printf("Temperature in Fahrenheight : %.4lf", (9*temp/5)+32);
    printf("\nEnter temperature in Fahrenheight : ");
    scanf("%lf",&temp);
    printf("Temperature in Celsius : %.3lf",(5.0/9.0)*(temp-32));
    return 0;
}
*/


//1. Write a program to accept three digit numbers and find sum of all its digits.
/*
int main(void)
{
int a,once,tens,huns,num;
printf("Enter a three digit number:");
scanf("%d",&a);
num=a;            //123
once=num%10;      //3
num=num/10;       //12
tens=num%10;      //2
num=num/10;       //1
huns=num%10;      //1
int add=once+tens+huns;
printf("Addition: %d",add);
return 0;
}
*/


// ASSIGNMENT DAY 5


//2. Write a program to accept an integer value and print its table.


//4. Write a program to accept three integer numbers and find its average.
/*
int main(void)
{
    int a,b,c,result;
    printf("\nEnter first number:");
    scanf("%d",&a);
    printf("\nEnter second number:");
    scanf("%d",&b);
    printf("\nEnter third number:");
    scanf("%d",&c);
    result=a+b+c;
    result/=3;
    printf("Average:%d",result);
    return 0;
}
*/



/*
3. Write a program to accept a 4 digit number and
a. Display face value of each decimal digit
b. Display place value of each decimal digit
c. Display no in reverse order by changing decimal place values
If user enters a 4 digit number 9361 output should be
a. 9 3 6 1
b. 9361 = 9000 + 300 + 60 + 9
c. 1639
*/
/*
int main(void)
{
    int num;
    printf("Enter a four digit no. :");
    scanf("%d",&num);
    int once,tens,hun,tho,temp;
    temp = num;
    once = num%10;
    temp = temp/10;
    tens = temp%10;
    temp = temp/10;
    hun = temp%10;
    temp = temp/10;
    tho = temp%10;
    printf("You Entered %d,\n",num);
    printf("Output in format a. %d  %d  %d  %d.",tho,hun,tens,once);
    printf("\nOutput in format b. %d = %d+%d+%d+%d.",num,tho*1000,hun*100,tens*10,once);
    printf("\nOutput in format C. %d%d%d%d",once,tens,hun,tho);
    return 0;
}
*/

/*
// 1. Write a program to display ASCII values for character constants ‘\n’, ‘\r’, ‘\t’, ‘\a’, ‘\b’.
int main(void)
{
    printf("ASCII Value of \\n is:%d",'\n');
    printf("\nASCII Value of \\r is:%d",'\r');
    printf("\nASCII Value of \\t is:%d",'\t');
    printf("\nASCII Value of \\a is:%d",'\a');
    printf("\nASCII Value of \\b is:%d",'\b');
    return 0;
}
*/


//Bitwise Shift Operations

// Shortcut formula for finding out output of right shift operations

//       x << n = x * 2^n  // for left shiftoperations

// For Right Shift Operations
//       x >> n =  x/2^n

/*
int main(void)
{
    int num;
    num=-30>>2;                 // can also write as printf(" 30<< or >> 2",30<< or >> 2);
    printf("Value=%d",num);     // negative number will always give negative output
    return 0;
}
*/



/*
int main(void)
{
    int num;
    num=-30<<2;
    printf("Value=%d",num);
    return 0;
}
*/


/*
int main(void)
{
    int num;
    num=30>>2;
    printf("Value=%d",num);
    return 0;
}
*/

/*
int main(void)
{
    int num;
    num=30<<2;
    printf("Value=%d",num);
    return 0;
}
*/

/*
//BITWISE OPERSTOR
int main(void)
{
    int a=12,b=35;    // ~n = -(n+1)
    printf("Bitwise complement of a variable:%d",~a);
    printf("Bitwise complement of b variable:%d",~b);
    return 0;
}
*/



/*
//BITWISE OPERSTOR
int main(void)
{
    int res,a=5,b=10;                      // if both the value matches then answer is zero
    res=a^b;  // Bitwise XOR               // a= 0 1 0 1
    printf("Result:%d",res);               // b= 1 0 1 0
    return 0;                         // =======================
}                                      //        1 1 1 1   =15
*/


//BITWISE OPERSTOR
// whenever question is asked on BITWISE operator, you always have to work on Binary Data 
/*
int main(void)
{
int a=6,b=8;                    //        a=       0 1 1 0
int res1=a&b;                   //        b=      1 0 0 0       // if any value is zero then the output is zero
printf("Result:%d",res1);       //        ========================
                                //               0 0 0 0


int res2=a|b;                            // a=     0 1 1 0 
printf("\nResult:%d",res2);              // b=     1 0 0 0
return 0;                                //   ==================
}                                        //      1 1 1 0     // if any value is one then output is one
*/

/*
int main(void)
{
    int a=0,b=5,c=1,d;
    d=a && b || c;
    printf("A:%d B:%d C:%d D:%d",a,b,c,d);
    printf("\n!d=%d",!d);
    return 0;
}
*/


/*
int main(void)
{
    int a=0,b=3,c=1,d;
    printf("A=%d B=%d C=%d",a,b,c);
    d=a++||(++b && c++);
     printf("\nA=%d B=%d C=%d D=%d",a,b,c,d);
    return 0;
}
*/



/*
int main(void)
{
    int a=10,b=3,c=0,d;
    printf("A=%d B=%d C=%d",a,b,c);
    d=a++||(++b && c++);
     printf("\nA=%d B=%d C=%d D=%d",a,b,c,d);
return 0;
}
*/




 /*
int main(void)
{
    int k1=1010;
    int res=--k1;
    printf("k1=%d Result=%d",k1,res);
    return 0;
}
*/



/*
int main(void)
{
    int k1=1010;
    int res=k1--;
    printf("k1=%d Result=%d",k1,res);
    return 0;
}
*/


/*
int main(void)
{
int num=45; 
int a=++num; // pre-increment operation. which means operation is performed first then value is assigned 
printf("num=%d A=%d",num,a);
    return 0;
}
*/


// c= a++ + b-- + c++ + a-- ;  this is called as multiple occurances of pre and post operation in an expression


// UNARY OPERATIONS
// ++ or --
// ++ Unary Increment , It will increment the value by 1
// -- Unary Decrement , it will decrement the value by 1
// operand++     /   operand--     : post operations
//  ++operand or -- operand then it is called as pre-operation

/*
int main(void)
{
int num=45;  // num value is always going to update. the only vlaue which will update or not is of variable a and that depends on pre or post operation
int a=num++;
printf("num=%d A=%d",num,a); // num is operand , operand++ , num++ (post increment)
    return 0; // output is num=46 A=45
    // in post operation, value is assigned first, then operation is performed
}
*/





// RELATIONAL OPERATOR 
// Returns 1 if True 
//Returns 0 if False
// Relational operators are used for making comparison

/*
int main(void)
{
    int num1,num2;
printf("Enter Number 1=",num1);
scanf("%d",&num1);
printf("Enter Number 2=",num2);
scanf("%d",&num2);
printf("\nNum1==Num2:%d",num1==num2);

printf("\nNum1<=Num2:%d",num1<=num2);
printf("\nNum1<Num2:%d",num1<num2);

printf("\nNum1>=Num2:%d",num1>=num2);
printf("\nNum1>Num2:%d",num1>num2);

printf("\nNum1!=Num2:%d",num1!=num2); //  != means not equal to

return 0;
}
*/

// SHORT HAND OPERATOR
/*
int main(void)
{
int num=20;
num+=5;
printf("Num=%d",num);

//similarly 
num-=10;
printf("\n2nd value=%d",num);
// the first printf will give answer as 25 
// based on the updated value of num i.e. 25 the second operation will take place

num*=2;
printf("\n3rd value=%d",num);
// the seconf printf will give answer as 15 
// based on that, using that updated value, the third printf will print the output

num/=3;
printf("\n4th value=%d",num);

num%=3;
printf("\n5th value =%d",num);

    return 0;
}
*/


// int a=4; //assigning 4 value to variable a (assignment operator)
// int b=(1,2,3); // b=3 // comma operator



/*
int main(void)
{
int num1,num2;
printf("Enter Number 1=",num1);
scanf("%d",&num1);
printf("Enter Number 2=",num2);
scanf("%d",&num2);
printf("\nAddition=%d",num1+num2);
printf("\nSubtraction=%d",num1-num2);
printf("\nDivition=%d",num1/num2);              // these all are ARITHMATIC OPERATORS
printf("\nMultiplication=%d",num1*num2);
printf("\nModulus=%d",num1%num2);
    return 0;
}
*/

/*
int main(void)
{
prinf("hello everyone"); // the compiler will not understand the code
// the linker will not be able to link this with stdio.h 
// this type of error is called as linker error // ld is linking error
// if we use return 0 and after execution we get output as 1 then it means that the program has not successfully executed
    return 0;
}
*/


// NO OUTPUT IS RUNTIME ERROR 
//  WRONG SYNTAX IS COMPILE TIME ERROR 
//  SEMANTIC ERROR   //  Semantic is one type of compile time error
// EXAMPLE
//  int a;
//  a=40;  valid statement
//   40=a ??? its called as sematic error
// it will give error as L-Value Required error
// L-Value stands for left hand side value or locater value which means location where you are storing the data is wrong


/*
int main(void)
{
    printf("%d",20/0);  // not possible as any number cannot be divided by 0
    // so it will not display anything after execution 
    // so this type of error is called as RUN TIME ERROR
    // so run time error ocurs when user have written a wrong logic and not got the output
    // or when the user have written a logic but that logic is not working properly. instead that logic is taking me to some error  that im not even able to identify 
    // this type of error is runtime error
    return 0;
}
*/


//Example of logical error
/*
int main(void)
{
    int n1=10,n2=5,result;
    result=n1-n2;
    printf("n1=%d n2=%d Addition=%d",n1,n2,result);     
    return 0;
}
*/

/*
this is the output of the above code as the syntax is correct
PS C:\Users\91966\Desktop\Sunbeam Data> gcc a1.c
PS C:\Users\91966\Desktop\Sunbeam Data> ./a.exe
n1=10 n2=5 Addition=5
if we observe the output , n1 is 10 , n2 is 5 , but im representing addition so i should get as 15 but i am getting output as 5.
this is because i have written wrong logic for addition
logic should be result=n1+n2
this the programmer or developer mistake 
if we write a wrong logic in my programand due to which i get the error as LOGICAL ERROR in my output
logical error is basially when thr programmer have written a program but the program is not generating the expected result due to some logical error in the program


*/



// IF YOU HAVE USED SOME VARIABLE, BUT YOU HAVE NOT DECLARED IT, IF YOU HAVE USED A WRONG KEYEWORD, INCORRECT BRACKETS, INCORRECT SCOPE, INCORRECT STRUCTURE OF SYNTAX, INCORRECT FORMAT SPECIFIER THEN THOSE ARE CALLED AS COMPILE TIME ERRORS

//the errors which comes during the compilation phase is called as compile time errors

/*
int main(void)
{
    int a=25;
    printf("%d",a)  
    return 0;
}
// here purposefully not giving the ';'  . the following will be the error
// the following error will be compile time error as it happened during compilation
PS C:\Users\91966\Desktop\Sunbeam Data> gcc a1.c
a1.c: In function 'main':
a1.c:7:19: error: expected ';' before 'return'
    7 |     printf("%d",a)
      |                   ^
      |                   ;
    8 |     return 0;
      |     ~~~~~~

*/



/*
int main(void)
{
    int a=25;
    printf("%d",A);
    return 0;
}
*/
 // above program will give the below error
// as the error came during the compilation phase so these types of errors are called as compile time errors
/*  PS C:\Users\91966\Desktop\Sunbeam Data> gcc a1.c
a1.c: In function 'main':
a1.c:7:17: error: 'A' undeclared (first use in this function)
    7 |     printf("%d",A);
      |                 ^
a1.c:7:17: note: each undeclared identifier is reported only once for each function it appears in
PS C:\Users\91966\Desktop\Sunbeam Data> 
*/



/*
int main(void)
{
     char c3; // in below example if unsigned is removed, the range will be from -128 to 127 and it will display the value after addition of c1 and c2 and then it will rotate
    char c1=200; //signed character 
    char c2=65;  // signed character
     c3= c1+c2;  
    
    printf("c3=%d",c3);
    printf("\nAddress=%u",&c3);
    return 0;
}
*/

/*
int main(void)
{
    unsigned char c3;
    char c1=200; //signed character 
    char c2=70;  // signed character
     c3= c1+c2;  // if we keep signed c1 and signed c2 cgaracter's result in unsigned(c3), it will ultimately give me range of unsigned 
    
    // first it will equate 200+70=270. then it will see the range is from 0 to 255.
    // 270 is beyond 255 i.e. out of the range of character, it wil again start counting from 0
    // so, 256 will become 0; 257 will become 1; 258 will become 2; and so on
    
    printf("c3=%d",c3);
    printf("\nAddress=%u",&c3);
    return 0;
}
*/

/*
int main(void)
{
    unsigned char c3; // as it is unsigned, range will be from 0 to 255
    char c1=199;// ans is 252 as it will add c1 and c2
    char c2=53;
    c3= c1+c2;
    printf("c3=%d",c3);
    return 0;
}
*/


/*
int main(void)
{
char ch=-130; // ans will be 126 as it will rotate from higher positive value
printf("Value=%d",ch);
    return 0;
}
*/

/*
int main(void)
{
char ch='A';// range will be from -128 to 127 as it is considered as signed character by default
printf("max=%d min=%d",CHAR_MAX,CHAR_MIN);
    return 0;
}
*/


/*
int main(void)
{
unsigned char ch=300;// as it is declared as unsigned char, it will have range from 0 to 255
printf("Value=%d",ch);
    return 0;
}
*/

// BY DEFAULT ALL CHARACTER VARIABLES ARE SIGNED CHARACTERS until its mentioned as unsigned 
/*
int main(void)
{
unsigned char ch=258; // range is 0 to 255. if it goes beyond 255, it will again start from 0-255
printf("CH=%d",ch);
    return 0;
}
*/

// BY DEFAULT ALL CHARACTER VARIABLES ARE SIGNED CHARACTERS 
/*
int main(void)
{
char ch=131; // it will go to the negative value as its beyond range
printf("CH=%d",ch);
    return 0;
}
//128 will be -128
// 129 will be -127
// 130 will be -126
// 131 will be -125 and so on

*/


// BY DEFAULT ALL CHARACTERS VARIABLES ARE SIGNED CHARACTERS
/*
int main(void)
{
char ch=128; // it will go to the negative value as its beyond range
printf("CH=%d",ch);
    return 0;
}
*/


/*
int main(void)
{
char ch=126;
printf("CH=%d",ch);
    return 0;
}
*/

// Character datatype
// char= 1 byte = 8 bits
// i.e 2^8=256
// it can be 0 to 255 or it can be -128 to 127
// 0 to 255 = unsigned character range
// -128 to 127 = signed character range


/*
int main(void)
//Minimum=-2147483648 
//Maximum=2147483647
{
    int num=-2147483651; 
    printf("Value=%d",num);
    return 0; 
    }
*/


/*
int main(void)
{
    int num=2147483650; // since the declared number is going beyond the range, it will go back to the negative scale and the value will rotate 
    printf("Value=%d",num);
    return 0; // since the above value is within the max and min limits, it will print the same value
}
*/

/*
int main(void)

//Minimum=-2147483648 
//Maximum=2147483647

{
    int num=2147483646;
    printf("Value=%d",num);
    return 0; // since the above value is within the max and min limits, it will print the same value
}
*/

/*
int main(void)
{
int num=123456789;
// min and max range it can take 
// INT_MIN and INT_MAX these are some predefined values. these are defined under the header file #include<limits.h>
printf("Minimum=%d \nMaximum=%d",INT_MIN,INT_MAX);
return 0;
}
*/

/*
Minimum=-2147483648 
Maximum=2147483647
*/
// Range of character: 
//range of interger=
// int take 4 bytes= 32 bits
// i.e. 2^31   2^30   2^29   2^28..............2^1   2^0
//  when we talk about number system, we may have positive numbers or negative numbers
// positive numbers are UNSIGNED NUMBERS
// negative numbers are SIGNED NUMBERS

/*
#include<stdio.h>
*/

// new concept of escape sequences
//  \f = formfeed   \v = vertical tab  \a = adds alert 
//these three escape sequences cannot be visualised on ecplispe, vs code, etc.
// it can be visualised when we use printer 
//  \f puts your data after the command on the next page only while printing the operation (its like a page break command)
//  \v gives vertical space between lines. It takes the same amount of spaces as \t.
//  \a if you want to generate a beep sound or some kind of alert then use \a


/*
int main(void)
{
    printf("OM13\tDAY05"); //escape sequences are used for formatting your output in a proper format
    return 0; //  \t leaves six spaces
}
*/

/*
int main(void)
{
    printf("ASCII Value Of \\t :%d",'\t');
    printf("\nASCII Value Of \\b :%d",'\b');
    printf("\nASCII Value Of \\n :%d",'\n');
    printf("\nASCII Value Of \\r :%d",'\r');
    return 0;
}
*/
/*
int main(void)
{
    printf("ASCII Value Of \\t :%d",'\t');
    return 0;
}
*/

/*
int main(void)
{
    printf("Welcome \rAtharva Your\b Are a Genius");
    return 0;
}
*/
/*
int main(void) 
{
printf("Welcom atharva\rAtharva");
    return 0;
}
*/
/*
int main(void) 
{
printf("Welcome\rAtharva\rwelcomE");
    return 0;
}
*/
/*
int main(void) //  \r stands for carriage return
{
printf("Welcome\rAtharva");
    return 0;
}
*/


/*
int main()
{
 printf("welcome-atharva\b to om13");// \b is used to erase a previous character and it is called as back slash character constant
    return 0;
}
*/

/*
int main(void)
{
    printf("\"WELCOME ATHARVA\"");
    return 0;
}
*/
/*
// assignment day 4
int main(void)
{
    int num;
printf("Num:");
scanf("%d",&num);
printf("First=%d Second=%o Third=%x",num,num,num);
}
*/
/*
int main()// assignment day 4
{
    printf("*\n**\n***\n****\n");
    printf("*");
    printf("\n**");
    printf("\n***");
    printf("\n****");
    return 0;
}
*/

/*
// escape sequences
int main()
{
printf("Welcome Atharva");
printf("\nC\Programing"); // if we use sigle back \ , it will not print it on the output screen. instead use double back \\ in between text to print single back \
printf("\n\"How are you?\"");// if you want to write anythimg in "" then use \"----\" for printing it in bet""
}
*/
/*
int main(void)// if we enter character first then we dont need to write %*c for supressing the meaning of \n
{
char ch;
  int num;
  printf("Enter Number=");
  scanf("%d",&num);
  printf("\n Enter character=");
  scanf("%*c");//this means we are supressing the meaning of \n and this the proper syntax for it
  scanf("%c",&ch);// or we can directly write scanf("%*c",&ch)
  printf("\n Num=%d Character=%c",num,ch);
return 0;
}
*/

/*
int main()
{
  char ch;
  int num;
  printf("Enter Number=");
  scanf("%d",&num);
  printf("\n Enter character=");
  scanf("%c",&ch);
  printf("\n Num=%d Character=%c",num,ch);
// it will not print the character value if we press enter 
// enter means new line character "\n" special character 
// we need to supress the meaning of \n
}
*/
/*
int main()
{
int i=40;
printf("Number=%d",i);
printf("\nAddress of i=%u",&i);
    return 0;
}
*/


/*
// for address we use the format specifier as %u
int main(void)
{
 int num1,num2;
printf("Enter Numner Value 1=");
scanf("%d",&num1);
printf("Enter valur 2=");
scanf("%d",&num2);
printf("\nAddress of Number1= %u",&num1);
printf("\nAddress of Number2=%u",&num2);
return 0;
}
*/

/*
int main()
{
    int num1,num2;
    printf("Enter Numner Value 1=");
    scanf("%d",&num1);
    printf("Enter valur 2=");
    scanf("%d",&num2);
    printf("%d=%d",num1,num2);
    return 0;
}
*/

/*
int main(void)
{
    int num1,num2;
    printf("Enter Numner Value 1=");
    scanf("%d",&num1);
    printf("Enter valur 2=");
    scanf("%d",&num2);
    return 0;
}
*/

/*
int main(void)
{
    int num=567;
    int count;
    count=printf("Atharva=%d",num);
    printf("\nCount=%d",count);
    return 0;
}
*/
/*
int main(void)
{
    int num=567;
    int count;
    count=printf("%6d",num);
    printf("\n Count=%d",count);
    return 0;
}
*/
/*
int main(void)
{
    int num=4567;
    int i;
i=printf("Number=%d",num);
printf("\n %d",i);
    return 0;
}
*/
/*
int main()
{
int count;
count=printf("Atharva");
printf("\n Count=%d",count);
    return 0;
}
*/


/*
int main()
{
int i;
i= printf("Hello Atharva");
printf("\n Value of i=%d",i);
 return 0;
}
*/
/*
int main(void)
{
float f_1=8.45;
printf("%0.2f",f_1);


    return 0;
}
*/

/*
int main(void)
{
float f_1=8.45;
printf("%8.3f",f_1);


    return 0;
}
*/

/*
int main(void)
{
int num1=20;
int num2=400;
int num3=5000;
int num4=600;
int num5=70;
int num6=2;
printf("%d %d %d",num1,num2,num3);
printf("\n%d %d %d",num4,num5,num6);

printf("\n%-5d %-4d %-7d",num1,num2,num3);
printf("\n%-5d %-4d %-7d",num4,num5,num6);
    return 0;
}
*/
/*
int main(void)
{
int num1=20;
int num2=400;
int num3=5000;
int num4=600;
int num5=70;
int num6=2;
printf("%d %d %d",num1,num2,num3);
printf("\n%d %d %d",num4,num5,num6);

printf("\n%5d %4d %7d",num1,num2,num3);
printf("\n%5d %4d %7d",num4,num5,num6);
    return 0;
}
*/


/*
int main(void)
{
int num;
num=0x32;
printf("Normal Value=%d",num);
printf("\n Octal Valur=%o",num);
printf("\n Hexadecimal Value=%x",num);

    return 0;
}
*/

/*
int main(void)
{
char ch;
ch='a';
printf("ASCII Value of a=%d",'a');
printf("/n ASCII Valur of random Alfhabet=%d",'h');

    return 0;
}
*/

/*
int main(void)
{
    int num;
    num=064;
printf("Num1=%d Num2=%o Num3=%x",num,num,num);
return 0;
}
*/


/*
int main(void)
{
    int c;
    c=45,67,29,98;
    printf("Varible value=%d",c);
    return 0;
}

*/


/*
int main(void)
{
int a=(45,67,12,90);
printf("Z=%d",a);

return 0;
}
*/


/*
int main(void)
{
int i=5;
float f= 5.6;
char ch='M';
double d=7.89;
printf("size = %d",sizeof(i)+sizeof(f));
printf("\n size=%d",sizeof(i)+sizeof(f)+sizeof(ch));
printf("\n size=%d",sizeof(i+f));
printf("\n size=%d",sizeof(i+f+ch+d));

}

*/
/*
int main(void)
{
int num=50;
printf("Value=%d",num);
printf("\n size of num variable=%d",sizeof(num));
printf("\n size of integer datatype=%d",sizeof(int));
printf("\n size of any random integer=%d",sizeof(67));
}
*/
/*
int main(void)
{
    float f_val=7.8;
    printf("Value = %f",f_val);
    printf("\n size of f_val = %d ",sizeof(f_val));
    printf("\n size of float data type = %d ",sizeof(float));
    printf("\n size of any decimal numbers = %d ",sizeof(2.56));
                                   
    printf("\n size of any decimal numbers = %d ",sizeof(2.56f));
    return 0;
}
*/
/*
int main(void)
{
char ch='n';
printf("character value = %c",ch);
printf("\n size of ch variable = %d",sizeof(ch));
printf("\n size of character datatype = %d",sizeof(char));
printf("\n size of any character = %d",sizeof('B'));

}
*/
/*
int main(void)
{
char ch='j';
printf("Character Value=%c \nASCII Value=%d",ch,ch);
printf("\n Character Value=%c",ch);
}
*/


/*
int main(void)
{
int num=50;
float f=8.9;
char ch='T';
printf("Variable=%d Float=%f Character=%c",num,f,ch);
}
*/


/*
int main(void)
{
    int v1=40; 

    int num1,num2; 
    num1=20;
    num2=10;  

    printf("Value = %d",v1);
    printf("\n Num1 = %d",num1);
    printf("\n Num2 = %d",num2);

    printf("\n Value = %d Num1 = %d Num2 = %d ",v1,num1,num2);


    return 0;
}
*/