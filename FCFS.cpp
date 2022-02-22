#include <iostream>
#define max 30
using namespace std;

int main()
{
    
    int i , j , n , bt[max] ,wt[max], tat[max];
    float awt =0 ;
    
    cout<<"Enter the number of process";
    cin>>n;
    cout<<"ENter the burst time of the processes";
    for(i =0 ; i<n ; i++)
            cin>>bt[i];
    cout<<"Process\t Burst Time\t Waiting Time \t TAT\n";
    for(i =0 ; i <n ; i++)
		{
        wt[i] = 0;
        tat[i]= 0;
        for(j =0 ; j <i ; j++){
            wt[i] = wt[i]+bt[i];
        }
        tat[i] = wt[i]+bt[i];
        awt = awt+wt[i];
        cout<<i+1<<"\t"<<bt[i]<<"\t\t"<<wt[i]<<"\t\t"<<tat[i]<<endl;
        	}
} 

