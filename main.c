#include <stdio.h>  
#include <stdbool.h>
#include "functions.h"
extern int res;

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main()  
{
    Begin:
    printf("\n\nChoose a number to execute a corresponding functionality:\n 0 -" 
    "To exit\n 1 - Fibbonaic series\n 2 - Prime Number\n 3 - Palindrome Number\n"
    " 4 - Factorial\n 5 - Armstrong Number\n 6 - Sum of Digits\n 7 - Reverse a N"
    "umber\n 8 - Swap values of 2 Variables without 3rd variable\n 9 - Calculato"
    "r\n10 - ASCII Equivalent\n11 - Complex Number Addition\n12 - Even/Odd using"
    " Bitwise\n13 - Print A to Z\n14 - Leap Year?\n15 - Multiplication table\n16"
    " - Pattern\n17 - Sum of Natural numbers(Recursion)\n18 - Factorial (Recursi"
    "on)\n19 - Power of Number\n20 - Operation On 2D Array\n21- Operations on 1D"
    " Array\n22 - String concatenation\n23 - Non Repeating char in string\n24 - "
    "String Palindrome\n25 - Length of string\n26 - Sort String\n27 - Print 1st "
    "letter of each word\n28 - String Compare\n29 - Remove 0's\n30 - String conc"
    "atinate\n31 - Sub String\n");
    printf("Enter your option: ");
    int num,num1;
    scanf("%d",&num1);
    while(num1!=0)
    {   
        switch(num1)
        {
            case 1:
            printf("enter the range: ");
            scanf("%d",&num);
            int *n = fibbonci(num);  
            printf("The fibbonaci series of give range is: ");  
            for(int i=0;i<num;i++)  
            {  
                printf("%d ", n[i]);  
            } 
            break;
            case 2:
            printf("enter the number except 0 to check if its prime/not: ");
            scanf("%d",&num);
            bool a = prime(num);  
            if(a==true)
            {
                printf("the number is prime");
            }
            else
            {
                printf("the number is not prime");
            }
            break;
            case 3:
            printf("enter the number to check if its palindrome/not: ");
            scanf("%d",&num);
            bool a1 = palindrome(num);
            if(a1 == true)
            {
                printf("the number is palindrome");
            }
            else
            {
                printf("the number is not palindrome");
            }
            break;
            case 4:
            printf("enter the number to get its factorial: ");
            scanf("%d",&num);
            int a2 = factorial(num);
            printf("the factorial of %d is %d",num,a2);
            break;
            case 5:
            printf("enter the number to check if its armstrong/not:");
            scanf("%d",&num);
            bool a3 = armstrong(num);
            if(a3 == true)
            {
                printf("the number is armstrong");
            }
            else
            {
                printf("the number is not armstrong");
            }
            break;
            case 6:
            printf("enter the number to get its sum: ");
            scanf("%d",&num);
            int a4 = sum(num);
            printf("the sum of %d is %d",num,a4);
            break;
            case 7:
            printf("enter the number to get its reverse: ");
            scanf("%d",&num);
            int a5 = reverse(num);
            printf("the sum of %d is %d",num,a5);
            break;
            case 8:
            int v1,v2;
            printf("enter the vales of 2 vriables v1 & v2: ");
            scanf("%d %d",&v1,&v2);
            printf("the vales of vriables before swap: v1 = %d v2 = %d\n",v1,v2);
            swap(&v1,&v2);
            printf("the vales of vriables after swap: v1 = %d v2 = %d",v1,v2);
            break;
            case 9:
            int v3,v4,v5;
            printf("Enter the two numbers:");
            scanf("%d%d",&v4,&v5);
            printf("Enter\n1 - add\n2 - subtract\n3 - multiply\n4 - reminder\n5 - quotient :");
            scanf("%d",&v3);
            calculate(v3,v4,v5);
            break;
            case 10:
            int x = Ascii_equ();
            printf("the acsii equivalent is %d",x);
            break;
            case 11:
            struct complex s;
            s = Compx_Add();
            printf("The addition of complex numbers is: %f + i%f",s.real,s.img);
            break;
            case 12:
            int bn;
            printf("Enter the number to check even/odd: ");
            scanf("%d",&bn);
            bool b = check_eveorodd(bn);
            if(b == 1)
            {
                printf("The number is even!");
            }
            else
            {
                printf("The number is odd!");
            }
            break;
            case 13:
            for(int i=65;i<91;i++)
            {
                printf("%c ",i);
            }
            break;
            case 14:
            int year=0;
            printf("Enter the year: ");
            scanf("%d",&year);
            bool year1 = leap_year(year);
            if(year1 == true)
            {
                printf("%d is a leap year",year);
            }
            else
            {
                printf("%d is not a leap year",year);
            }
            break;
            case 15:
            int table;
            printf("Enter the number to display its table: ");
            scanf("%d",&table);
            table_(table);
            break;
            case 16:
            pattern();
            break;
            case 17:
            int lim;
            printf("Enter the limit: ");
            scanf("%d",&lim);
            int sum = Sum_of_Nat(lim);
            printf("The sum of natural numbers upto %d is %d",lim,sum);
            break;
            case 18:
            int fact;
            printf("Enter the number to get factorial: ");
            scanf("%d",&fact);
            int facto = Factorial_Rec(fact);
            printf("Factorial of %d is %d",fact,facto);
            break;
            case 19:
            int num,power;
            printf("Enter the number and power:");
            scanf("%d %d",&num,&power);
            int res1 = Power(num,power);
            printf("The result %dpow%d is %d",num,power,res1);
            res =1;
            break;
            case 20:
            _2D_Array();
            break;
            case 21:
            _1D_Array();
            break;
            case 22:
            clearInputBuffer();
            char s1[100],s2[100];
            printf("Enter string 1: ");
            fgets(s1,sizeof(s1),stdin);
            printf("Enter string 2: ");
            fgets(s2,sizeof(s2),stdin);
            String_Concat(s1,s2);
            break;
            case 23:
            clearInputBuffer();
            char s3[100];
            printf("Enter the string: ");
            fgets(s3,sizeof(s3),stdin);
            Non_repeating_char(s3);
            break;
            case 24:
            clearInputBuffer();
            char s4[100],s5[100];
            printf("Enter the string: ");
            fgets(s4,sizeof(s4),stdin);
            strcopy(s4,s5);
            String_palindrome(s4,s5);
            break;
            case 25:
            clearInputBuffer();
            char s6[100];
            printf("Enter the string: ");
            fgets(s6,sizeof(s6),stdin);
            printf("The length of string is: %d",strlength(s6));
            break;
            case 26:
            clearInputBuffer();
            char s7[100];
            printf("Enter the string: ");
            fgets(s7,sizeof(s7),stdin);
            Sort_String(s7);
            break;
            case 27:
            clearInputBuffer();
            char s8[100];
            printf("Enter the string: ");
            fgets(s8,sizeof(s8),stdin);
            First_Letter_String(s8);
            break;
            case 28:
            clearInputBuffer();
            char s9[100],s10[100];
            printf("Enter the string 1: ");
            fgets(s9,sizeof(s9),stdin);
            printf("Enter the string 2: ");
            fgets(s10,sizeof(s10),stdin);
            bool c = strcompare(s9,s10);
            if(c == true)
            {
                printf("String are Equal!");
                
            }
            else
            {
                printf("String are Not Equal!");
                
            }
            break;
            case 29:
            clearInputBuffer();
            char s11[100];
            printf("Enter the string: ");
            fgets(s11,sizeof(s11),stdin);
            Remove_0_String(s11);
            break;
            case 30:
            clearInputBuffer();
            char s12[100],s13[100];
            printf("Enter the string 1: ");
            fgets(s12,sizeof(s12),stdin);
            printf("Enter the string 2: ");
            fgets(s13,sizeof(s13),stdin);
            char* s14 = strconcatination(s12,s13,strlen(s12)-1,strlen(s13));
            puts(s14);
            break;
            case 31:
            clearInputBuffer();
            char s15[100],s16[100];
            printf("Enter the string 1: ");
            fgets(s15,sizeof(s15),stdin);
            printf("Enter the string 2: ");
            fgets(s16,sizeof(s16),stdin);
            Sub_String(s15,s16);
            break;
            case 32:
            int *p2 = Return_pointer();
            printf("The valuse stored in pointer returned from function is: %d",*p2);
            break;
            default:
            printf("enter a valid option!");
            break;
        }
        goto Begin;
    }
    return 0;  
}  
