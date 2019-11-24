#include<iostream>
#include<cstring>

using namespace std;

typedef struct Node{
	string Name;
	struct Node* NextNode;
}Node;

Node* CreateNode( string name ){

	Node* NewNode = new Node;

	NewNode->Name = name;
	NewNode->NextNode = NULL;

	return NewNode;
}

void DestroyNode(Node* Node){
	delete Node;
}

void AppendNode(Node** Head, Node* NewNode){

	if( (*Head) == NULL ){
		*Head = NewNode;
	}
	else{
		Node* Tail = (*Head);
		while( Tail->NextNode != NULL ){
			Tail = Tail->NextNode;
		}

		Tail->NextNode = NewNode;
	}
}

Node* GetNode(Node* LIST, int location){

	Node* TheNode = LIST;

	while( TheNode != NULL && (--location) >=0){//start 0
		TheNode = TheNode->NextNode;
	}

	return TheNode;
}

void RemoveNode(Node** Head, Node* ReNode){

	if(*Head == ReNode){
		*Head = ReNode->NextNode;
	}
	else{
		Node* TheNode = *Head;
		while( TheNode !=NULL && TheNode->NextNode != ReNode){
			TheNode = TheNode->NextNode;
		}

		if( TheNode != NULL)
		{
			TheNode->NextNode = ReNode->NextNode;
		}
	}
}

void Print(Node* Head){
	
	Node* TheNode = Head;
	
	while(TheNode != NULL)
	{
		cout<<TheNode->Name<<" "; 
		TheNode = TheNode->NextNode;
	}
	cout<<endl;
}


int main(void){

	Node* LIST = NULL;
	Node* NewNode = NULL;

	NewNode = CreateNode("han");
	AppendNode( &LIST, NewNode);
	cout<<"current: ";
	Print(LIST);

	NewNode = CreateNode("seok");
	AppendNode( &LIST, NewNode);
	cout<<"current: ";
	Print(LIST);
	
	NewNode = CreateNode("!!!!!");
	AppendNode( &LIST, NewNode);
	cout<<"current: ";
	Print(LIST);

	Node* myNode = NULL;
	myNode = GetNode(LIST, 1);
	RemoveNode(&LIST, myNode);
	DestroyNode(myNode);
	cout<<"current: ";
	Print(LIST);
	
	
	cout<<GetNode(LIST,0)->Name;
	return 0;
}
