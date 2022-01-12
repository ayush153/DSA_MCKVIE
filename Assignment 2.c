#include<stdio.h>
int main()
{
	int a[100][100],sparse[5000][3];
	int i,j,m,n,nonzero, zero = 0, k = 1;
	printf("\nEnter the number of rows and columns of the matrix respectviely: ");
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++)
	{
		printf("Enter %d elements for the row %d:\n ",n,i);
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\nThe entered matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
			printf("\n");
			nonzero += a[i][j] != 0;
		}
    }
  zero = (m * n) - nonzero;
  if (nonzero >= zero) 
  {
    printf("\nThe matrix is not a sparse matrix\n");
  } 
  else 
  {
    sparse[0][0] = m;
    sparse[0][1] = n;
    sparse[0][2] = nonzero;
    for (i = 0; i < m; i++) 
	 {
      for (j = 0; j < n; j++)
		 {
        		if (a[i][j])
				{
	          	sparse[k][0] = i;
	          	sparse[k][1] = j;
	          	sparse[k][2] = a[i][j];
	          	k++;
	         }
    	 }
   	}
    }
    printf("\nThe sparse matrix is: \n");
    for (i = 0; i < k; i++)
	  {
      	for (j = 0; j < 3; j++)
         printf("%d ", sparse[i][j]);
         printf("\n");
    }
  
return 0;
}
