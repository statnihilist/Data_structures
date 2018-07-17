// inserts a node at front, traverses to verify
#include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

int insert(struct Node** head_ref, int key)
{
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = key;
  new_node->next = *head_ref;
  (*head_ref) = new_node;
  return 0;
}

int traversal(struct Node* n)
{
  while(n!=NULL)
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

  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));

  head->data = 1;
  second->data = 2;
  third->data = 3;

  head->next = second;
  second->next = third;
  third->next = NULL;

  insert(&head, 0);
  traversal(head);

  return 0;
}
