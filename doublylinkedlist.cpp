#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

class Node{
public:
	int data;
	Node* prev;
	Node* next;

	//constructor
	Node(int data){
		this -> data = data;
		this -> prev = NULL;
		this -> next = NULL;
	}
	~Node(){
		int val = this->data;
		if(next != NULL){
			delete next;
			next = NULL;
		}
		cout<<"node deleted with data " << val << endl;
	}
};
//traverse of linked list
void print(Node* head){
	Node* temp = head;

	while(temp != NULL){
		cout << temp ->data << " ";
		temp = temp ->next;
	}
	cout << endl;
}
//length of linked list
int getLength(Node* head){
	int len = 0;
Node* temp = head;
	while(temp != NULL){
		len++;
		temp = temp ->next;
	}
	return len;
}
void insertAtHead(Node* &tail, Node* &head,int d){
	//empty list
	if (head == NULL)
	{
		Node* temp = new Node(d);
		head = temp;
		tail = temp;
	}
	else{
		Node* temp = new Node(d);
		temp -> next = head;
		head -> prev = temp;
		head = temp;
	}
	
}
void insertAtTail(Node* &tail,Node* &head,int d){
	if (tail == NULL)
	{
		Node* temp = new Node(d);
		tail = temp;
		head = temp;
	}
	else{
		Node* temp = new Node(d);
		tail -> next = temp;
		temp -> prev = tail;
		tail = temp;
	}
	
}
void InsertAtPosition(Node* &tail, Node* &head,int position, int d){
	Node* temp = head;
	int cnt = 1;

	if (position == 1)
	{
		insertAtHead(tail,head,d);
		return;
	}
	//inserting at last position
	if (temp ->next == NULL)
	{
		insertAtTail(tail,head,d);
		return;
	}

	while(cnt < position-1){
		temp = temp->next;
		cnt ++;
	}
		//create new node for d 
		Node* nodeToInsert = new Node(d);
		nodeToInsert ->next = temp ->next;
		temp -> next ->prev = nodeToInsert;
		temp ->next = nodeToInsert;
		nodeToInsert -> prev = temp;
	

}

void deleteNode(int position , Node* &head){
	if (position == 1)
	{
		// delete first node
		Node* temp = head;
		temp ->next ->prev = NULL;
		head = temp ->next;
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
		
		curr-> prev = NULL;
		prev -> next = curr -> next;
		curr ->next = NULL;
		delete curr;

	}
}


int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  

    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(tail,head,11);
    print(head);
    insertAtTail(tail,head,24);
    print(head);
    InsertAtPosition(tail,head,2,100);
    print(head);
    cout << getLength(head) << endl;

  

    return 0;
}

