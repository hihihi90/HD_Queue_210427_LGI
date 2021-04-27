/*front
rear
add re++
delete front++ printf
*/
#include<stdio.h>
#include"QQQQQ.h"
#define QUEUE_SIZE 10


int queue[QUEUE_SIZE];
int front = -1;
int rear = -1;

int main() {
	addq(10);
	addq(20);
	addq(10);
	addq(20);
	addq(30);
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());	
}

void addq(int a) {
	queue[rear] = a;
	rear++;
}
int deleteq() {
	int b = queue[front];
	front++;
	return b;
}

