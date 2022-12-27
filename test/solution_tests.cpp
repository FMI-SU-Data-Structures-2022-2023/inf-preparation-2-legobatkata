#include "catch2/catch_all.hpp"
#include "solution.h"

using namespace std;


TEST_CASE("bigNumToString works properly for short nums") {
    Node* num1 = new Node(1);
    REQUIRE(bigNumToString(num1) == "1");
}

TEST_CASE("bigNumToString works properly for longer nums") {
    Node* num1 = new Node(1);
    num1->next = new Node(2);
    num1->next->next = new Node(3);
    REQUIRE(bigNumToString(num1) == "321");
}

TEST_CASE("sumBigNum works with 2 same length numbers") {
    Node* num1 = new Node(1);
    num1->next = new Node(2);

    Node* num2 = new Node(3);
    num2->next = new Node(3);

    REQUIRE(bigNumToString(sumBigNums(num1, num2)) == "54");
    REQUIRE(bigNumToString(sumBigNums(num2, num1)) == "54");
}

TEST_CASE("sumBigNum works with 2 different length numbers") {
    Node* num1 = new Node(1);
    num1->next = new Node(2);
    num1->next->next = new Node(3);

    Node* num2 = new Node(3);
    num2->next = new Node(3);

    REQUIRE(bigNumToString(sumBigNums(num1, num2)) == "354");
    REQUIRE(bigNumToString(sumBigNums(num2, num1)) == "354");
}

TEST_CASE("sumBigNum properly carts over digits") {
    Node* num1 = new Node(7);
    num1->next = new Node(2);

    Node* num2 = new Node(4);
    num2->next = new Node(3);

    REQUIRE(bigNumToString(sumBigNums(num1, num2)) == "61");
    REQUIRE(bigNumToString(sumBigNums(num2, num1)) == "61");
}

TEST_CASE("sumBigNum properly carts over digits at end of a shorter length number") {
    Node* num1 = new Node(7);
    num1->next = new Node(2);
    num1->next->next = new Node(1);

    Node* num2 = new Node(9);
    num2->next = new Node(9);

    REQUIRE(bigNumToString(sumBigNums(num1, num2)) == "226");
    REQUIRE(bigNumToString(sumBigNums(num2, num1)) == "226");
}

TEST_CASE("sumBigNum properly adds a new digit when it should") {
    Node* num1 = new Node(9);
    num1->next = new Node(9);

    Node* num2 = new Node(1);
    num2->next = new Node(1);

    REQUIRE(bigNumToString(sumBigNums(num1, num2)) == "110");
    REQUIRE(bigNumToString(sumBigNums(num2, num1)) == "110");
}

TEST_CASE("sumBigNum works with single digit numbers") {
    Node* num1 = new Node(7);
    Node* num2 = new Node(1);
    REQUIRE(bigNumToString(sumBigNums(num1, num2)) == "8");
    REQUIRE(bigNumToString(sumBigNums(num2, num1)) == "8");
}

TEST_CASE("sumBigNum works with single digit numbers and carts over correctly") {
    Node* num1 = new Node(7);
    Node* num2 = new Node(3);
    REQUIRE(bigNumToString(sumBigNums(num1, num2)) == "10");
    REQUIRE(bigNumToString(sumBigNums(num2, num1)) == "10");
}

TEST_CASE("sumBigNum 0 + 0 = 0 ?") {
    Node* num1 = new Node(0);
    Node* num2 = new Node(0);
    REQUIRE(bigNumToString(sumBigNums(num1, num2)) == "0");
    REQUIRE(bigNumToString(sumBigNums(num2, num1)) == "0");
}

TEST_CASE("mirror works correctly with long nums") {
    Node* num1 = new Node(1);
    num1->next = new Node(2);
    num1->next->next = new Node(3);
    mirror(num1);
    REQUIRE(bigNumToString(num1) == "123321");
}
TEST_CASE("mirror works correctly with single nums") {
    Node* num1 = new Node(1);
    mirror(num1);
    REQUIRE(bigNumToString(num1) == "11");
}

TEST_CASE("doubleMirror works with big lists"){
    DoubleNode* m = new DoubleNode(1);
    m->next = new DoubleNode(2);
    m->next->prev = m;
    m->next->next = new DoubleNode(3);
    m->next->next->prev = m->next;

    DoubleNode* end = m->next->next;

    doubleMirror(end);
    REQUIRE((delistToString(m)) == "123321");
}

TEST_CASE("doubleMirror works with single length lists"){
    DoubleNode* m = new DoubleNode(1);

    DoubleNode* end = m;

    doubleMirror(end);
    REQUIRE((delistToString(m)) == "11");
}