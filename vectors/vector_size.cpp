// program to illustrate various size functions in vectors in cpp
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> g1;

  for(int i = 0; i < 5; i++)
    g1.push_back(i);

  cout<<"Size : "<<g1.size();
  cout<<"\nCapacity : "<<g1.capacity();
  cout<<"\nMax_Size : "<<g1.max_size();

  // resizes the vector size to 4
  g1.resize(4);

  // prints the vector size after resizing
  cout<<"\nResized : "<<g1.size();

  // checks whether the vector is empty
  if(g1.empty() == false)
    cout<<"\nVector is not empty!";
  else
    cout<<"\nVector is empty!";

  // shrinks the vector
  g1.shrink_to_fit();
  cout<<"\nVector elements are : ";
  for(auto it = g1.begin(); it != g1.end(); it++)
    cout<<*it<<" ";

  cout<<'\n';

  return 0;
}
