// inserts element at the end of the list and traverses
#include <iostream>

using namespace std;

struct Node
{
  int data;
  struct Node* next;
};

void traversal(struct Node* n)
{
  while(n != NULL)
  {
    cout<<(n->data)<<'\n';
    n = n->next;
  }
}

void insert(struct Node** head_ref, int key)
{
  struct Node* new_node = NULL;
  new_node = (struct Node*)malloc(sizeof(struct Node));
  new_node->data = key;
  new_node->next = NULL;

  struct Node* nu = *head_ref;

  while((nu->next) != NULL)
  {
    nu = nu->next;
  }

  nu->next = new_node;
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

  insert(&head, 4);
  traversal(head);

  return 0;
}
