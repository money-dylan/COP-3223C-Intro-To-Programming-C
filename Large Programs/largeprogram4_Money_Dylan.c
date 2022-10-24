#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node_s{
	
	struct node_s * nextptr;
	int data;
	
}node_t;

int isEmpty(node_t * head);
node_t * insert(node_t * head); //inserts in the back of the linked list
node_t * insertPos(node_t * head, int pos); //inserts in the middle of the linked list
node_t * createNode();
node_t * removeNode(node_t * head, int pos);
void display(node_t * head);
int search(node_t * head, int data);

int main()
{
	node_t *head = NULL;
	
	
	
	head = insert(head); //0
	head = insert(head); //1
	head = insert(head); //2
	head = insert(head); //3
	head = insert(head); //4
	
	
	display(head);
	
	printf("Testing the Search Function...\n");
	printf("Checking to see if the node with data 4 exists...\n");
	
	if(search(head, 4))
		printf("Woohoo! I found the node with the matching data!!!\n");
	else
		printf("Oh no!!! I didn't find what you were looking for :(\n");
	
	printf("Now lets see if -4 exists!\n");
	if(search(head, -4))
		printf("Woohoo! I found the node with the matching data!!!\n");
	else
		printf("Oh no!!! I didn't find what you were looking for :(\n");


	
	return 0;	
}

int isEmpty(node_t * head)
{
	return (head == NULL);
}

node_t * insert(node_t * head)
{
	//scenario 1 when linked list is empty
	if(isEmpty(head))
	{
		printf("Linked List is empty.., Need to insert a new head..\n");
		return createNode();
	}
	
	node_t * temp = head;
	
	//traverse to the end of the linked list
	while(temp->nextptr != NULL)
	{
		temp = temp->nextptr;
	}
	
	temp->nextptr = createNode();
	
	return head;
	
	
}

node_t * createNode()
{
	node_t * temp = (node_t *) malloc(sizeof(node_t));
	
	printf("Enter a number: ");
	scanf("%d", &temp->data);
	
	temp->nextptr = NULL;
	
	return temp;
}

void display(node_t * head)
{
	while(head != NULL)
	{
		printf("----------------------\n");
		printf("Address %p\n", head);
		printf("Data %d\n", head->data);
		printf("Next Pointer %p\n", head->nextptr);
		printf("----------------------\n");
		
		head = head->nextptr;
	}
}

node_t * insertPos(node_t * head, int pos)
{
	if(pos == 0) //insert into the front of the linked list
	{
		if(isEmpty(head))
		{
			return createNode();
		}
		else
		{
			node_t * temp = createNode();
			temp->nextptr = head;
			return temp;
			
		}
	}
	else
	{
		node_t * temp = createNode();
		
		node_t * temp2 = head;
		
		int x = 1;
		
		while(x < pos)
		{
			temp2 = temp2->nextptr;
			++x;
		}
		
		temp->nextptr = temp2->nextptr;
		
		temp2->nextptr = temp;
		
		return head;
		
	}
	
}

node_t * removeNode(node_t * head, int pos)
{
	if(pos == 0)
	{
		node_t * temp = head;
		head = head->nextptr;
		
		free(temp);
		
		return head;
	}
	
	node_t * temp = head;
	
	int x = 0;
	
	while(x != pos - 1)
	{
		temp = temp->nextptr;
		++x;
	}
	
	//temp->nextptr = temp->nextptr->nextptr;
	
	node_t * temp2 = temp->nextptr;
	
	temp->nextptr = temp2->nextptr;
	
	free(temp2);
	
	return head;
}

int search(node_t * head, int data)
{
	node_t * temp = head;
	
	while(temp != NULL)
	{
		if(temp->data == data)
			return 1;
		
		temp = temp->nextptr;
	}
	
	return 0;
}