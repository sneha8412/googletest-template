// GTTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <gtest/gtest.h>
#include "linkedlist.h"

TEST(GTTests, AssertTrue) {
    ASSERT_TRUE(true);
}

TEST(GTTests, GetLinkedListValuesTest) {
    
    // Setup
    Node* n = new Node();

    n->Value = 10;
    n->Next = new Node();
    n->Next->Value = 20;
    
    // Act
    vector<int> values = getLinkedListValues(n);

    // Assert
    //ASSERT_TRUE(values != NULL);
    ASSERT_EQ(values.size(), 2);
}//*/

TEST(GTTests, TestInsertAtTheFront) {

    //setup
    Node* existingHead = new Node();
    existingHead->Value = 10;

    ASSERT_EQ(existingHead->Value, 10);

    // act
    insertAtTheFront(&existingHead, 9);

    // assert
    ASSERT_EQ(existingHead->Value, 9);
    ASSERT_EQ(lengthOfList(existingHead), 2);
}

TEST(GTTests, TestInsertAtTheEnd) { 
    //setup
    Node* existingHead = new Node();
    existingHead->Value = 20;

    ASSERT_EQ(existingHead->Value, 20);

    insertAtTheEnd(existingHead, 15);

    ASSERT_EQ(existingHead->Value, 20);
    ASSERT_EQ(existingHead->Next->Value, 15);
    ASSERT_EQ(lengthOfList(existingHead), 2);
}

TEST(GTTests, TestInsertAfter) {
    //setup
    Node* previous = new Node();
    previous->Value = 6;

    insertAtTheEnd(previous, 8);
    ASSERT_EQ(previous->Value, 6);
   
    //Act
    insertAfter(previous, 3);

    //assert
    ASSERT_EQ(previous->Next->Value, 3);
    ASSERT_EQ(lengthOfList(previous), 3);
}

TEST(GTTests, TestSearchNode) {

}
/**
int main()
{
    std::cout << "Hello World!\n";
    return 0;
}*/

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
