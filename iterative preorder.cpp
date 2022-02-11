vector<int> pre(Node* root)
{
	vector<int>v;
	stack<Node>st;
	if(root==NULL)
	{
		return v;
	}
	st.push(root);
	while(st!=empty)
	{
		root=st.top;
		st.pop();
		v.push_back(root);
		if(root->right!=NULL)
		{
			st.push(root->right);
		}
		if(root->left!=NULL)
		{
			st.push(root->left);
	}	
	}
		return v;
	}
