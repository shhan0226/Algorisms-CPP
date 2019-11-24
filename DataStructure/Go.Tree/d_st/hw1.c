#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "memory.h"

int count, dep;
/*
typedef struct
{
  int number;
  char word[1024];
}element;
*/
int num_int(char *pt)
{
  int in2;
  char mi[100];
  memset(mi, 0, sizeof(mi));
  int re;
  for(in2 = 0; in2<7;in2++)
  {
    mi[in2]=pt[in2];
  }
  re = atoi(mi);
  memset(mi, 0, sizeof(mi));
  return re;
}

int num_cheak(char *pt)
{
  int in;
  for(in =0; in<7; in++)
  {
   if(!(pt[in]>='0'&&pt[in]<='9')) return 0;
   else return 1;
  } 
}
/*
typedef struct treeNode
{
   element key;
   struct treeNode *left;
   struct treeNode *right;
}treeNode;

treeNode* insertkey(treeNode *p, element key)
{
   treeNode* newNode;
   int com;
   if(p == NULL)
   {
     newNode = (treeNode*)malloc(sizeof(treeNode));
     newNode->key = key;
     newNode->left = NULL;
     newNode->right = NULL;
     return newNode;
   }
   else
   {
     if(key.number < p->key.number)
     {
      p->left = insertkey(p->left, key);
     }
     else if(key.number > p->key.number)
     {
      p->right = insertkey(p->right, key);
     }
     else printf("\n 이미 같은 숫자가 있다!!\n");
     return p;
   }
}


void insert(treeNode** root, element key)
{
   *root = insertkey(*root, key);
}

treeNode* search(treeNode* root, element key)
{
   treeNode* p;
   int com;
   p=root;
   
   while(p!=NULL)
   {
     if(key.number < p->key.number)
     {
        p = p->left;
        dep++;
     }
     else if(key.number > p->key.number)
     {
        p = p->right;
        dep++;
     }
     else
     {
        printf("\n %d :찾음", p->key.number);
        dep++;
        return p;
     }
   }
   return p;
}
 
void node_count(treeNode* root)
{
  if(root)
  {
    node_count(root->left);
    count++;
    node_count(root->right);
  }
}

*/
void main()
{
   element e;
   treeNode *root=NULL, *temp=NULL;

   FILE *fp = NULL;
   char Buffer[1024], ch_re[100];
   int i=0, in_re;
   char *pt;
   pt = Buffer;
   
   
   //char mm[100];
   //printf("file input\n");
   //scanf("%s",mm); 
   
   fp = fopen("GO.Tree.txt", "r");
   if(fp == NULL) return;
    
   while( fgets(Buffer, sizeof(Buffer), fp))
   {   
     pt = Buffer;
     printf("%s", pt);
     while(1)
     {
       if(num_cheak(pt)==1)
       {
         in_re = num_int(pt);
         printf("number : %d\n", in_re);
         pt += 8;
       }
       else
       {
         memset(ch_re,0,sizeof(ch_re));
         for(i=0; *pt != '\0'; i++)
         {
            ch_re[i] = *(pt++);
         }
         ch_re[i]='\0';
         printf("\n%s",ch_re);
         break;
         
       }
     } 
    rintf("번호는 %d, 문자는 %s",in_re,ch_re);
    e.number = in_re;
    strcpy(e.word,ch_re);
    insert(&root, e);
   }
   fclose(fp);
   
       char u;
   do{
       char num_char[1024] = {0};
       printf("\n\n----------start------------------------------------");
       printf("\n숫자로 문자 및 깊이 찾기[1번]");
       printf("\n전체노드개수[2번]");
       printf("\n종료[3번]");
       printf("\n[1]~[3]번 선택:");
   
       u = getchar(); getchar();
      switch(u-'0')
      {
        case 1:
              memset(num_char,0,sizeof(num_char));
              printf("찾을 숫자를 입력 : "); 
              dep = 0;
              gets(num_char); 
              e.number = atoi(num_char);
              temp = search(root,e);
              if(temp != NULL)
              {
                 printf("\n깊이는 %d, 문자는: %s",dep,temp->key.word);
              }
              else printf("\n숫자없음");
              break;
    
       case 2:
              memset(num_char,0,sizeof(num_char));
              count = 0;
              node_count(root);
              printf("전체노드개수는? %d",count);
              break;     
      }
   }while((u-'0')!= 3);
   printf("엔터한번더!");
   getchar();
   printf("end");
  
}
