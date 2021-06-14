#include"../Node.h"
void pre(Node*head)
{
    if(head==NULL)
    {
        return;
    }
    cout<<head->value<<" ";
    pre(head->left);
    pre(head->right);
}
void test()
{
    Node*head=new Node(1);
    Node*h1=new Node(2);
    Node*h2=new Node(3);
    Node*h4=new Node(4);
    Node*h5=new Node(5);
    Node*h6=new Node(6);
    Node*h7=new Node(7);
    Node*h8=new Node(8);
    Node*h9=new Node(9);
    head->left=h1;
    head->right=h2;
    h2->left=h4;
    h2->right=h5;
    h1->left=h6;
    h1->right=h7;
    h7->left=h8;
    h4->right=NULL;
    pre(head);
    cout<<endl;
}
int main()
{
    test();
    return 0;
}