// deletes a node of a linked list according to a key
#include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

void deleter(struct Node** head_ref, int key)
{
  struct Node* temp = NULL;
  temp = *head_ref;
  struct Node* prev;

  if((temp != NULL) && ((temp->data) == key))
  {
    *head_ref = temp->next;
    free(temp);
    return;
  }

  while(temp->data != key)
  {
    prev = temp;
    temp = temp->next;
  }

  if(temp == NULL)
    return;

  prev->next = temp->next;
  free(temp);
}

void traversal(struct Node *n)
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
  struct Node* second = NULL;
  struct Node* third = NULL;
  struct Node* fourth = NULL;

  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  fourth = (struct Node*)malloc(sizeof(struct Node));

  head->data = 1;
  second->data = 2;
  third->data = 3;
  fourth->data = 4;

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = NULL;

  deleter(&head, 4);
  traversal(head);

  return 0;
}
