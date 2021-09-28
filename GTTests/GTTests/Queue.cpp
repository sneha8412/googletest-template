#include <iostream>
#include <stdlib.h>
#include "Queue.h"

	Queue::Queue() {
		m_front = -1;
		m_rear = -1;
		for (int i = 0; i < 5; i++) {
			m_arr[i] = 0;
		}
	}

	bool Queue::isEmpty() {
		if (m_front == -1 && m_rear == -1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool Queue::isFull() {
		if (m_rear == 4) {
			return true;
		}
		else {
			return false;
		}
	}

	void Queue::enqueue(int val) {
		//check if the queue is full
		if (isFull()) {
			std::cout << "Queue is full" << std::endl;
			return;
		}
		else if (isEmpty()) {
			m_rear = 0;
			m_front = 0;
			m_arr[m_rear] = val;
		}
		else {
			m_rear++;
			m_arr[m_rear] = val;
		}
	}

	//int type because we are removing the int from array
	int Queue::dequeue() {
		int x;
		if (isEmpty()) {
			std::cout << " Queue is Empty" << std::endl;
			return 0;
		}
		else if (m_front == m_rear) {
			x = m_arr[m_front];
			m_arr[m_front] = 0;
			m_rear = -1;
			m_front = -1;
			return x;
		}
		else {
			x = m_arr[m_front];
			m_arr[m_front] = 0;
			m_front++;
			return x;
		}
	}

	//returns count of elements in the array
	int Queue::count() {
		return (m_rear - m_front + 1);
	}

	int Queue::front() {
		return m_arr[m_front];
	}

