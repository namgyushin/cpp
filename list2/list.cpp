#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cassert>
#include "list.h"

static Node *createNode(int data, Node *next)
{
	//Node * p = (Node *)malloc(sizeof(Node));
	Node * p = new Node();
	assert(p /*!= NULL*/);
	p->data = data;
	p->next = next;
	
	return p;
}

List::List()
{
	//this->ptr = malloc(sizeof(Node));		//dummy.
	//this->ptr->data = ???;
	//this->ptr->next = NULL;
	this->ptr = createNode(-1, NULL);
}

List::~List()
{
	Node *p = this->ptr;
	while (p )
	{
		Node *tmp = p;
		p = p->next;
		free(tmp);
	}
}

void List::insertFirstNode(int data)
{
	//Node *p = malloc(sizeof(Node));
	//p->data = data;
	//p->next = this->ptr->next;
	//this->ptr->next = p;
	this->ptr->next = createNode(data, this->ptr->next);
}

void List::insertNode(int prevData, int data)
{
	Node *ptr = this->ptr->next;
	while (ptr )
	{
		if(ptr->data == prevData)
		{
			break;
		}
		ptr = ptr->next;
	}
	if(ptr )
	{
		//found!
		//Node *p = malloc(sizeof(Node));
		//p->data = data;
		//p->next = ptr->next;
		//ptr->next = p;
		ptr->next = createNode(data, ptr->next);
	}
}

void List::deleteNode(int data)
{
	Node *ptr1 = this->ptr->next;
	Node *ptr2 = this->ptr;
	
	while (ptr1 )
	{
		if (ptr1->data == data)
		{
			break;
		}
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	if (ptr1 )
	{
		ptr2->next = ptr1->next;
		//free(ptr1);
		delete [] ptr1;
	}
}

void List::print()
{
	Node *p = this->ptr->next;
	std::cout <<"[";
	while (p)
	{
		std::cout << (p->data);
		//if (p->next /*!= NULL*/)
		//{
		//	printf(", ");
		//}
		//else
		//{
		//	printf("]\n");
		//}
		std::cout << ((p->next) ? ", " : "]\n");
		
		p = p->next;
	}
}


