struct Node{
	int data;
	 struct Node *left, *right;
};
Node* newnode(int data){
	Node* root=new Node;
	root->data=data;
	root->left=NULL;
	root->right=NULL;
	return root;
}
int main()
{
	struct Node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=nenwode(4);
	root->left->right=newnode(5);
	root->right->left=newnode(6);
	root->right->right=newnode(7);
}
