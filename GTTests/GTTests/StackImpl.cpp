#include <iostream>
#include <stdlib.h>
#include "StackImpl.h"



	Stack::Stack() {
		m_top = -1;
		for (int i = 0; i < 5; i++) {
			m_array[i] = 0;
		}
    }


	void Stack::push(int value) {
		if (Stack::isFull()) {
			std::cout << "stack overflow" << std::endl;
		}
		else {
			m_top++;
			m_array[m_top] = value;
		}
	}


	int Stack::pop() {
		if (Stack::isEmpty()) {
			std::cout << "stack underflow" << std::endl;
			return 0;
		}
		else {
			int popValue = m_array[m_top];
			m_array[m_top] = 0;
			m_top--;
			return popValue;
		}
	}


	bool Stack::isEmpty() {
		if (m_top == -1) {
			return true;
		}
		else {
			return false;
		}
	}


	bool Stack::isFull() {
		if (m_top == 4) {
			return true;
		}
		else
			return false;
	}


	int Stack::peek(int index) {
		if (Stack::isEmpty()) {
			std::cout << "stack underflow" << std::endl;
			return 0;
		}
		else {
			return m_array[index];
		}
	}


	int Stack::count() {
		return (m_top + 1);
	}


	void Stack::change(int index, int value) {
		m_array[index] = value;
		std::cout << "value changed at index" << std::endl;

	}

	int Stack::display() {
		std::cout << "All values in the stack are" << std::endl;
		for (int i = 4; i >= 0; i--) {
			std::cout << m_array[i] << std::endl;
		}
	}


