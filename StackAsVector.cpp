#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int main()
{
	int ch;
	int x;
	stack< int, vector<int> > my_stack;
	while(1)
	{
		cout<<"\nMENU:\n";
		cout<<"1. Push.\n";
		cout<<"2. Pop.\n";
		cout<<"3. Display.\n";
		cout<<"4. Exit.\n";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"\nEnter value: ";
					cin>>x;
					my_stack.push(x);
					cout<<x<<" was pushed.\n";
					break;
			case 2: cout<<my_stack.top()<<" was popped.\n";
					my_stack.pop();
					break;
			case 3: while(!my_stack.empty())
					{
						cout<<my_stack.top()<<" ";
						my_stack.pop();
					}
					break;
			case 4: exit(0);
			default: cout<<"WRONG NUMBER!\n";
					break;					
							
		}
	}
}
