//1)Question: Write a loop program to print 1 to 5 on one by one.
//Answer: 1
//2
//3
//4
//5
#include<stdio.h>
int main()
{
    int i=0,n=1;
    loop: if(i<5)
    {
        i=i+n;
        printf("%d",i);
        printf("\n");
        goto loop;
    }
}
//===========================================================================================================================================


//2)Question: Write a loop program to print 5 to 1 on one by one.
//Answer: 5
//4
//3
//2
//1
#include<stdio.h>
int main()
{
    int i=6,n=1;
    loop: if(i>1)
    {
        i=i-n;
        printf("%d",i);
        printf("\n");
        goto loop;
    }
}
//===========================================================================================================================================


//3)Question: Write a loop program to print sum of 1 to 5.
//Answer: 15
#include<stdio.h>
int main ()
{
int i=1,sum=0;

loop: if(i < 6)
{
sum=sum+i;
i++;
goto loop;
}
printf("%d",sum);
}
//===========================================================================================================================================


//4)Question: Write a loop program to print sum of 6 to 1.
//Answer: 21
#include<stdio.h>
int main()
{
    int i=6,sum=0;
    loop: if(i>0)
    {
        sum=sum+i;
        i--;
        goto loop;
    }
     printf("%d",sum);
}
//===========================================================================================================================================


//5)Question: Write a loop program to print odd numbers 1 to 9.
//Answer: 1
//3
//5
//7
//9
#include<stdio.h>
int main()
{
    int i=1,odd;
    loop: if(i<10)
    {
        if((i%2)!=0)
        {
            printf("%d\n",i);
        }
        i++;
        goto loop;
    }
    return 0;
}
//===========================================================================================================================================


//6)Question: Write a loop program to print the two-digit odd numbers, below 20.
//Answer: 11
//13
//15
//17
//19
#include<stdio.h>
int main()
{
    int i=10;
    loop: if(i<20)
    {
        if((i%2)!=0)
        {
            printf("%d\n",i);
        }
        i++;
        goto loop;
    }
    return 0;
}
//===========================================================================================================================================


//7)Question: Write a loop program to print the two-digit odd number who’s sum of digits are 7.
//Answer: 25
//43
//61
#include<stdio.h>
int main()
{
    int num=10,one,ten,sum;
    loop: if(num<100)
    {
        if((num%2)!=0)
        {
            one=num%10;
            ten=num/10;
            sum=one+ten;
            if(sum==7){
                printf("%d\n",num);
            }
        }
        num++;
        goto loop;
    }
    return 0;
}
//===========================================================================================================================================


//8)Question: Write a loop program to print the two-digit even numbers who’s sum of digits are 6.
//Answer: 24
//42
//60
#include<stdio.h>
int main()
{
    int num,one,ten,sum;
    num=10;
    loop: if(num<100)
    {
        if((num%2)==0)
        {
            one=num%10;
            ten=num/10;
            sum=one+ten;
            if(sum==6)
            {
                printf("%d\n",num);
            }
        }
        num++;
        goto loop;
    }
    return 0;
}
//===========================================================================================================================================


//9)Question: Write a loop program to print the sum of two-digit numbers whose one’s digit is 5.
//Answer: 495
#include<stdio.h>
int main()
{
    int num=10,one,sum;
    int samp=0;
    loop: if(num<100)
    {
        one=num%10;
        if(one==5){
            samp=samp+num;
        }
        num++;
        goto loop;
    }
    printf("%d",samp);
    return 0;
}
//===========================================================================================================================================


//10)Question: Write a loop program to print the sum of two-digit odd numbers, whose ten’s digit is 7.
//Answer: 375
#include<stdio.h>
int main()
{
    int num=10,ten,sum;
    int samp=0;
    loop: if(num<100)
    {
        if((num%2)!=0)
        {
            ten=num/10;
            if(ten==7)
            {
                samp=samp+num;
            }
        }
        num++;
        goto loop;
    }
    printf("%d",samp);
    return 0;
}
//===========================================================================================================================================


//11)Question: Write a program to get a number from user print the total number of digits in that number
//Answer: Input : 123456 - Output – 6
//Input : 76895439- Output – 8
//Input : 675 – Output - 3
#include<stdio.h>
int main()
{
    int num,count=0,s=0,r=0,total;
    printf("Enter the number:");
    scanf("%d",&num);
    loop: if(num!=0)
    {
      num =num/10;
      count++;
      goto loop;
    }
    printf("%d",count);
    }
//===========================================================================================================================================


//12)Question: Write a program to get a number from user and print the sum of all digits.
//Answer: Input: 123456 - Output – 21
//Input: 76895439 - Output – 51
//Input: 675 – Output - 18
#include<stdio.h>
int main()
{
    int a,num,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    loop : if(num!=0)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
        goto loop;
    }
    printf("%d",sum);
}
//===========================================================================================================================================


//13)Question: Write a program to get a number from user and print the reverse of that number
//Answer: Input : 123456 - Output – 654321
//Input : 76895439- Output – 93459867
//Input : 675 – Output - 576
#include<stdio.h>
int main()
{
    int num,rem,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);
    loop: if(num!=0)
    {
        rem=num%10;
        sum=(sum*10)+rem;
        num=num/10;
        goto loop;
    }
    printf("%d",sum);
}
//===========================================================================================================================================


//14)Question: Write a program to get a number from user and interchange the first and last digits and print the result.
//Answer: Input : 123456 - Output – 623451
//Input : 76895439- Output – 96895437
//Input : 675 – Output - 576
#include<stdio.h>
int main()
{
    int num,fir,las,res,rim,rev=0,fre,rem,rim1,rev1=0,res1;
    printf("Enter the number:");
    scanf("%d",&num);
    las=num%10;
    fre=num/10;
   loop:
    if(fre!=0){
        rim=fre%10;
        rev=(rev*10)+rim;
        fre=fre/10;
        goto loop;
    }
    fir=rev%10;
    rem=rev/10;
    res=(rem*10)+las;
    loop1:
    if(res!=0){
        rim1=res%10;
        rev1=(rev1*10)+rim1;
        res=res/10;
        goto loop1;
    }
    res1=(rev1*10)+fir;
    printf("%d",res1);
}
//===========================================================================================================================================


//15)Question: Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd then subtract 1 from the last digit and print the number.(Note: Last digit -MSB)
//Answer: Input : 123456 - Output – 123456
//Input : 96895439- Output – 76895439
//Input : 675 – Output - 575
#include<stdio.h>
int main()
{
    int num,sum1=0,sum2=0,rev1=0,rim1,rim2,rev2=0,one,res1,res2;
    printf("Enter the number:");
    scanf("%d",&num);
    res1=num;
    one=num%10;
    if(one%2!=0){
        loop:
        if(num!=0){
            rim1=num%10;
            rev1=(rev1*10)+rim1;
            num=num/10;
            goto loop;
            }
            res2=rev1-1;
            loop1:
            if(res2!=0){
                rim2=res2%10;
                rev2=(rev2*10)+rim2;
                res2=res2/10;
                goto loop1;
                }
                printf("%d",rev2);
                }
    else
    {
        printf("%d",num);
        }
 }
//===========================================================================================================================================


//16)Question: Write a program get number from user print whether that number is prime or not.
//Answer: Input : 31 - Output : Prime
//Input : 27 - Output : Not Prime.
#include<stdio.h>
int main()
{
    int num,i=2,count=1;
    printf("Enter the number:");
    scanf("%d",&num);
    loop:
    if(i<num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
        goto loop;

    }
    if(count==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}
//===========================================================================================================================================


//17)Question: Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.
//Answer: Input: 59 - Output: Prime & Sum of Digits is 14
//Input: 77 - Output: Not Prime but sum of digits is 14
//Input: 13 - Output: Prime, but sum of Digits is not 14
 #include<stdio.h>
 int main()
 {
    int num,i=2,count=1,sum=0,digit;
    printf("Enter the number:");
    scanf("%d",&num);
    loop:
    if(i<num)
    {
        if(num%i==0)
        {
            count++;
        }
        i++;
        goto loop;
    }
    loop1:
    if(num!=0)
    {
        digit=num%10;
        sum=sum+digit;
        num=num/10;
        goto loop1;
    }
    if(count==1&&sum==14)
    {
        printf("prime and sum of digits is 14");
    }
    else if(count==1&&sum!=14)
    {
        printf("prime but sum of digits is not 14");
    }
    else if(count!=1&&sum==14)
    {
        printf("not a prime but sum of digits is 14");
    }
    else if(count!=1&&sum!=14)
    {
        printf("not a prime and sum of digits is not 14");
    }
 }
//===========================================================================================================================================


//18)Question: Write a program to get number from user, print whether that number’s first two digits (ten’s digits and one’s digit) is prime.
//Answer: Input: 359 - Output: Prime
//Input: 3577 - Output: Not Prime
#include<stdio.h>
int main()
{
    int num,dig,count=1,i=2;
    printf("Enter the number");
    scanf("%d",&num);
    dig=num%100;
    loop:
    if(i<dig)
    {
        if(dig%i==0)
        {
            count++;
        }
        i++;
        goto loop;
    }
    if(count==1)
    {
        printf("prime");
    }
    else
    {
        printf("not prime");
    }
}
//===========================================================================================================================================


//19)Question: Write a program to get a 4-digit number from user, print whether that number’s middle two digits (hundred’s digit and ten’s digit) is prime.
//Answer: Input: 6359 - Output: Not Prime
//Input: 3517 - Output: Prime
#include<stdio.h>
int main()
{
    int num,dig,i=2,count=1;
    printf("Enter the four digit number:");
    scanf("%d",&num);
    if((-999<num&&num<-10000)||(999<num&&num<10000))
    {
        dig=(num/10)%100;
         loop:
         if(i<dig)
         {
             if(dig%i==0)
             {
                 count++;
            }
                 i++;
                 goto loop;
        }
             if(count==1)
             {
                 printf("prime");
             }
             else
             {
                 printf("not prime");
             }
    }
    else
    {
       printf("Enter the number correctly.");
    }
}
//===========================================================================================================================================


//20)Question: Write a program print total number of single digit Prime numbers
//Answer: 4
#include <stdio.h>

int main() {
    int num = 2,total = 0,i,count;
loop:
    if (num < 10) {
        i = 1;
        count = 0;
        
    loop1:
        if (i <= num) {
            if (num % i == 0) {
                count++;
            }
            i++;
            goto loop1;
        }
        
        if (count == 2) {
            total++;
        }
        
        num++;
        goto loop;
    }
    
    printf("%d",total);
    return 0;
}
//===========================================================================================================================================


//21)Question: Write a program get number from user print the total number digits which are odd in the number.
//Answer: Input : 12345678 - Output : 4
//Input : 987531 - Output : 5
#include<stdio.h>
int main()
{
    int num,odd,sum=0,rem;
    printf("Enter the number:");
    scanf("%d",&num);
    loop: 
    if(num!=0)
    {
        rem=num%10;
        odd=rem%2;
        if(odd!=0)
        {
            sum++;
        }
        num=num/10;
        goto loop;
    }
    printf("%d",sum);
}
//===========================================================================================================================================


//22)Question: Write a program get number from user print the total number of two-digit odd numbers in the number.
//Answer: Input: 12345678 - Output: 3
//Input: 987531 - Output: 4
#include<stdio.h>
int main()
{
    int num,rem,sum=0,odd;
    printf("Enter the number:");
    scanf("%d",&num);
    loop:
    if(num!=0)
    {
        rem=num%100;
        odd=rem%2;
        if(rem>9&&rem<100)
        {
            if(odd!=0)
        {
            sum++;
        }
        }
        num=num/10;
        goto loop;
    }
    printf("%d",sum);
}
//===========================================================================================================================================


