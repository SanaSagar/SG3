#include<stdio.h>
void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp
	}
int main()
{
int n;
printf("Enter Number of Processes:");
scanf("%d",&n);

int b[n],p[n],index[n];
for(int i=0;i<n;i++)
{
printf("Enter Burst Time and Priority Value for Process%d:",i+1);
scanf("%d %d",&b[i],&p[i]);
index[i]=i+1;
}
for(int j=i;j<n;j++)
{
if(p[j]>a)
{
a=p[j];
m=j;
}
}
swap(&p[i],&p[m]);
swap(&p[i],&p[m]);
swap(&index[i],&index[m]);
}
int t=0;
printf("Order of process Execution is\n");
for(int i=0;i<n;i++)
{
printf("P%d is executed from %d to %d ]n",incex[i],tt+b[i]);
t+=b[i];
}
printf("\n");
print("Process id Burst Time Turn Around Time\n");
int wait_time=0;
for(int i=0;i<n;i++)
{
printf("P%d %d %d %d \n",index[i],b[i],wait_time,wait_time+b[i]);
wait_time+=b[i];
}
return 0;
}
