#include<stdio.h>

int main()
{
	int n,i,qt,count=0,temp1,temp2=0,bt[10],wt[10],tat[10],rt[10];
	float awt=0;
	printf("enter no. of process");
	scanf("%d",&n);
	printf("enter burst time");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
		rt[i]=bt[i];
	}
	printf("enter quantum time");
	scanf("%d",&qt);
	while(1)
	{
		for(i=0;i<n;i++)
		{
			temp1=qt;
			if(rt[i]==0)
			{
				count++;
				continue;
			}
			if(rt[i]>qt)
				rt[i]=rt[i]-qt;
			else
				if(rt[i]=0)
				{
					temp1=rt[i];
					rt[i]=0;
				}
				temp2=temp2+temp1;
				tat[i]=temp2;
		}
		if(n==count)
			break;
	}
	printf("\nprocess\tburst time\tturnaround time\twaiting time\n");
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-bt[i];
		awt=awt+wt[i];
		printf("\n%d\t%d\t\t%d\t\t%d",i+1,bt[i],tat[i],wt[i]);
	}
	awt=awt/n;
	printf("avg waiting time=%f\n",awt);
}
