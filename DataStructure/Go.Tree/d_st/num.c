#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "memory.h"

int dep=0;
typedef struct node
{
	int number;
	int count;
}Node;

typedef struct listnode
{
	Node key;
	struct listnode *next;
}ListNode;

ListNode* insertkey(ListNode *p, Node key)
{
	ListNode *newList;
	if(p == NULL)
	{
		key.count = 1;
		newList = (ListNode*)malloc(sizeof(ListNode));
		newList->key = key;
		newList->next = NULL;
		return newList;
	}
	else
	{
		if(key.number == p->key.number) 
		{
			printf("이미 같은수 있음");
			p->key.count += 1;
		}
		else
		{
			p->next = insertkey(p->next, key);
		}
	return p;
	}

}

void insert(ListNode** root, Node key)
{
	*root = insertkey(*root, key);
}

ListNode* search(ListNode* root, Node key)
{
	ListNode* p;
	p = root;

	while(p!=NULL)
	{
		if(key.number == p->key.number){
			printf("\n %d찾음", p->key.number);
			dep++;
			return p;
		}
		else{
			p = p->next;
			dep++;
		}
	}
	return p;
}

int number_check(char *pt)
{
	int i;
	for(i=0; i<7;i++)
	{
		if(!(pt[i]>='0'&&pt[i]<='9')) return 0;
		else return 1;
	}
}
void main()
{
  Node e;
  ListNode *root=NULL, *temp=NULL;

   FILE *fp = NULL;
   char Buffer[1024], ch_re[100];
   char *pt, *str;
   int number;

   fp = fopen("GO.Tree.txt", "r");
   if(fp == NULL) return;
   pt= Buffer;

   while(fgets(Buffer, sizeof(Buffer), fp))
   {	
   	printf("\n%s", pt);

   	str = strtok(pt, "\t");
   	printf ( "\n%s", str);
   	number = atoi(str);
   	e.number = number;
   	insert(&root, e);

   	while(str = strtok(NULL, "\t"))
   	{	
   		if(number_check(str)==1)
		{
   			printf("\n%s", str);
	   		number = atoi(str);
   			e.number = number;
	   		insert(&root, e);
		}	
   	}
   }
   fclose(fp);
   
   ////////////////////////////////////////////////////
   
   
   char num[512]={0};
   printf("찾을 순자를 입력 : ");
   gets(num);
   e.number = atoi(num);
   
   printf("==>%d\n\n",e.number);
   
   temp = search(root, e);
   if(temp != NULL){
   	printf("\n %d개 있음", temp->key.count);
   }
   else{
   	printf("\n없음");
   }


}
