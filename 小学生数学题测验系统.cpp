#include<stdio.h>
#include<time.h> 
#include<stdlib.h>
int another(int sum);                                                                            /*�Զ��庯��*/
int main() 
{
    srand(time(NULL));
    int a,b,c,i,j,score[10],result,sum=0;
    for(i=0;i<10;i++)                                                                            /*���������10����*/
	{ 
    for(a=rand()%51,b=rand()%51;a+b>50 || a+b<0 || a-b>50 || a-b<0; a=rand()%51,b=rand()%51)     /*a,b��Ϊ0~50��Χ�ڵ����������������֮�ͻ�֮���δ����0~50�ķ�Χ*/
    c=rand()%2;                                                                                  /*cΪ0~2��Χ�ڵ��������*/ 
    for(j=0;j<3;j++)                                                                             /*ÿ����ѧ�������λ��������*/
	{
    if(c==1)                                                                                     /*��c����1ʱ,����Ϊ�ӷ�������Ϊ����*/  
	{
        printf("%d:%d+%d=",i+1,a,b);
        result=a+b;
        scanf("%d",&score[i]);
        if(score[i]!=result)
		{
            printf("�𰸴�������������.\n");                                                    /*��ѧ����������ʱ������ѧ����������*/
            score[i]=0;                                                                           /*��������󲻵÷�*/
        }
        else
		{
            if(j==0)
			{
                score[i]=10;                                                                      /*��һ��������ȷ�𰸵�10��*/
            }
            else if(j==1)
			{
                score[i]=7;                                                                       /*�ڶ���������ȷ�𰸵�7��*/
            }
            else
			{
                score[i]=5;                                                                       /*������������ȷ�𰸵�5��*/
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
            printf("�𰸴�������������.\n");                                                    /*��ѧ����������ʱ������ѧ����������*/
            score[i]=0;                                                                           /*��������󲻵÷�*/
        }
        else
		{
            if(j==0)
			{
                score[i]=10;                                                                      /*��һ��������ȷ�𰸵�10��*/
            }
            else if(j==1)
			{
                score[i]=7;                                                                       /*�ڶ���������ȷ�𰸵�7��*/
            }
            else
			{
                score[i]=5;                                                                       /*������������ȷ�𰸵�5��*/
            }
            break;
        } 
    }
    }
    if(score[i]==0)
	{
        printf("��ȷ���ǣ�%d\n",result);                                                        /*������λ�������������ȷ��*/ 
    }
    sum=sum+score[i];
    }
    printf("��ĳɼ���:%d\n",sum);                                                                /*��ʾѧ���÷�*/
    another(sum);
    return 0; 
}
int another(int sum) 
{
    if(sum>90)
	{
        printf("SMART.\n");                                                                       /*�ܳɼ�90������ʾ��SMART��*/
    }
    else if(sum>=80)
	{
        printf("GOOD.\n");                                                                        /*�ܳɼ�80-90��ʾ��GOOD��*/
    }
    else if(sum>=70)
	{
        printf("OK.\n");                                                                          /*�ܳɼ�70-80��ʾ��OK��*/
    }
    else if(sum>=60)
	{
        printf("PASS.\n");                                                                        /*�ܳɼ�60-70��ʾ��PASS��*/
    }
    else
	{
        printf("TRY AGAIN\n");                                                                    /*�ܳɼ�60������ʾ��TRY AGAIN��*/ 
    }
}
