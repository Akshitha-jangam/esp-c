//1)Question: Get a number from user and add 2 to that number and print the result.
//Example: Input :45 Output 47. Input:56789 Output:56791

#include <stdio.h>
int main() {
   int a,b;
   printf("Enter the number:");
   scanf("%d",&a);
   b=a+2;
   printf("the number is: %d",b);
}

//2)Question: Get a number from user and subtract 5 to that number and print the result.
//Example: Input :45 Output 40. Input:56789 Output:56784
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a-5;
    printf("the number is %d",b);
}


//3)Question: Get a number from user and multiply 3 to that number and print the result.
//Example: Input: 45 Output 135. Input: 1200 Output: 3600
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a*3;
    printf("the number is %d",b);
}


//4)Question: Get a number from user and divide by the number by 6 and print the quotient.
//Example: Input: 45 Output 7. Input: 143 Output: 23
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a/6;
    printf("the quotient is %d",b);
}


//5)Question: Get a number from user and divide by the number by 8 and print the remainder.
//Example: Input: 45 Output 5. Input: 143 Output: 7
#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter the number:");
   scanf("%d",&a);
   b=a%8;
   printf("the remainder is %d",b);
}


//6)Question: Get a two-digit number from user and print the one’s digit.
//Example: Input: 45 Output 5. Input: 56 Output: 6
#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter the number:");
   scanf("%d",&a);
   b=a%10;
   printf("the one's digit is %d",b);
}


//7)Question: Get a two-digit number from user and print the ten’s digit.
//Example: Input: 45 Output 4. Input: 56 Output: 5
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the  number:");
    scanf("%d",&a);
    b=a/10;
    printf("the ten's digit is %d",b);
}


//8)Question: Get a three-digit number from user and print the one’s digit.
//Example: Input: 456 Output 6. Input: 569 Output: 9
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter three digit number ");
    scanf("%d",&a);
    b=a%10;
    printf("the one's digit is %d",b);
}


//9)Question: Get a three-digit number from user and print the hundred’s digit.
//Example: Input: 456 Output 4. Input: 569 Output: 5
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter three digit number");
    scanf("%d",&a);
    b=a/100;
    printf("the hundred's digit is %d",b);
}


//10)Question: Get a three-digit number from user and print the ten’s digit.
//Example: Input: 456 Output 5. Input: 569 Output: 6
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the three digit number:");
  scanf("%d",&a);
  b=a/10;
  c=b%10;
  printf("the ten's digit is %d",c);
}


//11)Question: Get a two-digit number from user and print sum the digits.
//Example: Input: 56 Output 11. Input: 69 Output: 15
#include <stdio.h>
int main()
{
    int a, b,c,d;
    printf("Enter the two digit number:");
    scanf("%d",&a);
    b=a%10;
    printf("the one's digit is %d ", b);
    c=a/10;
    printf("the ten's digits is %d ", c);
    d=b+c;
    printf("the sum is %d ",  d);
}


//12)Question: Get a three-digit number from user and print sum the digits.
//Example: Input: 562 Output 13. Input: 469 Output: 19
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter the three digit number");
    scanf("%d",&a);
    b=a%10;
    c=a/100;
    f=a/10;
    d=f%10;
    e=d+b+c;
    printf("b is %d",b);
    printf("c is %d",c);
    printf("d is %d",d);
    
    printf("the sum is: %d",e);
}


//13)Question: Get a two-digit number from user and print the reverse of the number.
//Example: Input: 56 Output 65. Input: 59 Output: 95
#include<stdio.h>
int main()
{
    int x,y,a,b;
    printf("Enter the two digit number:");
    scanf("%d",&x);
    if((-9<x&&x<-100)||(9<x&&x<100))
    {
        a=x%10;
        b=x/10;
        y=(a*10)+b;
        printf("the reverse value is %d",y);
        
    }
    else{
        printf("Enter the number correctly.");
        
    }
}


//14)Question: Get a three-digit number from user and print the reverse of the number.
//Example: Input: 561 Output 165. Input: 859 Output: 958
#include<stdio.h>
int main()
{
    int num,one,ten,hun,rev;
    printf("Enter the three digit number:");
    scanf("%d",&num);
    if((-99<num && num<-1000)||(99<num && num<1000))
    {
        one=num%10;
        ten=(num/10)%10;
        hun=num/100;
        rev=(one*100)+(ten*10)+hun;
        printf("reverse is %d",rev);
    }
   else
    {
       printf("Enter the number correctly.");
    }
}


//15)Question: Get a four-digit number from user and only reverse the first two digits of the number, then print the number.
//Example: Input: 9561 Output 9516. Input: 3859 Output: 3895
#include<stdio.h>
int main()
{
    int num,one,ten,rem,res;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    if((-999<num && num<-10000)||(999<num && num<10000))
    {
        one=num%10;
        ten=(num%100)/10;
        rem=num/100;
        res=(rem*100)+(one*10)+ten;
        printf("result is %d",res);
    }
    else
    {
       printf("Enter the number correctly.");
    }
}


//16)Question: Get a four-digit number from user and only reverse the last two digits of the number, then print the number.
//Example: Input: 9561 Output 5961. Input: 3859 Output: 8359
#include<stdio.h>
int main()
{
    int num,tho,hun,rem,res;
    printf("Enter the four digit number:");
    scanf("%d",&num);
     if((-999<num && num<-10000)||(999<num && num<10000))
     {
         tho = num/1000;
         hun = (num/100)%10;
         rem = num%100;
         res = (hun*1000)+(tho*100)+rem;
         printf("the result is %d",res);
     }
      else
    {
       printf("Enter the number correctly.");
    }
}


//17)Question: Get a two-digit number from user and make the one’s digit as 0, then print it.
//Example: Input: 95 Output 90. Input: 18 Output: 10
#include<stdio.h>
int main()
{
    int num,tens,res;
    printf("Enter the two digit number:");
    scanf("%d",&num);
    if((-9<num && num<-100)||(9<num && num<100))
    {
        tens=num/10;
        res=tens*10;
        printf("the result is %d",res);
    }
    else
    {
       printf("Enter the number correctly.");
    }
}


//18)Question: Get a two-digit number from user and make the ten’s digit 1, then print it.
//Example: Input: 95 Output 15. Input: 82 Output: 12
#include<stdio.h>
int main()
{
    int num,rem,res;
    printf("Enter the two digit numbe:r");
    scanf("%d",&num);
    if((-9<num && num<-100)||(9<num && num<100))
    {
        rem=num%10;
        res=rem+10;
        printf("The result is %d",res);
    }
   else
    {
       printf("Enter the number correctly.");
    }
}


//19)Question: Get a three-digit number from user and make the one’s digit as 2, then print it.
//Example: Input: 695 Output 692. Input: 182 Output: 182
#include<stdio.h>
int main()
{
    int num,rem,res;
    printf("Enter the two digit number:");
    scanf("%d",&num);
    if((-99<num && num<1000)||(99<num && num<1000))
    {
        rem=num/10;
        res=(rem*10)+2;
        printf("The result is %d",res);
    }
    else
    {
       printf("Enter the number correctly.");
    }
}


//20)Question: Get a three-digit number from user and make the ten’s digit as 0, then print it.
//Example: Input: 695 Output 605. Input: 182 Output: 102
#include<stdio.h>
int main()
{
    int num,one,hun,res;
    printf("Enter the three digit number:");
    scanf("%d",&num);
    if((-99<num && num<-1000)||(99<num && num<1000))
    {
        one=num%10;
        hun=num/100;
        res=(hun*100)+one;
        printf("The result is %d",res);
    }
   else
    {
       printf("Enter the number correctly.");
    }
}
