#include<stdio.h>









// if we declare a pointer as constant (const float *fptr)
//wherever (constant value or non constant value) pointer is pointing that value becomes constant. We cannot change it through pointer 
// we can change the address of constant pointer 

/*
int main(void)
{
    const float PI=3.14; // constant variable
    const float *fptr=&PI;  // constant pointer
printf("PI:%f *fptr:%f &PI=%u fptr=%u",PI,*fptr,&PI,fptr);
//PI++;// error: increment of read only variable'PI'
//PI=7.89; //error: assignment of read-only variable 'PI'
//*fptr=5.15;error: assignment of read-only location '*fptr'
    return 0;
}
*/



/*
// we cannot change the value of a constant variable but we can change it by using the concept of pointer
int main(void)
{
    const float PI=3.14;
    float *fptr;
    fptr=&PI; // pointer is holding address of constant variable
    printf("PI:%f *fptr:%f &PI=%u fptr=%u",PI,*fptr,&PI,fptr);
    //PI++; //error: increment of read only variable'PI'
    //PI=5.15; // error: increment of read only variable'PI'
    *fptr=7.12345;  // modifying the value of constant using pointer 
    printf("\nPI:%f *fptr:%f &PI=%u fptr=%u",PI,*fptr,&PI,fptr);
    return 0;
}
*/


/*
int main(void)
{
    const float PI=3.14; // constant  variable
    printf("%f",PI);
    PI++; // error: increment of read-only variable 'PI'
    printf("\n%f",PI);
    return 0;
}
*/


/*
int main(void)
{
    float PI=3.14; // normal variable
    printf("%f",PI);
    PI++; // allowed
    printf("\n%f",PI);
    return 0;
}
*/