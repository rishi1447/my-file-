#include<stdio.h>
int i=0,j;
int t;
int sort(int* c)
{
    for(i=0;i< t/2;i++)
        for(j=0;j< t/2;j++)
        {
            if(c[i]<c[j])
            {
                int tem;
                tem=c[i];
                c[i]=c[j];
                c[j]=tem;
            }
        }
    return *c;
}
int result(int* c)
{
	int a=c[0],count=0;
	for(i=0;i<t/2;i++){
		int cnt=0;
	for(j=i+1;j<t/2;j++)
	{
	if( c[i]==c[j])
	{
		i++;cnt++;
		}
		else if(cnt>count)
		{count=cnt;
			a=c[i];
			}	
	}
}
	return a;
}
int main()
{
    int a[100][100],c[50],b[100][50];
    int n;
    scanf("%d",&n);
    scanf("%d",&t);
    for(i=0;i<n;i++)
    for(j=0;j<=t;j++)
    scanf("%d",&a[i][j]);
    
 for(i=0;i<n;i++)
    {
        int k=0,sum=0;
        for(j=0;j<t;j++)
        {
           if(j!=t)
           {
               sum=sum+(a[i][j] * a[i][t]) + (a[i][j+1] * a[i][t]);
               b[i][k]=sum;
               k++;
               j++;
           }
        }
    }
      for(j=0;j<(t/2);j++)
     {int a1=0; int x=0;
   for(i=0;i<n;i++)
    {
        if(b[i][j]>a1)
        {	
            x=i;
            a1=b[i][j];
        }
    }
    c[j]=x+1;
     }
sort(c);
 printf("\n winner is %d",result(c));
}


