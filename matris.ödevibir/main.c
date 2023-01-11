#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int M,N,i,j,k,l,f,u,o,p,t,q,w,a,s;
    s: printf("Matriste satýr sayýsýný girniz\n");
    scanf("%d",&M);
    printf("Matriste sutün sayýsýný girniz\n");
    scanf("%d",&N);
    if (M<3)
    {printf("lütfen 3ten büyük deger giriniz\n");
    goto s;
    }
    else if (N<3)
    {printf("lütfen 3ten büyük deger giriniz\n");
    goto s;
    }
    int H[M-1][N-1],A[M][N],G[3][3];
    for (k=0;k<3;k++)
            {printf("filtre elemanlarýný girin");
             scanf("%d",&o);
             G[k][u]=o;
                for (u=1;u<3;u++)
                {
                 printf("filtre elemanlarýný girin");
                 scanf("%d",&p);
                 G[k][u]=p;
                    }
                    u=0;
                    }



    for (i=0;i<M;i++)
    {
        A[i][j]=rand()%255;
            for (j=0;j<N;j++)
            {
                A[i][j]=rand()%255;
                printf("A[%d][%d]=%d \n",i,j,A[i][j]);
            }
    }
   for (f=0;f<M-2;f++)
    {
        for (l=0;l<N-2;l++)
        {       for (f=0;f<3;f++)
            {
                t=+G[f][l]*A[f][l];
                        for (l=1;l<3;l++)
                        {
                        t=+G[f][l]*A[f][l];
                        }
                        l=0;
            }
    H[q][w]=t;
    w++;
    t=0;
    }
    w=0;
    H[q][w]=t;
    q++;
    }

    for (a=0;a<M-2;a++)
    {  for(s=0;s<N-2;s++)
            {
            printf("H[%d][%d]=%d",a,s,H[a][s]);
            }
    }


    return 0;
}
//çalýþmýyor hatayý bulamadým :/
