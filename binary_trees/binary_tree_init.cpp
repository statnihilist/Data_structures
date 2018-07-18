// simply initialises a binary tree
# include <iostream>

using namespace std;

struct Node
{
  int data;

  struct Node* left;
  struct Node* right;
};

struct Node* new_Node(int key)
{
  struct Node* n = NULL;
  n = (struct Node*)malloc(sizeof(struct Node));

  n->data = key;
  n->left = NULL;
  n->right = NULL;

  return n;
}

int main(void)
{
  struct Node* root = new_Node(1);

  root->left = new_Node(2);
  root->right = new_Node(3);

  root->left->left = new_Node(4);

  return 0;
}
