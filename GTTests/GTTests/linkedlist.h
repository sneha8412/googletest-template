#pragma once

#include <iostream>
#include <vector>
#include <stdlib.h>

//this linkedlist will have 3 elements
class Node {
    //each element of linkedlist will store value and pointer to next node
public:
    int Value;
    Node* Next;

};

//======PRINT THE LINKED LIST======================================================================
//print all elements of the linked list
void printList(Node* n);

//======Return Array of THE LINKED LIST values======================================================================

std::vector<int> getLinkedListValues(Node* n);

//============INSERT NODE AT THE HEAD==============================================================================
//insert a new node in the linked list in the start, end and anywhere in between
void insertAtTheFront(Node** head, int newValue);

//=======INSERT NODE AT THE END=============================================================================
//insert a new node at the end of the linked list
void insertAtTheEnd(Node* head, int newValue);

//=========INSERT NODE INBETWEEN====================================================================================
//insert a node inbetween
void insertAfter(Node* previous, int newValue);

//=========DELETE A NODE====================================================================
//delete a node
//returns true if found, else false
void deleteNode(Node* head, Node* n);

//==========SEARCH A NODE VALUE=============================================================
//search a node in the linked list returns a boolean value
bool searchNode(Node* head, int value);

//==========LENGTH OF LINKED LIST=========================================
int lengthOfList(Node* head);


//============REVERSE A LINKED LIST======================================
void reverseList(Node* head);

//===============GET AT INDEX =========================================
int getAtIndex(Node* head, int index);

//==============FIND MID VALUE=======================================
int findMidValue(Node* head);