#include <iostream>
#include <gtest/gtest.h>
#include "StackImpl.h"

TEST(StackTests, TestIfArrayIsEmpty) {
	//set
	Stack* s = new Stack();
	//act
	s->isEmpty();

	//assert
	ASSERT_TRUE(true);
}

TEST(StackTests, TestIfArrayIsnotEmpty) {
	Stack* s = new Stack();
	s->push(3);
	//act
	s->isEmpty();

	//assert
	ASSERT_FALSE(false);
}
TEST(StackTests, TestIfArrayIsFull) {
	Stack* s = new Stack();
	s->push(3);
	s->push(2);
	s->push(9);
	s->push(10);
	s->push(1);

	//act
	s->isFull();

	//assert
	ASSERT_TRUE(true);
	
}

TEST(StackTests, TestIfArrayIsNotFull) {
	Stack* s = new Stack();
	s->push(3);
	s->push(2);
	s->push(9);
	s->push(10);

	//act
	s->isFull();

	//assert
	ASSERT_FALSE(false);

}
TEST(StackTests, TestToPushAValue) {
	//create a new instance of the class
	Stack* s = new Stack();

	//act
	s->push(3);

	int stackSize = s->count();

	//assert
	ASSERT_EQ(stackSize, 1);
}

TEST(StackTests, TestToPopAValue) {
	Stack* s = new Stack();
	s->push(3);
	s->push(2);
	s->push(9);
	s->push(10);

	//act
	int poppedValue = s->pop();

	//assert
	ASSERT_EQ(poppedValue, 10);

}

TEST(StackTests, TestToChangeAValue) {
	Stack* s = new Stack();
	s->push(3);
	s->push(2);
	s->push(9);
	s->push(10);

	//act
	s->change(3, 7);
	int peekVal = s->peek(3);
	//assert
	ASSERT_EQ(peekVal, 7 );

}

TEST(StackTests, TestToPeek) {
	Stack* s = new Stack();
	s->push(3);
	s->push(2);
	s->push(9);
	s->push(10);

	//act
	int peekValue = s->peek(1);

	//assert
	ASSERT_EQ(peekValue, 2);
}

TEST(StackTests, TestToCount) {
	Stack * s = new Stack();
	s->push(3);
	s->push(2);
	s->push(9);
	s->push(10);

	//act
	int countSize = s->count();

	//assert
	ASSERT_EQ(countSize, 4);

}

