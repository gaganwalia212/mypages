#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node*next;
};
int main()
{
    int arr[]={1,2,3,4,5,6};
    Node*first;
    first=new Node;
    first->data=arr[0];
    first->next=0;
    Node*p=first;
    for(int i=1;i<6;i++)
    {
        Node*t=new Node;
        t->data=arr[i];
        p->next=t;
        p=t;
        p->next=NULL;
    }
   // p->next=first->next->next;
    int x;
    Node*q{first},*r{first};
    do
    {
        r=r->next;
        q=q->next;
        q=(q)?q->next:NULL;

    }
    while(r&&q&&r!=q);
    if(r!=q)
    cout<<"\nLinear list\n";
    else cout<<"Loop Exists\n";



    return 0;
}
