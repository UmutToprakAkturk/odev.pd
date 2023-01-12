#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int M=0,N=0,i=0,j=0,k=0,l=0,f=0,u=0,o=0,p=0,t=0,b=0,q=0,w=0,a=0,s=0,m=0,n=0;
    y: printf("Matriste satýr sayýsýný girniz\n");
    scanf("%d",&M);
    printf("Matriste sutün sayýsýný girniz\n");
    scanf("%d",&N);
    if (M<3)
    {printf("lütfen 3ten büyük deger giriniz\n");
    goto y;
    }
    else if (N<3)
    {printf("lütfen 3ten büyük deger giriniz\n");
    goto y;
    }
    m=M-2;
    n=N-2;
    int H[m][n],A[M][N],G[3][3];
    for (k=0;k<3;k++)
            {printf("filtre elemanlarýný girin");
             scanf("%d",&o);
             G[k][u]=o;
                for (u=1;u<3;u++)
                {
                 printf("filtre elemanlarýný girin");
                 scanf("%d",&p);
                 G[k][u]=p; //g matrisi filtredir
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
   for (a=0;a<m;a++)//burda filtre matrisinin degerlerini sabit tutarken carpılacak olan matrisin diger elemenalarına geçmeye calıstım
    {
        for (s=0;s<n;s++)
        {       for (f=0;f<3;f++)
            {
                t=+G[f][l]*A[a][s];
                b=t;
                        for (l=1;l<3;l++)
                        {
                        s++;
                        t=+G[f][l]*A[a][s];
                        b=t;
                        }
                        l=0;
                        s=s-2;
                        a++;
            }
            a=a-3;
    H[q][w]=t;
    w++;
    t=0;
    }
    w=0;
    H[q][w]=b;
    q++;
    b=0;
    }//H görüntü matrisine deger verdim ancak sadece son filtre degerinin cıktısını alıyorum.

    for (q=0;q<M-2;q++)
    {  for(w=0;w<N-2;w++)
            {
            printf("H[%d][%d]=%d",q,w,H[q][w]);
            }
    }


    return 0;
}
//düzgün çalýþmýyor hatayý bulamadým :/
