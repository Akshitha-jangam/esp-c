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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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


                                                    (OR)
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the three digit number");
    scanf("%d",&a);
    b= a%100;
    c= b/10;
    printf("%d",c);
}

//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


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
//=========================================================================================================================


//21)Question: Get a number from user and subtract 5 from that number if the number is odd, then print the result. Do not use “if”.
//Example: Input: 695 Output 690. Input: 182 Output: 182
#include<stdio.h>
int main()
{
    int num,od,res;
    printf("Enter the number:");
    scanf("%d",&num);
    od=num%2;
    res=num-(od*5);
    printf("The result is %d",res);
}
//=========================================================================================================================


//22)Question: Get a number from user and subtract 5 from that number if the number’s ten’s position digit is odd, then print the result. Do not use “if”.
//Example: Input: 685 Output 685. Input: 89172 Output: 89167
#include<stdio.h>
int main()
{
    int num,ten,od,res;
    printf("Enter the number");
    scanf("%d",&num);
    ten=(num%100)/10;
    od=(ten%2);
    res=num-(od*5);
    printf("The result is %d",res);
}
//=========================================================================================================================


//23)Question: Get a two digit number from user and subtract 5 from that number if the sum of the digits of the number is odd, then print the result. Do not use “if”.
//Example: Input: 95 Output 95. Input: 72 Output: 67
#include<stdio.h>
int main()
{
    int num,one,ten,sum,odd,res;
    printf("Enter two digit number:");
    scanf("%d",&num);
    one=num%10;
    ten=num/10;
    sum=one+ten;
    odd=sum%2;
    res=num-(odd*5);
    printf("The result is %d",res);
}
//=========================================================================================================================


//24)Question: Get a three-digit number from user and subtract 5 from that number if one’s digit number and 100’s digit number are same, then print the result. Do not use “if”.
//Example: Input: 595 Output 590. Input: 372 Output: 372
#include<stdio.h>
int main()
{
    int num,one,hun,eql,res;
    printf("Enter the three digit number:");
    scanf("%d",& num);
    one=num%10;
    hun=num/100;
    eql=(one==hun);
    res=num-(eql*5);
    printf("The result is %d",res);
}
//=========================================================================================================================


//25)Question: Get a four-digit number from user and subtract 5 from that number if ten’s digit position and 100’s digit position is same, then print the result. Do not use “if”.
//Example: Input: 7595 Output 7595. Input: 3772 Output: 3767
#include<stdio.h>
int main()
{
    int num,ten,hun,eql,res;
    printf("Enter the four digit number:");
    scanf("%d",&num);
    ten=(num%100)/10;
    hun=(num%1000)/100;
    eql=(ten==hun);
    res=num-(eql*5);
    printf("The result is %d",res);
}
//=========================================================================================================================


//26)Question: Get a two-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
//Example: Input: 56 - Output Failure. Input: 37 - Output: Success.
#include<stdio.h>
int main()
{
    int num,one,ten,sum;
    printf("Enter the two digit number:");
    scanf("%d",&num);
    if((-9<num&&num<-100)||(9<num&&num<100))
    {
        one=num%10;
        ten=num/10;
        sum=one+ten;
        if(sum==10)
        {
            printf("IT IS SUCCESS");
        }
        else
        {
            printf("IT IS FAILURE");
        }
    }
     else
    {
       printf("Enter the number correctly.");
    }
}
//=========================================================================================================================


//27)Question: Get a three-digit number from user. If the sum of the digits is 10 then print “Success”, otherwise print “Failure”.
//Example: Input: 956 - Output Failure. Input: 127 - Output: Success.
#include<stdio.h>
int main()
{
    int num,one,ten,hun,sum;
    printf("Enter the three digit number:");
    scanf("%d",&num);
    if((-99<num&&num<-1000)||(99<num&&num<1000))
    {
        one=num%10;
        ten=(num%100)/10;
        hun=num/100;
        sum=one+ten+hun;
        if(sum==10)
        {
            printf("IT IS A SUCCESS");
        }
        else
        {
            printf("IT IS A FAILURE");
        }
    }
     else
    {
       printf("Enter the number correctly.");
    }
    }
//=========================================================================================================================


//28)Question: Get a three-digit number from user. If the sum of the one’s digit and hundred’s digit is less than 10, then print “Success”, otherwise print “Failure”.
//Example: Input: 569 - Output Failure. Input: 316 - Output: Success.
#include<stdio.h>
int main()
{
    int num,one,hun,sum;
    printf("Enter the three digit number:");
    scanf("%d",&num);
    if((-99<num&&num<-1000)||(99<num&&num<1000))
    {
        one=num%10;
        hun=num/100;
        sum=one+hun;
        if(sum<10)
        {
            printf("IT IS A SUCCESS");
        }
        else
        {
            printf("IT IS A FAILURE");
        }
    }
     else
    {
       printf("Enter the number correctly.");
    }
}
//=========================================================================================================================


//29)Question: Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is greater than 10, then print “Success”, otherwise print “Failure”.
//Example: Input: 7529 – Output: Failure. Input: 9386 - Output: Succes.
#include<stdio.h>
int main()
{
    int num,ten,hun,sum;
    printf("Enter the four digit number:");
    scanf("%d",&num);
    if((-999<num&&num<-10000)||(999<num&&num<10000))
    {
        ten=(num%100)/10;
        hun=(num%1000)/100;
        sum=ten+hun;
        if(sum>10)
        {
            printf("IT IS A SUCCESS");
        }
        else
        {
            printf("IT IS A FAILURE");
        }
    }
     else
    {
       printf("Enter the number correctly.");
    }
}
//=========================================================================================================================


//30)Question: Get a four-digit number from user. If the sum of the ten’s digit and hundred’s digit is equal to 10, and one of the digits is more than 7 then print “Success”, otherwise print “Failure”.
//Example: Input: 4649 – Output: Failure. Input: 9286 - Output: Succes.
#include<stdio.h>
int main()
{
    int num,ten,hun,sum;
    printf("Enter the four digit number:");
    scanf("%d",&num);
    if((-999<num&&num<-10000)||(999<num&&num<10000))
    {
        ten=(num%100)/10;
        hun=(num%1000)/100;
        sum=ten+hun;
        if(sum=10 )
        {
            if(ten>7||hun>7)
            {
                 printf("IT IS A SUCCESS");
            }
             else
            {
            printf("IT IS A FAILURE");
            }
        }
        else
        {
            printf("IT IS A FAILURE");
        }
    }
     else
    {
       printf("Enter the number correctly.");
    }
}
//=========================================================================================================================


//31)Question: Get a three-digit number from user. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum. If the sum of the digits is less than 10, then print the sum, otherwise add the digits of the sum, and print the sum.
//Note: The result should be always single digit only.
//Example: Input: 123 – Output: 6
//Input: 149 - Output: 5 (149:1+4+9 = 14: 1+4 = 5)
//Input: 991 - Output: 1 (991: 9+9+1 = 19: 1+9 = 10: 1+0 = 1)
#include<stdio.h>
int main()
{
    int num,one,ten,hun,sum,one1,ten1,sum1,one2,ten2,sum2;
    printf("Enter the three digit number:");
    scanf("%d",&num);
    if((-99<num&&num<-1000)||(99<num&&num<1000))
    {
        one=num%10;
        ten=(num%100)/10;
        hun=num/100;
        sum=one+ten+hun;
        if(sum<10)
        {
            printf("The sum is %d",sum);
        }
        else if(sum>10)
        {
           one1=sum%10;
           ten1=sum/10;
           sum1=one1+ten1;
           if(sum1<10)
           {
                printf("The sum is %d",sum1);
           }
           else if(sum1==10){
               one2=sum1%10;
               ten2=sum1/10;
               sum2=one2+ten2;
               printf("The sum is %d",sum2);
           }
            else if(sum1>10)
        {
            one2=sum1%10;
           ten2=sum1/10;
           sum2=one2+ten2;
           printf("The sum is %d",sum2);
        
        }
        }
        else if(sum==10)
        {
            one1=sum%10;
           ten1=sum/10;
           sum1=one1+ten1;
           printf("The sum is %d",sum1);
        }
        
    
     else
    {
       printf("Enter the number correctly.");
    }
    }
}
//=========================================================================================================================


//32)Question: Get two 2-digit numbers from user. If the sum of the numbers is less than 100, then print the sum, otherwise print the difference.
//Example: Input: 56 78 – Output: 22,Input: 14 65 - Output: 79
#include<stdio.h>
int main()
{
    int num1,num2,sum,diff;
    printf("Enter the first two digit number:");
    scanf("%d",&num1);
    printf("Enter the second two digit number:");
    scanf("%d",&num2);
    if((-9<num1 && -9<num2 && num1<-100 && num2<-100)||(9<num1 && 9<num2 && num1<100 && num2<100))
    {
    sum=num1+num2;
    if(sum<100)
    {
        printf("the sum is %d",sum);
    }
    else
    {
        if(num1>num2)
        {
            diff=num1-num2;
        }
        else{
            diff=num2-num1;
        }
        printf("the difference is %d",diff);
    }
    }
    else
    {
       printf("Enter the number correctly.");
    }
}
//=========================================================================================================================


//33)Question: Get two 2-digit numbers from user. Print the sum of digits of the biggest number.
//Example: Input: 56 78 – Output: 15,Input: 14 65 - Output: 11
#include<stdio.h>
int main()
{
    int num1,num2,sum,one,ten;
    printf("Enter the first two digit number:");
    scanf("%d",&num1);
    printf("Enter the second two digit number:");
    scanf("%d",&num2);
    if((-9<num1 && -9<num2 && num1<-100 && num2<-100)||(9<num1 && 9<num2 && num1<100 && num2<100))
    {
        if(num1>num2)
    {
        one=num1%10;
        ten=num1/10;
        sum=one+ten;
        printf("the sum is %d",sum);
    }
        else
    {
        one=num2%10;
        ten=num2/10;
        sum=one+ten;
        printf("the sum is %d",sum);
    }
    }
    else
    {
       printf("Enter the number correctly.");
    }
}
//=========================================================================================================================


//34)Question: Get two 3-digit numbers from user. Print the difference between the one’s digit and hundred’s digit of the number whose ten’s digit is bigger than the other number’s ten’s digit
//Example: Input: 856 978 – Output: 1,Input: 128 365 - Output: 2
#include<stdio.h>
int main()
{
    int num1, num2,ten1,ten2,one,hun,diff;
    printf("Enter the first three digit number");
    scanf("%d",&num1);
    printf("Enter the second three digit number");
    scanf("%d",&num2);
     if((-99<num1 && -99<num2 && num1<-1000 && num2<-1000)||(99<num1 && 99<num2 && num1<1000 && num2<1000))
    {
        ten1=(num1%100)/10;
        ten2=(num2%100)/10;
        if(ten1>ten2)
        {
            one=num1%10;
            hun=num1/100;
            if(one>hun)
            {
                diff=one-hun;
                printf("The result is %d",diff);
            }
            else
            {
                diff=hun-one;
                printf("The result is %d",diff);
            }
        }
        else
        {
            one=num2%10;
            hun=num2/100;
            if(one>hun)
            {
                diff=one-hun;
                printf("The result is %d",diff);
            }
            else
            {
                diff=hun-one;
                printf("The result is %d",diff);
            }
        }
    }
     else
    {
       printf("Enter the number correctly.");
    }
}
//=========================================================================================================================


//35)Question: Get two 3-digit numbers from user. Add the one’s and hundred’s digits of both the numbers. Print the sum of all the digits of the number whose sum of one’s and hundred’s digits is bigger.
//Example: Input: 856 978 – Output: 24,Input: 128 365 - Output: 11
#include<stdio.h>
int main()
{
    int num1, num2,one1,one2,hun1,hun2,ten,sum1,sum2,sum;
    printf("Enter the first three digit number");
    scanf("%d",&num1);
    printf("Enter the second three digit number");
    scanf("%d",&num2);
     if((-99<num1 && -99<num2 && num1<-1000 && num2<-1000)||(99<num1 && 99<num2 && num1<1000 && num2<1000))
    {
        one1=num1%10;
        hun1=num1/100;
        sum1=one1+hun1;
        one2=num2%10;
        hun2=num2/100;
        sum2=one2+hun2;
        if(sum1>sum2){
            ten=(num1%100)/10;
            sum=one1+ten+hun1;
            printf("The sum is %d",sum);
        }
        else
        {
            ten=(num2%100)/10;
            sum=one2+ten+hun2;
            printf("The sum is %d",sum);
        }
    }
     else
    {
       printf("Enter the number correctly.");
    }
}
//=========================================================================================================================
