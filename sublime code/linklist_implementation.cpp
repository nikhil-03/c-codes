#include <bits/stdc++.h> 
using namespace std; 
#define pb push_back 
#define ll long long int
struct Node
{
  int data;
  struct Node* next;
   Node(int x) { data=x; next=NULL; }
};
struct Node* head;


void print(Node *root)
{
  while(root!=NULL)
  {
    cout<<root->data<<" ";
    root=root->next;
  }
}

int funquery(int k,Node *root)
{
  while(root!=NULL and k>1)
  {
    root=root->next; k--;
  }
  return root->data;
}

int main()
{
    int n,i,x;
   // head=NULL;
   cin>>n;
   cin>>x;
   Node *head=new Node(x);
   Node *tail=head;
   for(i=0;i<n-1;i++)
   {
     cin>>x;
     tail->next=new Node(x);
     tail=tail->next;
    }
    print(head);
   cout<<endl;
   
   int query;
   cin>>query;
   cout<<funquery(query,head);
}