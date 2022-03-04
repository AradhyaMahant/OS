#include<iostream>
using namespace std;
 
int main()
{
	int page[10],nop,nof,pagesize,i;
	printf("Enter the number of pages:");
	scanf("%d",&nop);
	printf("Enter the number of frames:");
	scanf("%d",&nof);
	printf("Enter the page size:");
	scanf("%d",&pagesize);
	printf("Enter the page table values:");
	for(i=0;i<nop;i++)
		scanf("%d",&page[i]);
	int p_no,off;
	printf("Enter the logical address:");
	printf("Page No.:");
	scanf("%d",&p_no);
	printf("Offset Value:");
	scanf("%d",&off);
	if(page[p_no]==-1)
		printf("Page Is Not Available");
	else
	{
		printf("Page Is Available");
		printf("Frame Number Is \n", page[p_no]);
		printf("Offset Value Is \n", off);
	}
	return 0;
}
