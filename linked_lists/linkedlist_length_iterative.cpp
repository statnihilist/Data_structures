// iteratively finds the length of a linked list
# include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

void push(struct Node** head_ref, int key)
{
  struct Node* temp = NULL;
  temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = key;
  temp->next = *head_ref;
  *head_ref = temp;
}

int length(struct Node* head_ref)
{
  int l = 0;
  while(head_ref != NULL)
  {
    l++;
    head_ref = head_ref->next;
  }
  return l;
}

void traversal(struct Node* n)
{
  while(n != NULL)
  {
    printf("%i\n", n->data);
    n = n->next;
  }
}

int main(void)
{
  struct Node* head = NULL;

  for(int i = 0; i < 5; i++)
    push(&head, i);

  traversal(head);
  printf("length : %i\n", length(head));

  return 0;
}
