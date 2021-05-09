#include<stdio.h>
#include<stdlib.h>

/*
int main(void)
{
    int n,i;
    int *ptr=NULL;
    printf("Enter Number of elements to be stored in an array : ");
    scanf("%d",&n);

    //1.REQUEST FOR DYNAMIC MEMORY (HEAP SECTION)
    ptr=(int *)calloc(n,sizeof(int));
   

    if(ptr==NULL)
    {
        printf("Memory can not be allocated");
        return 0;
    }
    //2.IF MEMORY IS ALLOCATED, USE THE MEMORY
    else
    {
        printf("\n Enter Array Elements :");
        for(i=0;i<n;i++)
            scanf("%d",&ptr[i]);
        printf("\n Array elements are :");
        for(i=0;i<n;i++)
            printf(" %d ",ptr[i]);
    }

    //3. RELEASE THE MEMORY
    free(ptr); //CAUSE DANGLING POINTER AND DUE TO WHICH THERE WILL BE MEMORY LEAKAGE
    ptr=NULL; //avoid memory leakage       
    

    return 0;
}
*/



/*
int main(void)
{
    int n,i;
    int *ptr=NULL;
    printf("Enter Number of elements to be stored in an array : ");
    scanf("%d",&n);

    //1.REQUEST FOR DYNAMIC MEMORY (HEAP SECTION)
    ptr=(int *)malloc(sizeof(int)*n);
    //suppose user have enterd n=5 
    //malloc(4*5)
    //malloc(20bytes)
    //IF MALLOC ALLOCATES MEMORY SUCCESSFULLY THEN IT RETURNS BASE ADDRESS OF THAT BLOCK
    //IF IT FAILS TO ALLOCATE THEN IT RETURNS NULL

    if(ptr==NULL)
    {
        printf("Memory can not be allocated");
        return 0;
    }
    //2.IF MEMORY IS ALLOCATED, USE THE MEMORY
    else
    {
        printf("\n Enter Array Elements :");
        for(i=0;i<n;i++)
            scanf("%d",&ptr[i]);
        printf("\n Array elements are :");
        for(i=0;i<n;i++)
            printf(" %d ",ptr[i]);
    }

    //3. RELEASE THE MEMORY
    free(ptr); //CAUSE DANGLING POINTER AND DUE TO WHICH THERE WILL BE MEMORY LEAKAGE
    ptr=NULL; //avoid memory leakage       
    

    return 0;
}

*/



/*
int main(void)
{
    printf("\n %d ",__LINE__);
    printf("\n %s",__TIME__);
    printf("\n %s",__DATE__);
    printf("\n %s",__FILE__);

    return 0;
}
*/

/*
#define PI 3.14

int main(void)
{
    #if defined(PI)
        printf("\n PI is defined");
    #else
        printf("\n PI is not defined");
    #endif

    #undef PI // please undefine the value of PI 

    #if defined(PI) 
        printf("\n PI is defined");
    #else
        printf("\n PI is not defined");
    #endif


    return 0;
}

*/


/*
#define test(x,y) x##y
//## concatination


int main(void)
{
    int a=10,b=20,ab=50;
    printf("%d %d %d",a,b,test(a,b));   //a##b //ab
    //printf("%d %d %d",a,b,ab);
    return 0;
}
*/



//in the definition of macro if we use #


//#indicates string ""



/*
#define STRDISP(x) {printf("\n %s",#x+3);}

int main(void)
{
    STRDISP(sunbeam);
    //{printf("\n %s","sunbeam"+3);}
    return 0;
} 


*/



/*
#define STRDISP(x) {printf("\n %s",#x);}

int main(void)
{
    STRDISP(sunbeam);
    //{printf("\n %s","sunbeam");}
    return 0;
} 
*/

/*

#define SWAP(type,a,b) {type temp; temp=a;a=b; b=temp;}
int main(void)
{
    int n1=10,n2=5;
    float f1=20.5,f2=50.5;
    printf("\n Before MACRO CALL : N1:%d N2:%d",n1,n2);
    SWAP(int,n1,n2);
    //{int temp; temp=n1;n1=n2; n2=temp;}
    //{int temp; temp=10 ; n1=5; n2=10;}
    printf("\n AFTER MACRO CALL : N1:%d N2:%d",n1,n2);

    printf("\n Before MACRO CALL : F1:%f F2:%f",f1,f2);
    SWAP(float,f1,f2);
    printf("\n After MACRO CALL : F1:%f F2:%f",f1,f2);

    return 0;
}
*/



/*
#define SQR(a) a*a

int main(void)
{
    printf("%d",SQR(3+2));
    //printf("%d",3+2*3+2 );
    return 0;
}
*/


/*
#define SQR(a) a*a
//SQR(a) is macro name , it is a macro with one argument
//a*a is its definition 

int main(void)
{
    printf("%d",SQR(5));
    //printf("%d",5*5);
    return 0;
}
*/

/*
//Macro / Preprocessor Directives

// #define macroname replaceabletext/macro definition

#define PI 3.14 
//PI is macro name
//Macro without any arguments 

int main(void)
{
    printf("%f",PI);

    // Macro call by its name
    // It gets replaced with its definition at the same location 

    return 0;
}

*/



//./a.exe 10 20
//argv[0] : ./a.exe
//argv[1] 10
//argv[2] 20
//sum of the argument
//30
/*
int main(int argc,char *argv[])
{
    int i;
    int sum=0;
    for(i=1;i<argc;i++)
    {
        //convert string into int then we need to typecast by suing atoi()
        sum=sum+atoi(argv[i]);
    }
    printf("sum : %d",sum);
    return 0;
}
*/


/*
int main(int argc,char *argv[],char *env[])
{
    int i;
    for(i=0;i<30;i++)
    {
        printf("\n env[%d] : %s",i,env[i]);
    }

    return 0;
}

*/
/*
int main(int argc,char *argv[])
{
    int i;
    printf("Argument Count : %d",argc);
    for(i=0;i<argc;i++)
    {
        printf("\nargv[%d] : %s",i,argv[i]);
    }

    return 0;
}

*/



