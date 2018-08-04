// recursively searches an element in a linked list
#include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

int search(struct Node* head_ref, int key)
{
  int pos = -1;
  int i = 0;
  while(head_ref != NULL)
  {
    if(key == head_ref->data)
    {
      pos = i;
      break;
    }
    else
      head_ref = head_ref->next;
    i++;
  }
  return pos;
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
  printf("%i\n", search(head, 8));

  return 0;
}
