#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define sz(s) (int)(s).size()

using ll = long long;
const char nl ='\n';

class trieNode{
public:
	char data;
	trieNode* children[26];//because 26 alphabets 
	bool isterminal;

	//constructor
	trieNode(char ch){
		data = ch
;		for(int i = 0; i < 26; i++){
			children[i] = NULL;
		}
		isterminal = false;
	}
};

class Trie{
public:
	trieNode* root;
	Trie(){
		root = new trieNode('\0');//null character
	}

	void insertUtil(trieNode* root, string word){

		//base case for recursion
		if (word.length() == 0)
		{
		   //all elements inserted
			root -> isterminal = true;
			return;
		}

		//asuming all letters are caps
		int index = word[0] - 'A';
		trieNode* child;

		//present
		if (root->children[index] != NULL)
		{
			//means element already inserted
			child = root -> children[index];
		}

		//not present
		else{
			child = new trieNode(word[0]);//create new node with 1st index of word
			root ->children[index] = child;//point child to the last element

		}
		//recursion
		insertUtil(child,word.substr(1));

	}
	void insertWord(string word){
		insertUtil(root,word);
	}

	bool searchUtil(trieNode* root, string word){
		//base case
		if (word.length() == 0)
		{
			//if true then word found else not
			return root -> isterminal;
		}

		int index = word[0] - 'A';
		trieNode* child;

		//present
		if (root -> children[index] != NULL)
		{
			child = root -> children[index];
		}
		else{
			//absent 
			return false; //in case of search 
		}
		//recursion 
		return searchUtil(child,word.substr(1));
	}

	bool searchWord(string word){
		return searchUtil(root,word);
	}
};

int main(){
    Trie* t = new Trie();
    t ->insertWord("abcd");
    cout << "Present or not " << t -> searchWord("abcdd") << endl;

    return 0;
}

