#include<stdio.h>
#include<time.h> 
#include<stdlib.h>
int another(int sum);                                                                            /*自定义函数*/
int main() 
{
    srand(time(NULL));
    int a,b,c,i,j,score[10],result,sum=0;
    for(i=0;i<10;i++)                                                                            /*电脑随机出10道题*/
	{ 
    for(a=rand()%51,b=rand()%51;a+b>50 || a+b<0 || a-b>50 || a-b<0; a=rand()%51,b=rand()%51)     /*a,b均为0~50范围内的随机整数，且两数之和或之差均未超出0~50的范围*/
    c=rand()%2;                                                                                  /*c为0~2范围内的随机整数*/ 
    for(j=0;j<3;j++)                                                                             /*每道题学生有三次机会输入答案*/
	{
    if(c==1)                                                                                     /*当c等于1时,问题为加法，否则为减法*/  
	{
        printf("%d:%d+%d=",i+1,a,b);
        result=a+b;
        scanf("%d",&score[i]);
        if(score[i]!=result)
		{
            printf("答案错误，请重新输入.\n");                                                    /*当学生输入错误答案时，提醒学生重新输入*/
            score[i]=0;                                                                           /*答案输入错误不得分*/
        }
        else
		{
            if(j==0)
			{
                score[i]=10;                                                                      /*第一次输入正确答案得10分*/
            }
            else if(j==1)
			{
                score[i]=7;                                                                       /*第二次输入正确答案得7分*/
            }
            else
			{
                score[i]=5;                                                                       /*第三次输入正确答案得5分*/
            }
            break;
        } 
    }
    else
	{
        printf("%d:%d-%d=",i+1,a,b);
        result=a-b;
        scanf("%d",&score[i]);
        if(score[i]!=result)
		{
            printf("答案错误，请重新输入.\n");                                                    /*当学生输入错误答案时，提醒学生重新输入*/
            score[i]=0;                                                                           /*答案输入错误不得分*/
        }
        else
		{
            if(j==0)
			{
                score[i]=10;                                                                      /*第一次输入正确答案得10分*/
            }
            else if(j==1)
			{
                score[i]=7;                                                                       /*第二次输入正确答案得7分*/
            }
            else
			{
                score[i]=5;                                                                       /*第三次输入正确答案得5分*/
            }
            break;
        } 
    }
    }
    if(score[i]==0)
	{
        printf("正确答案是：%d\n",result);                                                        /*如果三次机会结束则输出正确答案*/ 
    }
    sum=sum+score[i];
    }
    printf("你的成绩是:%d\n",sum);                                                                /*显示学生得分*/
    another(sum);
    return 0; 
}
int another(int sum) 
{
    if(sum>90)
	{
        printf("SMART.\n");                                                                       /*总成绩90以上显示“SMART”*/
    }
    else if(sum>=80)
	{
        printf("GOOD.\n");                                                                        /*总成绩80-90显示“GOOD”*/
    }
    else if(sum>=70)
	{
        printf("OK.\n");                                                                          /*总成绩70-80显示“OK”*/
    }
    else if(sum>=60)
	{
        printf("PASS.\n");                                                                        /*总成绩60-70显示“PASS”*/
    }
    else
	{
        printf("TRY AGAIN\n");                                                                    /*总成绩60以下显示“TRY AGAIN”*/ 
    }
}
