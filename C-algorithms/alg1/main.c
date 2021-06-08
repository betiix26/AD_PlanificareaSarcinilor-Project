#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "sarcini.h"

int main()
{
     FILE *pf;

    pf=fopen("sarcini10.out","w");

	int i,j,Dm,S=0,S2=0,d[100],x[100],k=2,p,n,l;

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


     for(i=1;i<=n;i++)
    {
        d[i]=1+rand()%100;
       fprintf(pf,"d[%d]= %d\n",i,d[i]);
    }


    void merge(int arr[], int l, int m, int r);

    void mergeSort(int arr[], int l, int r);

   void printArray(int A[], int size)
    {
        int i;
        for (i=1; i <= size; i++)

        {
            fprintf(pf,"%d",A[i]);

            fprintf(pf," ");
        }
      fprintf(pf,"\n");
  }

	mergeSort(d,1,n);
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
            x[j]=d[i]+d[i+1];
        }

        j=j+1;
        i=i+2;

    }
      for(l=j;l<=n;l++)
      {
          x[l]=0;
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



