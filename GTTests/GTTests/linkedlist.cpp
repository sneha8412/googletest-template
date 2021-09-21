#include "linkedlist.h"
#include <iostream>
#include <vector>
using namespace std;//bad practice
//rename the namespace  using directives

//======PRINT THE LINKED LIST======================================================================
//print all elements of the linked list
void printList(Node* n) {
    //needs to recieve the head element as it has the pointer to the next element
    while (n != NULL) {
        cout << n->Value << endl;
        n = n->Next;
    }
}

//======Return Array of THE LINKED LIST values======================================================================

vector<int> getLinkedListValues(Node* n) {
    
    vector<int> vect;
    //needs to recieve the head element as it has the pointer to the next element
    while (n != NULL) {
        vect.push_back(n->Value);
        n = n->Next;
    }

    return vect;
}

//============INSERT NODE AT THE HEAD==============================================================================
//insert a new node in the linked list in the start, end and anywhere in between
void insertAtTheFront(Node** head, int newValue) {

    //prepare a newNode
    Node* newNode = new Node();
    newNode->Value = newValue;
    //put it in front of a current head
    newNode->Next = *head;
    //Move the head of the list to point to the newNode
    *head = newNode;
};

//=======INSERT NODE AT THE END=============================================================================
//insert a new node at the end of the linked list
void insertAtTheEnd(Node* head, int newValue) {
    //1. prepare a new node that will be added at the end
    Node* newNode = new Node();
    newNode->Value = newValue;
    newNode->Next = NULL;
    //2. check if the list is empty, newNode will be the head in that case
    if (head == NULL) {
        head = newNode;
        return;
    }
    //3. Find the last node
    Node* last = head;
    while (last->Next != NULL) {
        last = last->Next;
    }
    //4. Insert the newNode after the last node (at the end)
    last->Next = newNode;
}

//=========INSERT NODE INBETWEEN====================================================================================
//insert a node inbetween
void insertAfter(Node* previous, int newValue) {
    //1. check if the previous node is NULL
    if (previous == NULL) {
        cout << "Previous can not be NULL";
        return;
    }
    //2. prepare a newNode
    Node* newNode = new Node();
    newNode->Value = newValue;
    //3. Insert the new node after the previos element
    newNode->Next = previous->Next;
    previous->Next = newNode;

}

//=========DELETE A NODE====================================================================
//delete a node
//returns true if found, else false
void deleteNode(Node* head, Node* n) {
    //1.check if the list is empty
    if (head == NULL) {
        cout << false << endl;
    }
    //if the node to be deleted is the head node
    if (head == n) {
        if (head->Next == NULL) {
            cout << "there is only one node. the list node cannot be deleted" << endl;
            return;
        }
        //copy the value of the next node to the head
        head->Value = head->Next->Value;
        //store address of next node
        n = head->Next;
        //remove the link of the next node
        head->Next = head->Next->Next;
        //free memory
        free(n);

        return;
    }

    //when not the first node
    //find the previous node
    Node* prev = head;
    while (prev->Next != NULL && prev->Next != n) {
        prev = prev->Next;
    }
    //check if the node exists in the linked list
    if (prev->Next == NULL) {
        return;
    }

    //remove the node from the linked list
    prev->Next = prev->Next->Next;

    //free memory
    free(n);
    return;
}

//==========SEARCH A NODE VALUE=============================================================
//search a node in the linked list returns a boolean value
bool searchNode(Node* head, int value) {
    Node* current = head; //initialize current
    while (current != NULL) {
        if (current->Value == value) {
            return true;
            current = current->Next;
        }

        return false;
    }

}

//==========LENGTH OF LINKED LIST=========================================
int lengthOfList(Node* head) {
    int i = 0;
    Node* current = head;
    while (current != NULL) {
        current = current->Next;
        i += 1;
    }
    return i;
}


//============REVERSE A LINKED LIST======================================
void reverseList(Node* head) {
    Node* previous, * current, * temp;
    previous = NULL;
    current = head;

    while (current != NULL) {
        temp = current->Next;
        current->Next = previous;
        previous = current;
        current = temp;
    }
    head = previous;
}

//===============GET AT INDEX =========================================
int getAtIndex(Node* head, int index) {

    if (lengthOfList(head) < index) {
        return NULL;
    };
    Node* previous, * current, * temp;
    current = head;
    int current_index = 0;
    while (current != NULL) {
        if (current_index == index) {
            return current->Value;
        }
        current = current->Next;
        current_index += 1;
    }
}

//==============FIND MID VALUE=======================================
int findMidValue(Node* head) {
    int length = lengthOfList(head);
    int midIndex = int(length / 2);
    int midValue = getAtIndex(head, midIndex);
    return midValue;

}

//===========MAIN=======================================================
/*
int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    //access values in the class instead of dot notation incase you are using pointers
    //head inside its value property
    //ading the values to a linked list
    head->Value = 1;
    head->Next = second;//linking to the second element, next value is second
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    printList(head);

    insertAfter(head, 7);

    insertAtTheFront(&head, -1); //invocation of the function passing address of a head

    //delete the nodes or use smart pointers
    // system("pause>0");
}*/