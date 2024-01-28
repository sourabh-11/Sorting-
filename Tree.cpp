#include<iostream>
#include<queue>
using namespace std;

class node{
	public: 
	  int data;
	  node* left;
	  node* right;
	  
	  node( int d)
	  {
	     this->data = d;
	     this->left = NULL;
	     this->right = NULL;
	  }
};

node* Buildtree(node* root)
{
	cout<<"Enter data" <<endl;
	int data;
	cin>>data;
	root = new node( data);
	if(data==-1)
	{
		return NULL;
	}
	cout<<"Enter data for insert the left of"<<data<<endl;
	root->left = Buildtree(root->left);
	cout<<"Enter data for insert the right of"<<data<<endl;
	root->right  = Buildtree(root->right);
	return root;
	
	
}
void inorder(node* root)
{
	if(root==NULL)
	{
		return;
		
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void preorder(node* root)
{
	if(root==NULL)
	{
		return;
		
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
	
}

void postorder(node* root)
{
	if(root==NULL)
	{
		return;
		
	}


	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
	
}









void Levelordertravers(node* root)
{
	queue<node*> q;
	q.push(root);
	q.push(NULL);
	
	while(!q.empty())
	{
		node* temp  = q.front();
//	            	cout<<temp->data<<" ";
		q.pop();
		if(temp==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		cout<<temp->data<<" ";
		if(temp->left)
		{
			q.push(temp->left);
		}
		if(temp->right)
		{
			q.push(temp->right);
		}
	}
}
int main()
{
	
	node* root  =NULL;
	root = Buildtree(root);
	cout<<" inorder ";
	inorder(root);
	cout<<" preorder ";
	preorder(root);
	cout<<" postorder ";
	postorder(root);
//	Levelordertravers(root);
	return 0;
}
