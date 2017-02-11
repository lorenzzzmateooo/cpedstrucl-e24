#include <iostream>
#include <deque>
#include <climits>
#include <vector>
using namespace std;

struct Tree{
	char data;
	Tree *left;
	Tree *right;  
	Tree *parent;  
};
struct Tree *newtreenode(int data) {
	Tree *node = new Tree;
	node->data = data;
	node->left = NULL;
	node->right = NULL;
	node->parent = NULL;
	return node;
}
struct Tree* inserttreenode(struct Tree *node, int data){
	static Tree *p;
	Tree *retnode;
	if(node == NULL){
	    retnode = newtreenode(data);
	    retnode->parent = p;
	    return retnode;
	}
	if(data <= node->data ){ 
	    p = node;
	    node->left = inserttreenode(node->left,data);
	} 
	else{
	    p = node;
	    node->right = inserttreenode(node->right,data);
	} 
	return node;
}
void printtreeinorder(struct Tree *node){
	if(node == NULL) return;
	printtreeinorder(node->left);
	cout << node->data << " ";
	printtreeinorder(node->right);
}
void printtreepostorder(struct Tree *node){
	if(node == NULL) return;
	printtreepostorder(node->left);
	printtreepostorder(node->right);
	cout << node->data << " ";
}
int main(int argc, char **argv){
	char charArr[9] 
	= {'A','B','C','D','E','F','G','H','I'};
	Tree *root = newtreenode('F');
	inserttreenode(root,'B');
	inserttreenode(root,'A');
	inserttreenode(root,'D');
	inserttreenode(root,'C');  
	inserttreenode(root,'E');
	inserttreenode(root,'G');
	inserttreenode(root,'I');
	inserttreenode(root,'H');

	cout<<"Inorder= ";
	printtreeinorder(root);
	cout<<"\nPostorder= ";
	printtreepostorder(root);
	return 0;
}
