#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<vector>
using namespace std;

class stack
			{
				int top;
				char stk[10];
				public:
						stack()
						{
							top=-1;
						}
						void push(char x)
						{
							if(top>10)
							{
								cout<<"\nStack overflow.";
							}
							stk[++top]=x;
							cout<<x<<" was inserted into stack.";
							return;
						}	
						void pop()
						{
							if(top<0)
							{
								cout<<"\nStack underflow.";
							}
							cout<<stk[top--]<<" was deleted from stack";
							return;
						}
						void display()
						{
							if(top<0)
							{
								cout<<"\nStack empty";
							}
							for(int i=top;i>=0;i--)
							cout<<stk[i];
							cout<<endl;
						}
			};
			
int main()
{
	int ch;
	char x;
	stack s;
	while(1)
	{
		cout<<"\nMENU.\n";
		cout<<"1. Push\n";
		cout<<"2. Pop\n";
		cout<<"3. Display\n";
		cout<<"4. Exit\n";
		cin>>ch;
		switch(ch)
		{
			case 1:	cout<<"\nEnter the char to be pushed into stack: ";
					cin>>x;
					s.push(x);
					break;
			case 2: s.pop();
					break;
			case 3: s.display();
					break;
			case 4: exit(0);
			default: cout<<"\nWrong number. Please enter a number from 1-4";
					break;
		}
	}
	return 0;
}
