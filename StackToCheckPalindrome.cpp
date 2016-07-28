#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

void reverse(char *str,int len);
int main()
{
	
	char str[]="manama";
	int len=strlen(str);
	reverse(str,len);
	return 0;
}

void reverse(char *str,int len)
{
	stack<char> s;
	char palin[len];
	int flag=1;
		for(int i=0;i<len;i++)
		{
			s.push(str[i]);
		}
		for(int i=0;i<len;i++)
		{
			palin[i]=s.top();
			s.pop();
		}
		for(int i=0;i<len;i++)
		{
			if(str[i]!=palin[i])
			{
				flag=1;
				break;
			}
			else flag=0;
		}
		
		if(flag==1)
			cout<<"Not a Palindrome";
		else
		cout<<"It is a palindrome";
}
