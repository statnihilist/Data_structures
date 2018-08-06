// program to illustrate modifiers in vectors
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> g1;

  g1.assign(5, 10);

  cout<<"The vector elements are : ";
  for(auto i = g1.begin(); i != g1.end())

  return 0;
}
