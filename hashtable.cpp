#include<iostream>
using namespace std;
typedef struct LinkNode{
	int data;
	struct LinkNode *next;
}LinkNode,*LinkList;

void inithashtab(LinkList *table,int size)
{
	for ( int i = 0 ; i < size ; i++)
	table[i]=new LinkNode;

}
void insertkey(LinkList *table,int number)
{

	int hashkey;
	hashkey=number%10;
	LinkNode *curr=table[hashkey];
	while(curr->next != NULL)
	{
		curr=curr->next;
	}
	LinkNode *newNode=new LinkNode;
	newNode->data=number;
	newNode->next=NULL;
	curr->next=newNode;
}

int main()
{
	LinkList *table = new LinkList[10];
	inithashtab(table,10);
	insertkey(table,20);
	return 0;
}
