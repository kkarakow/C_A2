#include<stdio.h>
#include<stdlib.h>
#include "node.h"
#include "queue.h"


int main() {
	int num;

	while (1) {
		printf("\nEnter a number (-1 to stop): ");
		scanf_s("%d", &num);
		if (num == -1) {
			break;
		}
		enqueue(num);
	}
	printf("\nYou entered: ");
	while (!queue_is_empty()) {
		num = dequeue();
		printf("%d", num);
	}
}
