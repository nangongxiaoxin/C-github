#include<iostream>
using namespace std;
class Node
{
public:
    int value;
    Node*left;
    Node*right;
    Node(int v)
    {
        value=v;
        left=NULL;
        right=NULL;
    }
};