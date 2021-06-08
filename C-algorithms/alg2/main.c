#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "procesoare1.h"
int main()

{

    FILE *pf;

    pf=fopen("procesoare09.out","w");
    int i=1,j=1,Dm,S=0,S2=0,d[100],x[100],k=3,p,n,s;

    srand(time(NULL));
    p=1+rand()%20;
    fprintf(pf,"nr procesoarelor este %d\n",p);

    n=1+rand()%30;

    fprintf(pf,"nr sarcinilor de lucru este %d\n",n);


    if (p<1 || n<1 || n>k*p)
    {
        fprintf(pf,"numar insuficient de procesoare");
        return 0;
    }


    for(i=1; i<=n; i++)
    {
        d[i]=1+rand()%100;
        fprintf(pf,"d[%d]= %d\n",i,d[i]);
    }


    void swap(int* a, int* b);

    int partition (int arr[], int low, int high);

    void quickSort(int arr[], int low, int high);

    void printArray(int arr[], int size)
    {
        int i;
        for (i=1; i <= size; i++)
        {
            fprintf(pf,"%d",arr[i]);
            fprintf(pf," ");
        }
        fprintf(pf,"\n");
    }


    quickSort(d,1,n);
    printArray(d,n);

    i = 1;


    for(i=1; i<=n; i++)
    {
        S=S+d[i];
    }

    Dm=S/p;

    i=1;
    j=1;

    while (i<=n)
    {
        if(i==n)
        {
            x[j]=d[i];
        }
        else
        {
            x[j]=d[i]+d[i+1]+d[i+1];
        }

        j=j+1;
        i=i+2;

    }


    for(s=j; s<=n; s++)
    {
        x[s]=0;
    }
    for(i=1; i<j; i++)

    {
        fprintf(pf,"x[%d] = %d\n",i,x[i]);

    }
    for(i=1; i<j; i++)
        S2=S2+abs(x[i]-Dm);

    fprintf(pf,"S2= %d",S2);


    return 0;
}

