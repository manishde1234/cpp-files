#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';
	
class Node
{
public:
	int data;
	Node* next;

	//constructor
Node(int data){
	this -> data = data;
	this -> next = NULL;
}	
//destructor
~Node(){
	int value = this -> data;
	//memory free
	if (this -> next != NULL)
	{
		delete next;
		this -> next = NULL;

	}
	cout << "memory is free for data " << value << endl;
}
};
void InsertAtHead(Node* &head,int d){
	//new node
	Node* temp = new Node(d);
	temp -> next = head;
	head = temp;
}

void InsertAtTail(Node* &tail,int d){
	Node* temp = new Node(d);
	tail -> next = temp;
	tail = temp;
}

void InsertAtPosition(Node* &tail, Node* &head,int position, int d){
	Node* temp = head;
	int cnt = 1;

	if (position == 1)
	{
		InsertAtHead(head,d);
		return;
	}
	//inserting at last position
	if (temp ->next == NULL)
	{
		InsertAtTail(tail,d);
		return;
	}

	while(cnt < position-1){
		temp = temp->next;
		cnt ++;
		//create new node for d 
		Node* nodeToInsert = new Node(d);
		nodeToInsert ->next = temp ->next;
		temp -> next = nodeToInsert;
	}

}


void print(Node* &head){
	Node* temp = head;
	while(temp!= NULL){
		cout << temp-> data << " ";
		temp = temp->next;
	}
	cout << endl;
}

void deleteNode(int position , Node* &head){
	if (position == 1)
	{
		// delete first node
		Node* temp = head;
		head = head-> next;

		temp-> next = NULL;
		//memory free
		delete temp;
	}

	else{
		//delete any other node
		Node* curr = head;
		Node* prev = NULL;

		int cnt = 1;
		while(cnt < position){
			prev = curr;
			curr = curr -> next;
			cnt ++;
		}
		prev ->next = curr-> next;
		curr-> next = NULL;
		delete curr;

	}
}

int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
  Node* node1 = new Node(10);
  // cout << node1-> data << endl;
  // cout << node1->next << endl;

  //pointing head

  Node* head = node1;
  Node* tail = node1;
  print(head);

  // InsertAtHead(head,12);
  // print(head);

  InsertAtTail(tail,12);
  print(head);

  

  InsertAtTail(tail,15);
  print(head);

  InsertAtPosition(tail,head,1,22);
  print (head);

  cout<< "head" << head-> data << endl;
  cout<< "tail" << tail-> data << endl;

  deleteNode(1,head);
  print(head);



    return 0;
}

