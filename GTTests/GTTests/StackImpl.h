#pragma once
#include <iostream>
#include <stdlib.h>
#include "linkedlist.h"

class Stack {
  private:
	int m_array[5];
	int m_top;

  public:
	Stack();

	void push(int val);

	int pop();

	bool isEmpty();

	bool isFull();

	int peek(int index);

	int count();

	void change(int index, int value);

	void display();
		
};

