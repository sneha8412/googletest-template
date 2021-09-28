#pragma once
#include <iostream>
#include <stdlib.h>


class Queue {
private:
	int m_front;
	int m_rear;
	int m_arr[5];

public:
	Queue();

	bool isEmpty();

	bool isFull();

	void enqueue(int val);

	//int type because we are removing the int from array
	int dequeue();

	//returns count of elements in the array
	int count();

	int front();

};