#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
  //Write your code here.
   int i=0,j=0;
   int andMax=0,orMax=0,xorMax=0;
int tempA=0,tempO=0,tempX=0;
   for(i=1;i<=n;i++)
   {
	for(j=i+1;j<=n;j++)
	{
	  andMax=(i&j);	  
	  orMax=(i|j);
	  xorMax=(i^j);
          
          if(andMax < k)
	  {
	   andMax= (andMax > tempA)?andMax:tempA;
	   tempA = andMax;
	  }
     if(orMax < k)
	  {
	   orMax= (orMax > tempO)?orMax:tempO;
	   tempO = orMax;
	  }

     if(xorMax < k)
	  {
	   xorMax= (xorMax > tempX)?xorMax:tempX;
	   tempX = xorMax;
	  }

//printf("%d,%d ; &=%d(%d) |=%d(%d) ^=%d(%d) \n",i,j,andMax,tempA,orMax,tempO,xorMax,tempX); 
	}
   }
   printf("%d\n%d\n%d\n",tempA,tempO,tempX);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
  
