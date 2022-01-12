#include <stdio.h>

int main()
{
    int n,i,position=-1,search,a[100];
    printf("Enter number of elememts in the array: ");
    scanf("%d",&n);

    
    printf("\nEnter integer values\n");
    for(i=0;i<n;i++)
    {
		 scanf("%d",&a[i]);
	}

    printf("\nEnter the elememt to search: ");
    scanf("%d",&search);

    for(i=0;i<n;i++)
	{
        if(a[i]==search)
		{
            position=i;
            break;
        }
        
    }

    if(position!=-1)
		 printf("\n  Element is at position %d ",position);
    else
		 printf("\n Element is at position %d",position);

    return 0;
}

