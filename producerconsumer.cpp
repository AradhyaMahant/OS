#include<stdio.h>
#include<stdlib.h>
int mutex=1;
int full=0;
int empty=3;
int c=0;

int wait(int a)
{
	return (--a);
}
 
int signal(int a)
{
	return(++a);
}
 
void producer()
{
	wait(mutex);
	signal(full);
	c++;
	printf("\nProducer produces the item %d",c);
	signal(full);
	signal(mutex);
}
 
void consumer()
{
	signal(full);
	signal(mutex);
	printf("\nConsumer consumes item %d",c);
	c--;
	wait(mutex);
	wait(empty);
}


int main()
{
	int n;
	printf("\n1.Producer\n2.Consumer\n3.Exit");
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&n);
		switch(n)
		{
			case 1:	if((mutex==1)&&(empty!=0))
						producer();
					else
						printf("Buffer is full");
						break;
			case 2:	if((mutex==1)&&(full!=0))
						consumer();
						printf("Buffer is empty");
						break;
			case 3:
					exit(0);
					break;
		}
	}
}
