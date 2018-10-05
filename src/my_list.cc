
#include "../include/my_list.h"

my_list::my_list(){
    cout<<"    "<<endl;
    phead = new node;
    pend  = new node;
    phead->next = pend;
}


void my_list::push_back(int num){
    node *p = new node;
    p->data = num;
    node *ptmp;
    if(phead->next == pend){
        phead->next = p;
        p->next = pend;
        return ;
    } else {
        ptmp = phead;
    }
    while(ptmp != pend){
        if(ptmp->next == pend){
            ptmp->next = p;
            p->next = pend;
            ptmp = p;
        }
        ptmp = ptmp->next;
    }
}

node * my_list::reverse(){
    node *p,*q,*pr;
    p = phead->next;
    q = NULL;
    phead->next = NULL;
    while(p!=pend){
        pr = p->next;
        p->next = q;
        q = p;
        p = pr;
    }
    phead->next = q;
    while(q!=NULL){
        if(q->next == NULL)
        {
            q->next = pend;
            break;
        }
        q = q->next;
    }
    return phead;


}