#include<iostream>
using namespace std;

int value;
struct node
{
	int data;
	struct node * next;
};

struct node *head,*ptr,*tmp,*tmp1;

void insert_end(int value)
{
	ptr=new node();
	ptr->data=value;
	if(head==NULL)
	{
		ptr->next=head;
		head=ptr;
	}
	else
	{
		tmp=head;
		while(tmp->next!=NULL)
		{
			tmp=tmp->next;
		}
		tmp->next=ptr;
		ptr->next=NULL;
	}
	cout<<"Insert successfully.. \n";
}

void delete_end()
{
	tmp=head;
	tmp1=tmp->next;
	
	while(tmp1->next!=NULL)
	{
		tmp1=tmp1->next;
		tmp=tmp->next;
	}
	tmp->next=NULL;
	free(tmp1);
	cout<<"\nDeletion Done Successfully.. \n";
}



void display()
{
	tmp=head;
	while(tmp!=NULL)
	{
		cout<<tmp->data;
		tmp=tmp->next;
	}
}

int main()
{
	int ch;
	while(1)
	{
		cout<<"\n---QUEUE OPERATOR---\n";
		cout<<"\n1.Enqueue \n2.Dequeue \n3.Display \n0.Exit";
		cout<<"\nEnter your choice = ";
		cin>>ch;
		if(ch==1)
		{
			cout<<"Enter number = ";
			cin>>value;
			
			insert_end(value);
		}
		else if(ch==2)
		{
			delete_end ();
		}
		else if(ch==3)
		{
			display();
		}
		else if(ch==0)
		{
			cout<<"Exit program !!";
			break;
		}
		else 
		{
			cout<<"Invalid number !!";
		}
	}
}