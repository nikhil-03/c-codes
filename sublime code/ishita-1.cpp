#include <bits/stdc++.h> 
using namespace std; 
struct Node
{
  int data;
  struct Node* next;
   Node(int x) { data=x; next=NULL; }
};
struct Node* head;

int funlen(Node *root)
{
  int x=0;
  while(root){ root=root->next; x++; }
  return x;
}

void print(Node *root)
{
  while(root!=NULL)
  {
    printf("%d", root->data);
    printf(" ");
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
   printf("input n and digits \n");
    scanf("%d",&n);
    scanf("%d",&x);
   
   Node *head=new Node(x);
   Node *tail=head;
   for(i=0;i<n-1;i++)
   {
     scanf("%d",&x);
     tail->next=new Node(x);
     tail=tail->next;
    }
    print(head);
     printf("\n");
    int l= funlen(head);
    printf(" No of digits are :");
    printf("%d \n",l);
}
// printf("%s", st)