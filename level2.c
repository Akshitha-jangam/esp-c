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



