// program to illustrate element acessers in vectors
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> g1;

  for(int i = 0; i < 10; i++)
    g1.push_back(i);

  cout<<"Reference operator [g] : g1[2] = "<<g1[2];
  cout<<"\nat : g1.at(4) = "<<g1.at(4);
  cout<<"\nfront : g1.front() = "<<g1.front();
  cout<<"\nback : g1.back() = "<<g1.back();

  // pointer to the first element
  int* pos = g1.data();
  cout<<"\nData pointer : g1.data() = "<<*pos<<'\n';

  return 0;
}
