#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *start=NULL;
struct node *new_node,*temp;
char ch='y';
void ins_end()
{
		new_node=(struct node*)calloc(1,sizeof(struct node));
	    printf("\n Enter the value of new node :");
	    scanf("%d",&new_node->data);
	    new_node->next=NULL;
		if(start==NULL)
			start=new_node;
		else
		{
		temp=start;
		while(temp->next!=NULL)
				temp=temp->next;
		temp->next=new_node;
		}
}
void createList()
{
	char ch ='y';
	while (ch=='y'||ch=='Y')
	{
		ins_end();
		printf("Do you want to insert another node: ");
		scanf(" %c",&ch);
	}
}
void ins_beg()
{
		new_node=(struct node*)malloc(1*sizeof(struct node));
	    printf("\n Enter the value of new node(data):");
	    scanf("%d",&new_node->data);
	    new_node->next=start;
	    start=new_node;
}
void dis()
{
	temp=start;
	while(temp!=NULL)
	{
		printf("%d----->",(*temp).data);
		temp=temp->next;
	}
	printf("NULL");	
}
int main()
{
	int choice;
	char ch='y';
	while(1)
	{
		printf("\n  1-Creation");
        printf("\n  2-Insertion of node at the beginning");
	    printf("\n  3-Insertion of node at the end");
	    printf("\n  4-Displaying of node");
	    printf("\n  5-Exit");
	    printf("\n Enter your choice:");
	    scanf("%d",&choice);
	    switch(choice)
	    {
	    	case 1:
				createList();
				break;
			case 2:
	    		ins_beg();
	    		break;
	    	case 3:
	    		ins_end();
	    		break;
	    	case 4:
	    		dis();
	    		break;
	    	case 5:
	    		exit(1);
		}
    }
	return 0;
}
