#include<stdio.h>
#include<stdlib.h>
#include<string.h>

 

// 1.strlen 2.strchr 3.strcat 4.strcmp 5.strstr 6.strcpy
// these functions are used for finding-
// 1.lenght /2.character within string/3.string concatenation/4.string comparison/5.for finding substring/6.string copy function


/*
// 0.Exit 1.Length 2.Find a character 3.Concatenation 4.Compare 5.Find Substring 6.Copy
int main(void) 
{
    int choice;
    int len;
    char ch;
    int val;
    char *ptr=NULL;
    char str1[20];
    char str2[20];
    do 
    {
        printf("\nEnter Choice: ");
        printf("\n 0.Exit 1.Length 2.Find a character 3.Concatenation 4.Compare 5.Find Substring 6.Copy");
        scanf("%d",&choice);

        switch(choice)
        {

            case 1: 
printf("\nEnter string :");
scanf("%s",&str1);
len=strlen(str1);
printf("\nLenght of string is : %d",len);
            break;

            case 2:
        // strchr : find a character 
        // if a character is found it returns its address
        // else it will return NULL
        printf("\nEnter a string:");
        scanf("%s",str1);
        printf("\nEnter a character to be searched:");
        scanf("%*c");
        scanf("%c",&ch);
            ptr=strchr(str1,ch);
            if(ptr==NULL)
            printf("\nCharacter is not found");
            else
            printf("\nCharacter is found");
            break;

            case 3:
            
        printf("\nEnter first string:");
        scanf("%s",str1);
        printf("\nEnter second string:");
        scanf("%s",str2);
        strcat(str1,str2); // it will join str1 and str2
        printf("Concatinated string : %s",str1);
         break;


         case 4:
        printf("\nEnter first string:");
        scanf("%s",str1);
        printf("\nEnter second string:");
        scanf("%s",str2);
        // if the string is unequal at certain point, it will first find the ascii value of the alphabets at that point and take their differnece
        // if the difference is positive number, it will give positive output, if it has negative difference, then it will give negative output  
        val=strcmp(str1,str2);
        printf("\nVal : %d",val);
        break;


        case 5:
        
       //strstr
       // it is used to find a substring within a string 

        printf("\nEnter a string:");
        scanf("%s",str1);
        printf("\nEnter a string to be searched:");
        scanf("%s",str2);
            ptr=strstr(str1,str2);
            if(ptr==NULL)
            printf("\nSubstring  is not found in original string");
            else
            printf("\nSubstring is found in original string");

        break;

        case 6:
        printf("\nEnter string : ");
        scanf("%s",str1);
        strcpy(str2,str1);
        printf("Source : %s Destination : %s",str1,str2);
        break;

        } // end of switch block


    }while(choice!=0);
    return 0;
}
*/



/*
#define LEN 15  //Preprocessor

// wherever we will use LEN it should be replaced with 15 value

int main(void)
{
    char city1[LEN]="Pune";
      char city2[LEN]={'k','a','r','a','d','\0'};
      char city3[]="Mumbai";
      char city4[]={'k','a','r','a','d'};  // invalid
      // if you are defining a string by set of characters individually in that case it is a job of a developer to give \0
      char city5[]={'M','u','m','b','a','i','\0'};

printf("\nCity1: %s  Size: %d", city1,sizeof(city1));
printf("\nCity2: %s  Size: %d", city2,sizeof(city2));
printf("\nCity3: %s  Size: %d", city3,sizeof(city3));
printf("\nCity4: %s  Size: %d", city4,sizeof(city4));
printf("\nCity5: %s  Size: %d", city5,sizeof(city5));

    return 0;
}
*/



// SCANSETS

/*
int main(void)
{
    char str[30];
    printf("Enter String : ");
    scanf("%[^A-Z]s",str);  // it will read upto occurance of small letters
    printf("Name:%s",str);
    return 0;
}
*/


/*
int main(void)
{
    char str[30];
    printf("Enter String : ");
    scanf("%[A-Z]s",str);  // it will read upto occurance of Capital letters
    printf("Name:%s",str);
    return 0;
}
*/



/*
int main(void)
{
    char str[30];
    printf("Enter String : ");
    scanf("%[a-z]s",str); // it will read only upto occurance of small alphabets 
    printf("Name:%s",str);
    return 0;
}
*/



/*
int main(void)
{
    char str[30];
    printf("Enter String : ");
    scanf("%[0-9]s",str); // it will read only till occurance of 0-9 digits 
    printf("Name:%s",str);
    return 0;
}
*/



/*
int main(void)
{
    char name[30];
    printf("Enter Name : ");
    scanf("%[^.]s",name);  // [^\n] will read upto the occurance of '.'
    printf("Name:%s",name);
    return 0;
}
*/



/*
int main(void)
{
    char name[30];
    printf("Enter Name : ");
    scanf("%[^\n]s",name);  // [^\n] will read upto new line character 
    printf("Name:%s",name);
    return 0;
}
*/


/*
int main(void)
{
    char name[30];
    printf("Enter Name : ");
    scanf("%s",name);
    printf("Name:%s",name);
    return 0;
}
*/



/*
int main(void)

{
    char *s1="sunbeam";
    char *s2="sunbeam";
    if(s1==s2)
    printf("Strings are equal");
    else
    {
        printf("Strings are not equal");
    }
    
    return 0;
}
*/


/*
int main(void)

{
    char s1[]="sunbeam";
    char s2[]="sunbeam";
    if(s1==s2)
    printf("Strings are equal");
    else
    {
        printf("Strings are not equal");
    }
    
    return 0;
}
*/
