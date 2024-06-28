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
    printf("Enter the number:");
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
