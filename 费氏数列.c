#include<stdio.h>
int main()
{
    int n,i,zhiyinshu[100]={0},j=0;
    scanf("%d",&n);
    //质数分解
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
               zhiyinshu[j]=i;
               n=n/i;
      j++; //因数个数
        }
    }
   /*用count计算底数的个数 若指数不同 存在min[]
   eg:100=2*2*5*5 2与五不同存一次count=2 5与min[5]=0不同 存一次count=4
   由于42行需输出指数个数 用min[h]-min[h-1]*/
    int k,count=0,f=0,geshu;
    int total_zhishu[20]={0};
    while(1)
 {
     for(k=0;k<j;k++)
     {
   count++;
   if(zhiyinshu[k] != zhiyinshu[k+1])
   {
    total_zhishu[f+1]=count;//目的是令 min[0]=0 数据从min[1]开始存起
    f++;
   }
  }
  if(zhiyinshu[k]==0)
  {
   break;
  }
 }
 /*打印底数 指数*/
    int m,h=1;
    for(m=0;m<j;m++)
    {
     if(zhiyinshu[m] != zhiyinshu[m+1])
  {
      printf("%d ",zhiyinshu[m]);//打印底数
      printf("%d\n",geshu=total_zhishu[h]-total_zhishu[h-1]);//得出指数的个数
      h++;
  }
 }
    return 0;
}
