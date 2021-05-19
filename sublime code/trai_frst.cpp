#include<bits/stdc++.h>
using namespace std;


struct trai
{
	struct trai *dict[26];
	bool isend;
};


struct trai *getnode()
{
	struct  trai *pnode=new trai;
	pnode->isend=false;

	for(int i=0;i<26;i++)
	{
		pnode->dict[i]=NULL;
	}
	return pnode;
}

struct trai *root=getnode();

void insert(string s)
{
	struct trai *curr=root;
   for(int c : s)
   {
      if(curr->dict[c-'a']=NULL)
      {
      	 curr->dict[c-'a']=getnode();
      }
      curr=curr->dict[c-'a'];
   }
   curr->isend=true;
}
bool search(string s)
{
	struct trai *curr=root;
	for(char c : s)
	{
		if(curr->dict[c-'a']==NULL){return false;}
		curr=curr->dict[c-'a'];
	}
	if(curr->isend==true){return true;}
	return false;
}

int main()
{ 
	string s1,s2;
	cin>>s1>>s2;
    insert(s1);  
    cout<<search(s2); 
}