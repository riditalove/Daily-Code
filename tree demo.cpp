#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node* right;
    node* left;

    node(int d)
    {
        data = d;
        right=NULL;
        left=NULL;
    }
};




node* buildTree(node* &root)
{
    int data;
    //cout<<"ENTER THE DATA YOU WANT"<<endl;
    cin>>data;

    if(data==-1)
    {
        return NULL;
    }
    else
    {
        node* root = new node(data);
        //cout<<"ENTERING THE DATA FOR THE LEFT OF "<<data<<endl;
        root->left = buildTree(root->left);
        //cout<<"ENTERING THE DATA FOR THE RIGHT OF "<<data<<endl;
        root->right = buildTree(root->right);


        return root;
    }

}

void print(node* root)
{
    queue<node*>q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        node* temp = q.front();
        cout<<temp->data<<endl;
        q.pop();
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

int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return 1 + max(height(root->left),height(root->right));
    }

}


bool isBalanced(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        int lh = height(root->left);
        int rh = height(root->right);
        if(abs(lh-rh)>=1)
        {
            return false;
        }

    }
    return true;

}

int main()
{
    node* root = NULL;
    root = buildTree(root);
    print(root);
    //cout<<height(root)<<endl;
    cout<<isBalanced(root)<<endl;



}

//4 2 1 -1 -1 3 -1 -1 7 6 -1 -1 -1
//4 2 1 -1 -1 3 -1 -1 7 6 -1 -1 9 -1 -1
//7 6 -1 -1 9 -1 -1
//3 4 1 -1 -1 2 -1 -1 5 -1 -1
//4 1 -1 -1 2 -1 -1
//3 4 1 7 -1 -1 9 -1 -1 2 -1 -1 5 -1 -1