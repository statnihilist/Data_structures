// inserts an element at given position and then traverses
#include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

void insert(struct Node** head_ref, int key, int pos)
{
  struct Node* new_node = NULL;
  new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = key;
  new_node->next = NULL;

  struct Node* nu = *head_ref;

  for(int i = 0; i < pos-1; i++)
  {
    nu = nu->next;
  }

  new_node->next = nu->next;
  nu->next = new_node;
}

void traversal(struct Node* n)
{
  while(n !=  NULL)
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
  struct Node* fifth = NULL;

  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));
  fourth = (struct Node*)malloc(sizeof(struct Node));
  fifth = (struct Node*)malloc(sizeof(struct Node));

  head->data = 1;
  second->data = 2;
  third->data = 3;
  fourth->data = 4;
  fifth->data = 5;

  head->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = NULL;

  insert(&head, 10, 2);
  traversal(head);

  return 0;
}
