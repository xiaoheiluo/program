#include<stdio.h>
int main()
{
    int n,i,zhiyinshu[100]={0},j=0;
    scanf("%d",&n);
    //�����ֽ�
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
               zhiyinshu[j]=i;
               n=n/i;
      j++; //��������
        }
    }
   /*��count��������ĸ��� ��ָ����ͬ ����min[]
   eg:100=2*2*5*5 2���岻ͬ��һ��count=2 5��min[5]=0��ͬ ��һ��count=4
   ����42�������ָ������ ��min[h]-min[h-1]*/
    int k,count=0,f=0,geshu;
    int total_zhishu[20]={0};
    while(1)
 {
     for(k=0;k<j;k++)
     {
   count++;
   if(zhiyinshu[k] != zhiyinshu[k+1])
   {
    total_zhishu[f+1]=count;//Ŀ������ min[0]=0 ���ݴ�min[1]��ʼ����
    f++;
   }
  }
  if(zhiyinshu[k]==0)
  {
   break;
  }
 }
 /*��ӡ���� ָ��*/
    int m,h=1;
    for(m=0;m<j;m++)
    {
     if(zhiyinshu[m] != zhiyinshu[m+1])
  {
      printf("%d ",zhiyinshu[m]);//��ӡ����
      printf("%d\n",geshu=total_zhishu[h]-total_zhishu[h-1]);//�ó�ָ���ĸ���
      h++;
  }
 }
    return 0;
}
