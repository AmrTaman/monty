void push(int a){
	struct stack_s *pointer = malloc(sizeof(struct stack_s));
	if (pointer == NULL)
	{
		printf("Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	if (head == NULL)
	{
		pointer -> n = a;
		pointer -> prev = NULL;
		pointer -> next = NULL;
		head = pointer;
	}
	else
	{
		pointer -> n = a;
		pointer -> prev = NULL;
		pointer -> next = head;
		head = pointer;
	}


