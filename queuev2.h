struct node
{
	int val;
	node *next;
};



void first_add(int val, node **first);
void add(int val, node **last);
int pop(node **first);
bool isEmpty(node *a);
void print(node **first);

