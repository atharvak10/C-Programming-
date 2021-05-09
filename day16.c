#include<stdio.h>
#include<stdlib.h>


/*
int main(void)
{
    int arr[3][3]={{11,12,13},{14,15,16},{17,18,19}};
    int *p[4]={*arr,*(arr+1),*(arr+2)};

    //printf("%d %d",arr[0][0],**p);
    //**p
    //**500
    //*100
    //11

    //printf("%d %d",arr[0][1],*(*p+1));
    //*(*p+1)
    //*(*500+1)
    //*(100+1)
    //*(104)
    //12


    //printf("%d %d",arr[0][2],*(*p+2));
    //*(*p+2)
    //*(*500+2)
    //*(100+2)
    //*108
    //13

    //printf("%d %d",arr[1][0],*(*(p+1)));
    //*(*(p+1))
    //*(*(500+1))
    //*(*(504))
    //*112
    //14

    //printf("%d ",*(*(p+2)));
    //*(*(p+2))
    //*(*(500+2))
    //**508
    //*124
    //17

    //printf("%d",*(*(p+1)+2));
    //*(*(p+1)+2)
    //*(*(500+1)+2)
    //*(*(504)+2)
    //*(112+2)
    //*120
    //16


    //printf("%d",*(*(p+2)+1));
    //*(*(p+2)+1)
    //*(*(p+2)+1)
    //*(*(500+2)+1)
    //*(*(508)+1)
    //*(124 +1)
    //*128
    //18

    printf("%d",(*(*(p+1)+1))+20);
    //(*(*(p+1)+1))+20
    //(*(*(500+1)+1))+20
    //(*(*504)+1) )+20
    //*(112+1)) +20
    //*116 +20
    //15 + 20
     //35
    return 0;
}
*/

//a[i] = *(a+i)
// a[i][j] = *(*(a+i)+j)




/*
void accept_data(int a[2][2]);
//accept_data() is user defined function which is taking 2d array as argument

int main(void)
{
    int a[2][2],b[2][2];
    int i,j;
    printf("Main : Accepting ARRAY A DATA \n");
    accept_data(a);
    printf("\n BACK TO MAIN....NOW ACCEPTING B ARRAY DATA ...\n");
    // while passing array to the function we pass array name
    accept_data(b);
    printf("\n BACK TO MAIN..");
    return 0;
}

void accept_data(int arr[2][2])
{
    int i,j;
    printf("Enter Array Elements : ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("\n  Array Elements are: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
*/




/*
int main(void)
{
    int a[2][2];
    int i,j;
    printf("Enter Array Elements : ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n Array Elements are: \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            //printf("a[%d][%d] = %d &a[%d][%d] = %u ",i,j,a[i][j],i,j,&a[i][j]);
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/



/*
int main(void)
{
    int a[3][3]; //3rows 3 columns total 9 elments , each element of size 4 // 9*4=36
    int i,j;
    printf("Enter Array Elements : ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\n Array Elements are: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n a[%d][%d] = %d &a[%d][%d] = %u ",i,j,a[i][j],i,j,&a[i][j]);
        }
    }

    return 0;
}
*/
/*
#define ROW 2
#define COL 2

int main(void)
{ 

    int mat[2][2]={{1,1},{1,2}}; //allowed
    int mat1[ROW][COL]={{1,1},{1,2},{2,1},{2,2}}; //allowed
    int mat3[][COL]={{1,1},{1,2},{2,1},{2,2}}; // allowed
    int mat4[2][2];//valid

    int mat[][]={{1,1},{1,2},{2,1},{2,2}};// not allowed
    int mat2[ROW][]={{1,1},{1,2},{2,1},{2,2}}; //not allowed



    return 0;
}

*/

