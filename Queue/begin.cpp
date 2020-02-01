#include <iostream>
#include <algorithm>

using namespace std;

class Queue{
	int rear,front,size;
	unsigned capacity;
	int* array;
}

Queue createqueue(unsigned capacity)
{
	Queue temp* = new Queue;
	temp->rear = capacity - 1;
	temp->front = temp->size = 0;
	temp->array = new int[(queue->capacity)*sizeof(int)];
	return temp;
}



int main()
{
	Queue* queue = createqueue(1000);

}