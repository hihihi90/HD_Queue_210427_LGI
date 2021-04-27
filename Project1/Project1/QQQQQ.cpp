/*front
rear
add re++
delete front++ printf
*/
#include<stdio.h>
#include"QQQQQ.h"

int main() {
	addq(10);
	addq(20);
	addq(30);
	addq(10);
	addq(20);
	addq(30);
	addq(10);
	addq(20);
	addq(30);
	addq(10);
	addq(20);
	addq(30);
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
	printf("%d\n", deleteq());
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

