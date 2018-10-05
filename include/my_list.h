#include <iostream>
using namespace std;
struct node{
    node *next;
    int data;
    node():next(NULL),data(0){

    }
};

struct my_list{
    //node *next;
    node* phead;
    node *pend;
    my_list();
    void push_back(int num);
    node * reverse();
    
};