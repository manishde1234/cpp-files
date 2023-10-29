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
	Node* next;
	Node* prev;

	//constructor
	Node(int d){
		this -> data = d;
		this -> prev = NULL;
		this -> next = NULL;
	}
	//destructor
	~Node(){
		int value = this -> data;
		if (this ->next != NULL)
		{
			delete next;
			next = NULL;
		}
		cout << "memory deleted for "<< value << endl;
	}
};

void insertNode(Node* &tail, int element, int d){
	

	//empty list
	if (tail == NULL)
	{
		Node* newNode = new Node(d);
		tail = newNode;
		newNode ->next = newNode;
	}
	else{
		//assuming that the element is present in the list 
		//non-empty list
		Node
	}
}


int main(){
    ios_base::sync_with_stdio(false);  cin.tie(NULL);  
   

    return 0;
}

