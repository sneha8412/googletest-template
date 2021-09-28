#include <iostream>
#include <gtest/gtest.h>
#include "Queue.h"

TEST(QueueTests, TestIfQueueIsEmpty) {
	//set
	Queue* q = new Queue();

	//act
	q->isEmpty();

	//assert
	ASSERT_TRUE(true);
}

TEST(QueueTests, TestIfQueueIsNotEmpty) {
	//set
	Queue* q = new Queue();
	q->enqueue(1);

	//act
	q->isEmpty();

	//assert
	ASSERT_FALSE(false);
}


TEST(QueueTests, TestIfQueueIsFull) {
	Queue* q = new Queue();
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);
	q->enqueue(5);
	q->enqueue(6);

	//act
	q->isFull();

	//assert
	ASSERT_TRUE(true);

}

TEST(QueueTests, TestIfQueueIsNotFull) {
	Queue* q = new Queue();
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);
	q->enqueue(5);
	

	//act
	q->isFull();

	//assert
	ASSERT_FALSE(false);

}

TEST(QueueTests, TestEnqueue) {
	//set
	Queue* q = new Queue();

	//act
	q->enqueue(2);
	int size = q->count();
	
	//assert
	ASSERT_EQ(size, 1);
}


TEST(QueueTests, TestDequeue) {
	//set
	Queue* q = new Queue();

	//act
	q->enqueue(2);
	int dequeueVal = q->dequeue();

	//assert
	ASSERT_EQ(dequeueVal, 2);

}

TEST(QueueTests, TestCountOfElementsInArray) {
	Queue* q = new Queue();

	//act
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);
	int size = q->count();

	//assert
	ASSERT_EQ(size, 3);
}

TEST(QueueTests, TestFrontElementInQueue) {
	Queue* q = new Queue();

	//act
	q->enqueue(2);
	q->enqueue(3);
	q->enqueue(4);

	int frontVal = q->front();
	//assert

	ASSERT_EQ(frontVal, 2);

}