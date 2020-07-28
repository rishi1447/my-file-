
#include <stdio.h>
#include<stdlib.h>
int main()
{
    
  float rr,rr1;
  int bat[2];
  int runs=0;
  float b=0;
  int b1=0,r=0;
  char run[100];
 scanf("%f",&rr);
 scanf("%d%d",&bat[0],&bat[1]);
 fflush(stdin);
 int i=0;
while(1)
  {
      char t;
      scanf("%c%c",&run[i],&t);
          
    
        if(run[i]!='W'){
     r=r+(run[i]-48);
 }
      b1++;   
      i++;
        if(t=='\n')
      break;
   
  }
   
 
 scanf("%f",&rr1);

b=((rr1*b1)-(6*r))/(rr-rr1);
int ob=b/1;
runs=rr*b/6;//printf(" before power outage balls and score  :%d , %d\n",ob,runs);
int f=0;
for(i=0;i<b1;i++)
{
	int s;
	if(run[i]!='W')
	{
 s=run[i]-48;
	ob++;
	bat[f]=bat[f]+s;
//	printf("\n%d",ob%6);	printf("  b[%d]->%d",f,s);
	if(s%2==1 && ob%6!=0){
			f=f+1;
			if(f%2==0)
			f=0;
		}
	}else
	{
		bat[f]=0;
		ob++;
		}
	
	if(ob%6==0)
	{
		if(s%2==0)
		f=f+1;
		if(f==2)
		f=0;
		}	
	
}

runs=runs+r;printf("\n %d",runs);
printf(" %d",bat[f]);
f=f+1;
if(f==2)
f=0;

printf(" %d",bat[f]);

    return 0;
}

