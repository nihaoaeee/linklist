#include <iostream>

// #include "include/my_list.h"
#include "src/my_list.cc"

using namespace std;

int main(){


    my_list *list = new my_list;
    //cout<<list->phead->next->data<<endl;
    for (int i=0; i<5; i++){
        list->push_back(i+1);
    }
    //list->push_back(2);
    node *ptmp = list->phead->next;
    while(ptmp != list->pend){
        cout<<ptmp->data<<endl;
        ptmp = ptmp->next;
    }
    cout<<"*************************************************"<<endl;
    list->reverse();
    //cout<<"123"<<endl;
    node *ptmp1 = list->phead->next;
    //cout<<"::::"<<endl;
    while(ptmp1 != list->pend){
        //cout<<"endl"<<endl;
        cout<<ptmp1->data<<endl;
        ptmp1 = ptmp1->next;
    }
    return 0;
}