#include <iostream>
#include "solution.h"
using namespace std;

int main(){

    DoubleNode* m = new DoubleNode(1);
    m->next = new DoubleNode(2);
    m->next->prev = m;
    m->next->next = new DoubleNode(3);
    m->next->next->prev = m->next;

    DoubleNode* end = m->next->next;

    doubleMirror(end);
    cout<<(delistToString(m))<<endl;

    cout<<"ended"<<endl;

}