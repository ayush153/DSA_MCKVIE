#include<stdio.h>
int main()
{
	int n,i,j,temp,position,min,a[100];
	printf("\nEnter number of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements:", n);
	
    for (i = 0; i < n; i++)
    { 
        scanf("%d", &a[i]);
    }
    printf("\nThe unsorted array elements are:");
    for(i = 0;i < n; i++)
    {
    	printf("\n %d",a[i]);
	 }
	 
	 for (i = 0; i <= (n - 1); i++)
    {
	
    		min=a[i];
    		position=i;
    
        for (j = i + 1; j < n ; j++)
        {
            
            if (min > a[j ]) 
            {
                position=j;
                min=a[j];
            }
           
        }
        if(i!=position)
        {
		
	        temp=a[i];
	        a[i]=a[position];
	        a[position]=temp;
    }
        
    }

    printf("\nSorted array in ascending order:");
	for(i = 0;i < n; i++)
		printf("\n %d",a[i]);
    
    
    return 0;
}
