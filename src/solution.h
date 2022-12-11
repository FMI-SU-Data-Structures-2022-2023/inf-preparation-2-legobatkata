#ifndef TEST2_PREP
#include <iostream>
#include <string>

struct Node {
    int data;
    Node* next;
    Node(int _data) : data(_data), next(nullptr) {}
};

struct DoubleNode {
    int data;
    DoubleNode* next;
    DoubleNode* prev;
    DoubleNode(int _data) : data(_data), next(nullptr), prev(nullptr){}
};

std::string bigNumToString(Node* num);
std::string delistToString(DoubleNode* start);

Node* sumBigNums(Node* num1, Node* num2);
Node* mirror(Node* node);
void doubleMirror(DoubleNode* end);

#define TEST2_PREP
#endif //TEST2_PREP
