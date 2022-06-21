struct node* start = NULL;
struct node* tmp = NULL;
struct node* current = NULL;

void enqueue(int num) {
	tmp = (struct node*)malloc(sizeof(struct node));
	tmp->value = num;
	tmp->next = NULL;
	if (start == NULL)
		start = tmp;
	else
	{
		current = start;
		while (current->next != NULL)
			current = current->next;
		current->next = tmp;
	}
}

int dequeue() {
	int num = start->value;

	tmp = start;
	start = start->next;
	free(tmp);

	return num;
}

int queue_is_empty() {
	if (start == NULL) {
		return 1;
	}
	return 0;
}