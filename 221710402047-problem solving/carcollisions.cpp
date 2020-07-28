#include <stdio.h>
#include <math.h>

int main ()
{
  int c,i,j;
  int Q=0; 
  scanf ("%d", &c);
  float time[c]; 
  long int cx,cy,cv;
 

  for( i=0;i<c;i++){
  	 scanf("%ld""%ld""%ld",&cx,&cy,&cv);
     
          time[i]=(sqrt((cx*cx)+(cy*cy))/cv);
      
  }

  for( i=0;i<c;i++){
      for( j=i+1;j<c;j++){
          if(time[i]==time[j]){
             Q++;
          }
      }
      
  }
  printf("%d",Q);
   return 0;
   
}
