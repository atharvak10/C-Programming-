#include<stdio.h>
#include<stdlib.h>


// ONE DIMENSIONAL ARRAY




int main(void)
{
    int a[4];
    int i;
    printf("Enter four array elements:");
    for(i=0;i<4;i++)
    //scanf("%d",&a[i]); // accepting array elemnts using array notations
    scanf("%d",(a+i));  // accepting array elements using pointer notation
    printf("Array elements are:");
    for(i=0;i<4;i++)
    printf("%5d",a[i]);
    return 0;
}





/*
int main(void)
{
int a[5]={10,20,30,40,50};
printf("%d ",*a+4);
}
*/


/*
int main(void)
{
    int a[5]={10,20,30,40,50};
    printf("a:%u",a);
    printf("\n*a:%u",*a);
    printf("\n*(a+1):%u",*(a+1));
    printf("\n*a+1:%u",*a+1);
    return 0;
}
*/




/*
int main(void)
{

// a[i]=*(a+i)
    int a[4]={10,20,30,40};
printf("a[0]:%d *(a+0):%d",a[0],*(a+0));
printf("\na[1]:%d *(a+1):%d",a[1],*(a+1));
printf("\na[2]:%d *(a+2):%d",a[2],*(a+2));
printf("\na[3]:%d *(a+3:%d",a[3],*(a+3));

printf("\n &a[0]:%u (a+0):%u",&a[0],(a+0));
printf("\n &a[1]:%u (a+1):%u",&a[1],(a+1));
printf("\n &a[2]:%u (a+2):%u",&a[2],(a+2));
printf("\n &a[3]:%u (a+3):%u",&a[3],(a+3));
}
*/


/*
int main(void)
{
    int arr[5]={11,22,33,44,55};
    printf("arr:%u arr[0]:%d *arr:%d",arr,arr[0],*arr);
    printf("\n (arr+1):%u &arr[1]:%u",(arr+1),&arr[1]);
    printf("\n *(arr+1):%d *(1+arr):%d  arr[1]:%d 1[arr]:%d",*(arr+1),*(1+arr),arr[1],1[arr]);
    return 0;
}
*/


/*
int main(void)
{
    int arr[3]={10,20,30};
    printf("arr[0]=%d &arr=%u",arr[0],&arr[0]);
    printf("\narr: %d  &arr: %u ",arr,&arr);
    printf("\n arr+1:%u  &arr+1:%u",arr+1,&arr+1);
    printf("\n arr+2:%u  &arr+2:%u",arr+2,&arr+2);

    return 0;
}
*/


/*
int main(void)
{
    int a[4]={10,20,30,40};
    int b[]={1,2,3};
    int c[8]={1,2,3,4};
    printf("Size of a Array:%d",sizeof(a));
    printf("\nSize of b Array:%d",sizeof(b));
    printf("\nSize of c Array:%d",sizeof(c));
}
*/



/*
int main(void)
{
    int a[4]={10,20,30,40};
    int b[]={1,2,3};
    printf("Size of an Array:%d",sizeof(a));
    printf("\nSize of an Array:%d",sizeof(b));
}
*/


/*
int main(void)
{
    int a[]={3,6,4,7,0,8}; // valid
    // if we do not mention the size of an array at the time of declaration
    // then we need to copulsory give the array elements or else it will give error
}
*/




/*
int main(void)
{
    int a[];// this is going to give error as i have not mentioned the size of an array
    // in case of static memory allocation of an array , the size of an array must be declared compulsory before the compilation 
a[0]=5; 
}
*/


/*
int main(void)
{
    int i;
    int a[5]={10,20,30};
// in this the remaining elements of the array will receive 0 value

for(i=0;i<5;i++)
{
    printf("\na[%d]=%d &a[%d]= %u ",i,a[i],i,&a[i]);
}
    return 0;
}
*/




/*
int main(void)
{
    int i;
    int a[5]; //declaration of an array 
    // we are partially allocating some values to array elements at the later stage of declaration
    //in that case remaining elements of array receives garbage values
    a[0]=1;
    a[1]=5;
   // values for other array elements will be garbage values

for(i=0;i<5;i++)
{
    printf("\na[%d]=%d &a[%d]= %u ",i,a[i],i,&a[i]);
}
    return 0;
}
*/



/*
int main(void)
{
    int i;
    int a[5];
 a[0]=1;
    a[1]=5;
    a[2]=56;
    a[3]=43;
    a[4]=875; 

for(i=0;i<5;i++)
{
    printf("\na[%d]=%d &a[%d]= %u ",i,a[i],i,&a[i]);
}
    return 0;
}
*/



/*
int main(void)
{
    int i;
    int a[5]={10,20,30,40,50}; // array initialization
for(i=0;i<5;i++)
{
    printf("\na[%d]=%d &a[%d]= %u ",i,a[i],i,&a[i]);
}
    return 0;
}
*/



/*
int main(void)
{
    int i;
    int a[5]={10,20,30,40,50}; // array initialization
for(i=0;i<5;i++)
{
    printf("a[%d]=%d ",i,a[i]);
}
    return 0;
}
*/




/*
void swap_by_ref(int *num1,int *num2);
//function taking argument as a pointer

int main(void)
{
    int n1,n2;
    printf("Enter Num1 :");
    scanf("%d",&n1);
    
    
    printf("Enter Num2 :");
    scanf("%d",&n2);

    printf("\nBefore : Num1 : %d Num2 : %d",n1,n2);
    swap_by_ref(&n1,&n2); // call by address 
    printf("\n After : Num1 : %d Num2 : %d",n1,n2);
     return 0;
}


void swap_by_ref(int *num1,int *num2)
{
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}
*/



// call by value

/*
void swap_by_value(int num1,int num2);

int main(void)
{
    int num1,num2;
printf("Enter Num1:");
scanf("%d",&num1);

printf("Enter Num1:");
scanf("%d",&num1);

printf("\n Before Swap Num1:%d Num2:%d",num1,num2);
swap_by_value(num1,num2);  // calll by value concept/ pass by value
printf("\n After Swap Num1:%d Num2:%d",num1,num2);

    return 0;
}
void swap_by_value(int num1,int num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}
*/