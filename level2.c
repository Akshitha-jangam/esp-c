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


