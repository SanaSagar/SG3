#include<stdio.h>
<<<<<<< HEAD
int main()
{
	int pid[15];
	int bt[15];
	int n;
	printf("Enter the number of processes:");
	scanf("%d",&n);
		printf("Enter process id of all the processes:");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&pid[i]);
		}
		printf("Enter burst time of all the processes:");
		for(int i=0;i<n;i++)
		{
			scanf("%d",&bt[i]);
		}
		int i,wt[n];
		wt[0]=0;
		for(i=1;i<n;i++)
		{
			wt[i]=bt[i-1]+wt{i-1];
		}
		printf("Processes ID Burst Time Waiting Time TurnAround Time\n");
		float twt=0.0;
		float tat=0.0;
		for(i=0;i<n;i++)
		{
			printf("%d\t\t',pid[i])
			printf("%d\t\t',bt[i]);
			printf("%d\t\t',wt[i]);
			printf("%d\t\t',bt[i]+wt[i]);
			printf("\n");
			twt+=wt[i];
			tat+=(wt[]+bt[i]);
		}
		float att,awt;
		awt =twt/n;
		att=tat/n;
		printf("Avg.waiting time =%f\n",awt);
		printf("Avg.turnaround time=%f',att);
	}
=======
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
>>>>>>> f3377a94072d4e0710ea1250dd82a3b712a706e1
