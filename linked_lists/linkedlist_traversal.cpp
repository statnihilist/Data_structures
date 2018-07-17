// traverses over a simplified linked list and prints
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

int main(void)
{
  struct Node* head = NULL;
  struct Node* second = NULL;
  struct Node* third = NULL;

  head = (struct Node*)malloc(sizeof(struct Node));
  second = (struct Node*)malloc(sizeof(struct Node));
  third = (struct Node*)malloc(sizeof(struct Node));

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  traversal(head);

  return 0;
}
