#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
int res=1;
int* fibbonci(int num)  
{  
    static int arr[]={}; 
    int a=0,b=1,c;
    arr[0]=a,arr[1]=b;
    for(int i=2;i<num;i++)  
    {  
        c=a+b;
        arr[i]=c; 
        a=b;
        b=c;
    }  
    return arr;  
}  

bool prime(int num)
{
    bool a = true;
    if(num == 1)
    {
        return true;
    }
    for(int i=2;i<num;i++)
    {
        if(num%i == 0)
        {
            a = false;
        }
    }
    return a;
}

bool palindrome(int num)
{
    if(num > -9 && num < 9)
    {
        return true;
    }
    int temp = num,sum=0;
    while(num != 0)
    {
         sum = (sum + (num%10))*10;
        num = num/10;
    }
    sum=sum/10;
    if(sum == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int factorial(int num)
{
    int sum=1;
    while(num>0)
    {
        sum = sum*num;
        num--;
    }
    return sum;
}

bool armstrong(int num)
{
    int temp = num,sum=0;
    while(num != 0)
    {
        sum = sum + pow((num%10),3);
        num = num/10;
    }
    if(sum == temp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sum(int num)
{
    int sum=0;
    while(num>0)
    {
        sum = sum+(num%10);
        num=num/10;
    }
    return sum;
}

int reverse(int num)
{

    int temp = num,sum=0;
    while(num != 0)
    {
         sum = (sum + (num%10))*10;
        num = num/10;
    }
    sum=sum/10;
    return sum;
}

void swap(int* a,int* b)
{
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

void calculate(int v3,int v4,int v5)
{
    switch(v3)
    {
        case 1:
        printf("The sum of two numbers are:%d",v4+v5);
        break;
        case 2:
        printf("The difference of two numbers are:%d",v4-v5);
        break;
        case 3:
        printf("The product of two numbers are:%d",v4*v5);
        break;
        case 4:
        printf("The reminder of two numbers are:%d",v4%v5);
        break;
        case 5:
        printf("The quotient of two numbers are:%d",v4/v5);
        break;
        default:
        printf("enter a valid option!");
        break;
    }
}
   
int Ascii_equ()
{
    char ch;
    int ascii_;
    printf("Enter the character: ");
    scanf(" %c",&ch);
    ascii_ = ch;
    return ascii_;
}

struct complex
{
    float real;
    float img;
};

struct complex comp_add(struct complex a,struct complex b)
{
    struct complex c;
    c.real = a.real + b.real;
    c.img = a.img + b.img;
    return c; 
}

struct complex Compx_Add()
{
   struct complex s1,s2,s3;
   printf("Enter the real and imaginary part of 1st complex number: ");
   scanf("%f %f",&(s1.real),&(s1.img));
   printf("Enter the real and imaginary part of 2nd complex number: ");
   scanf("%f %f",&(s2.real),&(s2.img));
   s3 = comp_add(s1,s2);
   return s3;
}

bool check_eveorodd(int a)
{
    if(a&1 == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool leap_year(int n)
{
    bool a  = (n%4==0)? true :(n%400==0 && n&100!=0)? true : false;
    return a;
}

void table_(int num)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",num,i,num*i);
    }
}

void pattern()
{
    int op,n;
    printf("Chose a pattern:\n1 - Half Pyramid\n2 - Inverted Half Pyramid\n3 - "
    "Full Pyramid\n4 - Full Pyramid of Numbers  in 180 Degree\n5 - hollow pyram"
    "id of ” * ”\n6 - Diamond Pyramid of ” * ”: ");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("Enter the size: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }
        break;
        case 2:
        printf("Enter the size: ");
        scanf("%d",&n);
        for(int i=n;i>=1;i--)
        {
            for(int j=1;j<=i;j++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }
        break;
        case 3:
        printf("Enter the size: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=(n-i);j++)
            {
                printf("  ");
            }
            for(int j=1;j<=(i+(i-1));j++)
            {
                printf("%d ",i);
            }
            printf("\n");
        }
        break;
        case 4:
        int k=1;
        printf("Enter the size: ");
        scanf("%d",&n);
        for(int i=1;i<=(n+(n-1));i++)
        {
            if(i<=n)
            {
                for(int j=1;j<=i;j++)
                {
                    printf("%d ",i);
                }
            }
            else
            {
                for(int j=n-k;j>=1;j--)
                {
                    printf("%d ",n-k);
                }
                k++;
            }
            printf("\n");
        }
        break;
        case 5:
        printf("Enter the size: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=(n-i);j++)
            {
                printf("  ");
            }
            for(int j=1;j<=(i+(i-1));j++)
            {
                if(i!=n)
                {
                if(j==1 || j==(i+(i-1)))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
                }
                else
                {
                    printf("* ");
                }
            }
            printf("\n");
        }
        break;
        case 6:
        printf("Enter the size: ");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=(n-i);j++)
            {
                printf("  ");
            }
            for(int j=1;j<=(i+(i-1));j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for(int i=n-1;i>=1;i--)
        {
            for(int j=(n-i);j>=1;j--)
            {
                printf("  ");
            }
            for(int j=(i+(i-1));j>=1;j--)
            {
                printf("* ");
            }
            printf("\n");
        }
        break;
        default:
        printf("Enter valid option from list");
        break;
    }
}

int Sum_of_Nat(int num)
{
    static int sum=0;
    sum += num;
    if(num == 0)
    {
        return 1;
    }
    Sum_of_Nat(--num);
    return sum;
}

int Factorial_Rec(int num)
{
    static int sum=1;
    if(num == 0)
    {
        return 1;
    }
    else
    {
        sum *= num;
    }
    Factorial_Rec(--num);
    return sum;
}

int Power(int x,int y)
{
    if(y == 0)
    {
        return 1;
    }
    else
    {
        res *= x;
    }
    Power(x,--y);
    
    return res;
}

void _2D_Array()
{
    int m,n,max,min,avg=0,cnt=0,temp,temp2=1000;
    printf("Enter the size of array: ");
    scanf("%d %d",&m,&n);
    int a[m][n], b[m][n], c[m][n];
    printf("Enter the elements of arry: ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            b[i][j] = c[i][j] = a[i][j];
        }
    }
    
    max=min=a[0][0];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(max<(a[i][j]))
            {
                max = a[i][j];
            }
            if(min>(a[i][j]))
            {
                min = a[i][j];
            }
            avg = avg + a[i][j];
            cnt++;
            
            for(int k=0;k<m;k++)
            {
               for(int l=0;l<n;l++)
               {
                   if(a[i][j]<a[k][l])
                   {
                       temp = a[i][j];
                       a[i][j] = a[k][l];
                       a[k][l] = temp;
                   }
                   if(b[i][j]>b[k][l])
                   {
                       temp = b[i][j];
                       b[i][j] = b[k][l];
                       b[k][l] = temp;
                   }
                }
            }
        }
    }
    
    printf("\nThe sorted elements of array in ascending order is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe sorted elements of array in descending order is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    
    printf("\nThe dupilate elements removed array is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(c[i][j] != temp2)
            {
            printf("%d ",c[i][j]);
            temp2= c[i][j];
            }
        }
        printf("\n");
    }
    printf("The maximum of the elemts is %d\n",max);
    printf("The minimum of the elemts is %d\n",min);
    printf("The average of the elemts is %d\n",avg/cnt);
}

char* strconcatination(char* a,char* b,int n,int m)
{
    for(int i=n,j=0;i<(n)+m;i++,j++)
    {
        *(a+i) = *(b+j);
    }
    
    return a;
}


void _1D_Array()
{
    int n,m,in,temp,cnt=0,cnt2=0;
    printf("Enter the array size: ");
    scanf("%d",&n);
    char *p = (char*)malloc(n*sizeof(char));
    printf("Enter the array elements:");
    for(int i=0;i<n;i++)
    {
    scanf("%d",(p+i));
    }
    printf("The array elements before removing dupilate: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((*(p+i)) == (*(p+j)))
            { cnt++;}
        }
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((*(p+i)) == (*(p+j)))
            {
                for(int k=i;k<n;k++)
                {
                    *(p+(k+1)) = *(p+(k+2));
                }
            }
        }
    }
    n=n-cnt;
    p = (char*) realloc(p,n*sizeof(char));
    printf("\nThe array elements after removing dupilate: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    
    printf("\nEnter the second array size: ");
    scanf("%d",&m);
    char *pt = (char*)malloc(m*sizeof(char));
    printf("Enter the second array elements:");
    for(int i=0;i<m;i++)
    {
    scanf("%d",(pt+i));
    }
    printf("The second array elements are: ");
    for(int i=0;i<m;i++)
    {
        printf("%d ",*(pt+i));
    }
    
    printf("\nThe common array elements are: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(*(p+i) == *(pt+j))
            {
                cnt2++;
                printf("%d ",*(p+i));
            }
        }
    }
    if(cnt2 == 0)
    {
        printf("Nothing is common");
    }
    
    p = (char*) realloc(p,(n+m)*sizeof(char));
    p = strconcatination(p,pt,n,m);
    n=n+m;
    printf("\nThe combined array elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }

    free(pt);

    printf("\nEnter number of time array elements must be rotated: ");
    scanf("%d",&in);
    for(int i=0;i<in;i++)
    {
        temp = *(p);
        for(int k=0;k<n;k++)
        { 
            *(p+(k)) = *(p+(k+1));
        }
        *(p+(n-1))=temp;
    }

    printf("\nThe rotated array elements are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    free(p);
}

int strlength(char* a)
{
    int cnt=0;
    for(int i=0;*(a+i)!='\0';i++)
    {
        cnt++;
    }
    return (cnt-1);
}

void String_Concat(char* a,char* b)
{

    for(int i = (strlength(a)),j=0;i<=(strlength(a)+strlength(b));i++,j++)
    {
        *(a+i) = *(b+j);
    }
    puts(a);
}

void Non_repeating_char(char* a)
{
    char arr[100];
    int cnt1=0,cnt2 =0;
    for(int i=0;i<(strlength(a));i++)
    {
        for(int j=0;j<(strlength(a));j++)
        {
            if((i!=j)&&(*(a+i)) == (*(a+j)))
            {
                cnt1++;
            }
        }
        if(cnt1 == 0 )
        {
            arr[cnt2]=*(a+i);
            cnt2++;
        }
        cnt1=0;
    }
    if(cnt2==0)
    {
        printf("All elements are repeated atleast once!");
    }
    else
    {
    printf("The Non Repeating elements are: ");
    }
    for(int i=0;i<cnt2;i++)
    {
        printf("%c ",arr[i]);
    }
}

void strcopy(char* x,char* y)
{
    for(int i=0;i<strlength(x);i++)
    {
        *(y+i)= *(x+i);
    }
}

bool strcompare(char* a, char* b)
{
    int cnt=0;
     for(int i=0;i<strlength(a);i++)
    {
        if(*(a+i) != *(b+i))
        {
            cnt++;
        }
    }
    if(cnt==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void String_palindrome(char* a,char* b)
{
    int cnt=0; 
    for(int i=0;i<strlength(a);i++)
    {
            *(a+i) = *(b+((strlength(a)-1)-i));
    }
    printf("The reverted string is: ");
    for(int i=0;i<strlength(a);i++)
    {
        printf("%c",*(a+i));
    }
    printf("\n");
    
    bool c = strcompare(a,b);
    
    if(c == true)
    {
        printf("\nIts a Palindrome!");
    }
    else
    {
        printf("Its not a Palindrome!");
    }

}

void Sort_String(char* a)
{
    char temp;
    for(int i=0;i<(strlength(a));i++)
    {
        for(int j=i+1;j<(strlength(a));j++)
        {
            if(*(a+i)>*(a+j))
            {
               temp = *(a+i);
               *(a+i)= *(a+j);
               *(a+j) = temp;
            }
        }
    }
    puts(a);
}

void First_Letter_String(char* a)
{
    if(*(a+0) != ' ')
    {
    printf("%c ",*(a+0));
    } 
    
    for(int i=1;i<(strlength(a));i++)
    {
        if((*(a+i)!=' ') && (*(a+(i-1)) ==' '))
        {
            printf("%c ",*(a+i));
        }
    }
}

void Remove_0_String(char* a)
{
    int cnt=0,len=strlength(a) ;
    
    for(int i=0;i<len;i++)
    {
        if(*(a+i) == '0' )
        {
            for(int k=i;k<len;k++)
            {
                *(a+k) = *(a+(k+1));
            }
            len--;
            i--;
        }
        else
        {
            cnt++;
        }
    }
    //*(a+cnt) = '\0';
   // a = (char*) realloc(a,(cnt+1)*sizeof(char));
   for(int i=0;i<len;i++)
    {
    printf("%c",*(a+i));
    }
}

void Sub_String(char* a,char* b)
{
    int cnt=0,cnt2=0;
    int len1 = strlen(a)-1,len2 = strlen(b)-1;
    for(int i=0;i<len1;i++)
    {
        if((*(a+i) == *b) && (*(a+(len2-1+i)) == *(b+len2-1)))
        {
            for(int j=i,k=0;k<len2;j++)
            {
                if(*(a+j) != *(b+k))
                {
                    cnt++;
                }
                k++;
            }
            if(cnt==0)
            {
                printf("Sub String present from a[%d] to a[%d]\n",i,i+(len2-1));
                cnt2++;
            }
        }
    }
    if(cnt2==0)
    {
         printf("Sub String not present!");
    }
}