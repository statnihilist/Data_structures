// deletes a node by position and then traverses
#include <iostream>

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

void deleter(struct Node** head_ref, int pos)
{
  struct Node* temp = *head_ref;
  struct Node* prev;

  if(temp != NULL && pos == 0)
  {
    *head_ref = temp->next;
    free(temp);
    return;
  }

  for(int i = 0; i < pos;  i++)
  {
    prev = temp;
    temp = temp->next;
  }

  prev->next = temp->next;
  free(temp);
}

void traversal(struct Node* n)
{
  while(n != NULL)
  {
    cout<<(n->data)<<'\n';
    n = n->next;
  }
}

int main(void)
{
  struct Node* head = NULL;

  push(&head, 1);
  push(&head, 2);
  push(&head, 3);
  push(&head, 4);

  deleter(&head, 0);
  traversal(head);

  return 0;
}
