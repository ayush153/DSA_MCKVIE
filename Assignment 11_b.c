#include<stdio.h>
int main()
{
    int temp,i,j,n,a[100];
    printf("\n Enter number of elements in the array:");
    scanf("%d",&n);
    printf("\n Enter the elements:");
    for(i=0;i<n;i++) 
    {
		 scanf("%d",&a[i]);
	}
	printf("\nThe unsorted array elements are:");
   for(i = 0;i < n; i++)
    {
    	printf("\n %d",a[i]);
	 }
    for(i=1;i<n;i++)
	 {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
		  {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("\nSorted array in ascending order:");
	 for(i = 0;i < n; i++)
		printf("\n %d",a[i]);
    
	 
    return 0;
}
