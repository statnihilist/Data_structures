// program to illustrate modifiers in vectors
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> g1;

  g1.assign(5, 10);

  cout<<"The vector elements are : ";
  for(auto i = g1.begin(); i != g1.end(); i++)
    cout<<*i<<" ";

  g1.push_back(15);
  int n = g1.size();
  cout<<"\nThe last element is : "<<g1[n-1];

  g1.pop_back();

  cout<<"\nThe elements in the vector are : ";
  for(auto i = g1.begin(); i != g1.end(); i++)
    cout<<*i<<" ";

  g1.insert(g1.begin(), 5);
  cout<<"\nThe first element is : "<<g1[0];

  g1.erase(g1.begin());
  cout<<"\nThe first element is : "<<g1[0];

  g1.emplace(g1.begin(), 5);
  cout<<"\nThe first element is : "<<g1[0];

  g1.emplace_back(20);
  n = g1.size();
  cout<<"\nThe last element is : "<<g1[n-1];

  g1.clear();
  cout<<"\nThe size of the vector after clearing is : "<<g1.size();

  vector<int> g2, g3;
  g2.push_back(0);
  g2.push_back(1);
  g3.push_back(2);
  g3.push_back(3);

  cout<<"\nThe first vector : ";
  for(auto i = g2.begin(); i != g2.end(); i++)
    cout<<*i<<" ";

  cout<<"\nThe second vector : ";
  for(auto i = g3.begin(); i != g3.end(); i++)
    cout<<*i<<" ";

  g2.swap(g3);

  cout<<"\nThe first vector : ";
  for(auto i = g2.begin(); i != g2.end(); i++)
    cout<<*i<<" ";

  cout<<"\nThe second vector : ";
  for(auto i = g3.begin(); i != g3.end(); i++)
    cout<<*i<<" ";

  cout<<'\n';

  return 0;
}
