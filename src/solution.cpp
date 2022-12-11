#include "solution.h"

using namespace std;

std::string bigNumToString(Node* num){
    string res = "";
    Node* temp = num;
    while(temp){
        res = to_string(temp->data) + res;
        temp = temp->next;
    }
    return res;
}
std::string delistToString(DoubleNode* start){
    string res = "";
    DoubleNode* temp = start;
    while(temp){
        res = res + to_string(temp->data);
        temp = temp->next;
    }
    return res;
}

Node* sumBigNums(Node* num1, Node* num2){
    Node* res = new Node((num1->data+num2->data)%10);
    int cart = (num1->data+num2->data)/10;

    Node* tempNum1 = num1->next;
    Node* tempNum2 = num2->next;
    Node* tempRes = res;

    while(tempNum1 != nullptr || tempNum2 != nullptr){
        if(tempNum1 == nullptr){
            tempRes->next = new Node(tempNum2->data + cart);
            tempRes = tempRes->next;
            tempNum2 = tempNum2->next;
            cart = 0;
            continue;
        }
        if(tempNum2 == nullptr){
            tempRes->next = new Node(tempNum1->data + cart);
            tempRes = tempRes->next;
            tempNum1 = tempNum1->next;
            cart = 0;
            continue;
        }

        tempRes->next = new Node((tempNum1->data + tempNum2->data) % 10 + cart);
        cart = (tempNum1->data + tempNum2->data) / 10;
        tempRes = tempRes->next;
        tempNum1 = tempNum1->next;
        tempNum2 = tempNum2->next;
    }
    if(cart!=0){
        tempRes->next = new Node(cart);
    }

    return res;
}


Node* mirror(Node* node){
    if(node->next == nullptr) {
        node->next = new Node(node->data);
        return node->next;
    }
    Node* temp = node;
    Node* top = mirror(node->next);
    top->next = new Node(temp->data);
    top = top->next;
    return top;
}


void doubleMirror(DoubleNode* end){
    DoubleNode* tempBack = end;
    DoubleNode* tempFront = end;
    while(tempBack != nullptr){
        tempFront->next = new DoubleNode(tempBack->data);
        tempFront->next->prev = tempFront;
        tempFront = tempFront->next;
        tempBack = tempBack->prev;
    }
}
