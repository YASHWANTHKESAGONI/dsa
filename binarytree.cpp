#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
using namespace std;
class node{
public:
   int data;
   node* left;
   node* right;
   node(int d){
   	data=d;
   	left=NULL;
   	right=NULL;
   }
};
node* bst(node* root){
         int data;
         cout<<"ENTER THE DATA"<<"\n";
         cin>>data;
         if(data==-1) return NULL;
         root =new node(data);
         cout<<"ENTER THE DATA FOR  LEFT PART"<<data<<endl;
         root->left=bst(root->left);
         cout<<"ENTER THE DATA FOR RIGHT PART"<<data<<endl;
         root->right=bst(root->right);
         return root;
}
void display(node* root){
	if(root==NULL) return;
	cout<<root->data<<"\n";
    display(root->left);
    display(root->right);
}
int main(){
	node* root=NULL;
    root=bst(root);
    display(root);
	return 0;
}