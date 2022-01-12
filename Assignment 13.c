#include<stdio.h>
int main()
{
	int i, n,search,position=-1,first=0,last,a[100],middle;
	 printf("\nEnter number of elements: ");
    scanf("%d", &n);
    last=n-1;

    printf("\nEnter %d elements in ascending order: ",n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("\nEnter value to search: ");
    scanf("%d", &search);

    while (first <= last)
    {
	
    		middle=(first+last)/2;
    
        if (a[middle] == search)
        {
			 position = middle;
			 break;
       		 
       	}
         if (a[middle] > search)
         
        	last = middle-1;
        else
        	first=middle+1;
    }
         if (position!=-1)
       			 printf("\n Element  is present at INDEX %d \n " , position);
       	else
       			printf("\nElement  is at INDEX %d \n " , position);
       	return 0;
       }
           

        
