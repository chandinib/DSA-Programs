#include <vector>
#include <stack>
#include <iostream>
using namespace std;
int main() {
  stack< int, vector<int> > my_stack;
  vector <int> temp_stack; //now, this is a stack stored in a vector.
  for(int i=0;i<5;i++)
  {
  my_stack.push(i*2);
	}
  while(my_stack.top()>0)
  {
  	temp_stack.push_back(my_stack.top());
  	cout<<"\n"<<my_stack.top();
  	my_stack.pop();
  }
  
  if(my_stack.top()==0)
    cout << "the stack is now empty." << endl;


  cout<<"The temporary stack is: "<<endl;
  for(int i=0;i<temp_stack.size();i++)
  {
  	cout<<temp_stack[i]<<" ";
  }
  return 0;
};
