#include<iostream>
using namespace std;
typedef struct LinkNode{
	int data;
	struct LinkNode *next;	
}LinkNode,LinkList;

int initLinkList(LinkList **L)
{
	*L = new LinkNode;
	(*L)->next = NULL;
	if ( *L == NULL)
	return 1;	
	return 0;
}
void createLink(LinkList **L)
{
	int ival;
	LinkNode *begin = (*L);
	while(cin>>ival)
	{
		LinkNode *currNode=new LinkNode;
		if(currNode == NULL)
			return ;
		currNode->data=ival;
		currNode->next=NULL;
		begin->next=currNode;
		begin=currNode;

	}
	
}
void display(LinkList *L)
{
	LinkList *pos = L->next;
	while(pos != NULL)
	{
		cout<< pos->data<<endl;
		pos=pos->next;
	}
}
int main()
{
	LinkList *L;
	initLinkList(&L);
	createLink(&L);
	cout <<"*******************************\n";
		display(L);
	cout<<"*****************************\n";
	return 0;
}

