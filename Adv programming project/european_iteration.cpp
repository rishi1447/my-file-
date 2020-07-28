#include <stdio.h>
 #include<string.h>
 #include<math.h>

int i = 0;
char roman[1000];
void predigit(char ch1, char ch2);
void postdigit(char ch, int n);

void romannum(int number)
{
	  while (number != 0)
    {
        if (number >= 1000)
        {
            postdigit('M', number / 1000);
            number = (number % 1000) ;
        }
        else if (number >= 500)
        {
            if (number < 900)
            {
                postdigit('D', number / 500);
                number = number%500;
            }
            else
            {
                predigit('C','M');
                number = number - 900 ;
            }
        }
        else if (number >= 100)
        {
            if (number < 400) 
            {
                postdigit('C', number / 100);
                number = number % 100;
            }
            else
            {
                predigit('L', 'D');
                number = number - 400;
            }
        }
        else if (number >= 50 )
        {
            if (number < 90)
            {
                postdigit('L', number / 50);
                number = number % 50;
            }
            else
            {
                predigit('X','C');
                number = number - 90 ;
            }
        }
        else if (number >= 10)
        {
            if (number < 40)
            {
                postdigit('X', number / 10);
                number = number % 10;
            }
            else
            {
                predigit('X','L');
                number = number - 40;
            }
        }
        else if (number >= 5)
        {
            if (number < (5 + 4 * 1))
            {
                postdigit('V', number / 5);
                number = number - (number / 5) * 5;
            }
            else
            {
                predigit('I', 'X');
                number = number - (10 - 1);
            }
        }
        else if (number >= 1)
        {
            if (number < 4)
            {
                postdigit('I', number / 1);
                number = number - (number / 1) * 1;
            }
            else
            {
                predigit('I', 'V');
                number = number - (5 - 1);
            }
        }
    }
}
void predigit(char ch1, char ch2)
{
    roman[i++] = ch1;
    roman[i++] = ch2;
}
 
void postdigit(char ch, int n)
{
    int j;
    for (j = 0; j < n; j++)
        roman[i++] = ch;
} 
 
 int iteration(char *roman1)
 {
int base=0,a=0;

        base=roman1[0]-54;

//printf("base - %d\n",base);
for(int i=0,j=strlen(roman1)-1;i<strlen(roman1);i++,j--)
{
    a=((roman1[i]-55)*pow(base,j))+a;
}


    return a;

 }

int main()
{
    int j,l=0;
    int num;
 
    scanf("%d", &num);
    
    if(num <=3999&& num!=0)
    {
    	while(num<3999)
    	{
		romannum(num);
		char roman1[1000];
		for(j=0;j<strlen(roman);j++)
		{
			roman1[j]=roman[l];
			l++;
		//	printf("%c",roman1[j]);
		}
		    num=iteration(roman1);
		   
	}
}

   
   printf("\n%d",num);
    return 0;
}
 

