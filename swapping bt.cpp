#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main(){

 int i , j, n ,t , p[n],bt[n],wt[n],tat[n];
 float awt =0;
 printf("Enter the number of process ");
 scanf("%d",&n);
 printf("Enter the process number ");
 for( i =0 ; i<n ; i++){
    scanf("%d",&p[i]);
 }
 printf("Enter the burst time of the process ");
 for(int i = 0 ; i <n ; i++){
    scanf("%d",&bt[i]);

 }
 for(i = 0 ; i <n ; i++){

    for(j =0 ; j <n-i-1 ; j++){
        if(bt[j] > bt[j+1]){
            t = bt[j];
            bt[j]=bt[j+1];
            bt[j+1] = t;

            t = p[j];
            p[j] = p[j+1];
            p[j+1] = t ;

        }
    }

 }

printf("Process\tBUrst Time\tWaiting tIme\tTurn around time \n");
for(i =0 ; i <n  ; i++){

    wt[i] =0;
    tat[i] =0;
    for(j =0 ; j <i ; j++){
        wt[i] =wt[i]+bt[j];
    }
    tat[i] =wt[i] +bt[i];
    awt =awt +wt[i];
    printf("%d\t%d\t\t%d\t\t%d \n",p[i],bt[i],wt[i],tat[i]);
}
awt = awt/n;
printf("Average waiting time %d",awt);

}
