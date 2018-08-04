// recursively finds the length of a linked list
#include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

int get_count(struct Node* head_ref)
{
  if(head_ref != NULL)
    return 1 + get_count(head_ref->next);
}

void traversal(struct Node* head_ref)
{
  while(head_ref != NULL)
  {
    printf("%i\n", head_ref->data);
    head_ref = head_ref->next;
  }
}

void push(struct Node** head_ref, int key)
{
  struct Node* temp = NULL;
  temp = (struct Node*)malloc(sizeof(struct Node));
  temp->data = key;
  temp->next = *head_ref;
  *head_ref = temp;
}

int main(void)
{
  struct Node* head = NULL;

  for(int i = 0; i < 5; i++)
    push(&head, i);

  traversal(head);
  printf("length : %i\n", get_count(head));

  return 0;
}
