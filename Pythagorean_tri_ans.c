#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, count=0,num=5000;
    /*求num以内勾股数*/
    for(a=1; a<=num; a++)
        for(b=a+1; b<=num; b++){
            c=(int)sqrt(a*a+b*b);  /*求c值*/
            if(c*c==a*a+b*b && a+b>c && a+c>b && b+c>a && c<=num){ /*判断c的平方是否等于a2+b2*/
                //printf("%4d,%4d,%4d     ", a, b, c);
                count++;
                //if(count%4==0)  /*每输出4组解就换行*/
                //    printf("\n");
            }
        }
    printf("\n%d",count);
    return 0;
}
