
#include <stdio.h>
#include<stdlib.h>

int tax[100];
 int slab[10],s[10],ic[10];

void result(int r)//this function decodes the tax amount and gives the income of each employee
{	long int totalsalary=0;
	int i=0,j=0,i1,salary=0;
	for(i=0;tax[i]!='\0';i++)
	{
	i1=ic[1];salary=0;

		for(j=1;j<=ic[j]!='\0';j++)
		{
			if(tax[i]>ic[j-1] && tax[i]<=i1)// if to check below or equal to top slab
			{
				salary=((tax[i]-i1)/s[j-1])*100;
				salary=slab[j]+salary;
				totalsalary+=salary+r;
			//	printf(" %d",salary+r);
			}
			else if(tax[i]>i1 && ic[j+1]=='\0' )// if to check above the top slab
			{
					salary=((tax[i]-i1)/s[j])*100;
				salary=slab[j]+salary;
				totalsalary+=salary+r;
			//	printf(" %d",salary+r);
			}else{
				i1=i1+ic[j+1];
			}
		}
		
	}
	printf("\n\n%ld",totalsalary);// prints the final result
}


int main()
{
    int rebate,salary,i=0,j=0;
    // the while loop takes the input with out knowing the actual no. of inputs
    while(1)
    {char t;
    	scanf("%d",&slab[i]);
    	scanf("%c",&t);i++;
    	if(t=='\n')
    	break;
	}int i1=i;
	int a=0;ic[0]=0;
	for(i=0;i<i1;i++)
	{
		scanf("%d",&s[i]);
		if(slab[i+1]!='\0')
		ic[i+1]=(s[i]*(slab[i+1]-slab[i]))/100;
	//	printf("%d",ic[i+1]);
	}
	scanf("%d",&rebate);
	i=0;
	 while(1)
    {char t;
    	scanf("%d",&tax[i]);
    	scanf("%c",&t);i++; 
    	
    	if(t=='\n')
    	break;
	}
//	printf("\nIndividual salaries\n");
result(rebate);
	    return 0;
}






