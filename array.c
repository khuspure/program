#include <stdio.h>

void main()
{
  int arr1[3][3],i,j;
  
       printf("The Input Elements In Matrix :\n");  

  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
      	printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
   printf("The Matrix Is : \n");
  for(i=0;i<3;i++)
  {
       printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }

}
