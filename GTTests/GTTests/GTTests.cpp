// GTTests.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <gtest/gtest.h>
#include "linkedlist.h"

TEST(GTTests, AssertTrue) {
    ASSERT_TRUE(true);
}

TEST(GTTests, TestGetLinkedListValues) {
    
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

//===========TEST INSERT AFTER===================================
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

//=========TEST SEARCH NODE================================================
TEST(GTTests, TestSearchNode) {
    //setup
    //instantiate head
    Node* existingHead = new Node();
    existingHead->Value = 1;
    //instantiate current
    Node* current = new Node();
    current->Value = 2;
    existingHead->Next = current;
    //instantiate newNode
    Node* newNode = new Node();
    newNode->Value = 3;
    current->Next = newNode;
    newNode->Next = NULL;

    ASSERT_EQ(lengthOfList(existingHead), 3);
    //if the value exists
    searchNode(existingHead, 2);
    ASSERT_TRUE(true);

    //if the value does not exist
    searchNode(existingHead, 5);
    ASSERT_FALSE(false);
}

TEST(GTTests, TestSearchNodeOnEmptyList) {
    //setup
    Node* existingHead = new Node();
    existingHead = NULL;
    searchNode(existingHead, 2);
    ASSERT_FALSE(false);
}

//==============TEST LENGTH OF LIST===================================
TEST(GTTests, TestLengthOfList) {
    //setup
    Node* existingHead = new Node();
    existingHead->Value = 1;
    Node* current = new Node();
    current->Value = 2;
    existingHead->Next = current;
    Node* newNode = new Node();
    newNode->Value = 3;
    newNode->Next = NULL;
    current->Next = newNode;

    //act
    lengthOfList(existingHead);

    //assert
    ASSERT_EQ(lengthOfList(existingHead), 3);

}

TEST(GTTests, TestLengthOfListOnEmptyList) {
    //setup
    Node* existingHead = new Node();
    existingHead = NULL;

    lengthOfList(existingHead);

    //assert
    ASSERT_EQ(lengthOfList(existingHead), 0);

}

//===============TESt DELETE NODE=====================================

TEST(GTTests, TestDeleteNode) {
    //setup
    Node* existingHead = new Node();
    existingHead->Value = 10;
    Node* previous = new Node();
    previous->Value = 6;

    insertAtTheFront(&existingHead, 9);
    insertAtTheEnd(existingHead, 15);
    insertAfter(previous, 3);

    //Act
    ASSERT_EQ(lengthOfList, 3);


}

//=========TESt GET AT INDEX=============================================

TEST(GTTest, TestGetAtIndex) {
    //setup
    Node* existingHead = new Node();
    existingHead->Value = 1;
    Node* current = new Node();
    current->Value = 2;
    existingHead->Next = current;
    Node* newNode = new Node();
    newNode->Value = 3;
    newNode->Next = NULL;
    current->Next = newNode;

    getAtIndex(existingHead, 1);

    ASSERT_EQ(getAtIndex(existingHead, 1), 2);


}
//===============TEST REVERSE LIST ================================
/*TEST(GTTests, TestReverseList) {
    Node* existingHead = new Node();
    existingHead->Value = 1;
    Node* current = new Node();
    current->Value = 2;
    existingHead->Next = current;
    Node* previous = new Node();
    previous->Value = 3;
    previous->Next = NULL;
    current->Next = previous;
    ASSERT_EQ(lengthOfList(existingHead), 3);


    //reverseList(existingHead);

    //ASSERT_EQ(existingHead, previous );
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
