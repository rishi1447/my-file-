
#include<stdio.h>
#include<string.h>
int main()
{
  int n;
  char b[10000],g[10000];
  scanf("%d",&n);
  scanf("%s",b);
  scanf("%s",g);
  int r=0,m=0,l=0;
  int i;
  for(i=0;i<n;i++)
  {
    if(g[i]=='r')
      r++;
    else
      m++;
  }
  l=strlen(b);
  for(i=0;i<=n;i++)
  {
    if(b[i]=='r'&& i!=n)
    {
      if(r==0)
      {
        printf("%d",l);
        break;
      }
      r--;
      l--;
    }
    else if(b[i]=='m' && i!=n)
    {
      if(m==0)
      {
        printf("%d",l);
        break;
      }
      m--;
      l--;
    }
    else
    {
      printf("0");
    }
  }
  return 0;
}


