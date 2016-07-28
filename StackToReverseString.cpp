#include<iostream>
#include<string.h>
#include<stack>
using namespace std;

void reverse(char *str,int len);
int main()
{
	
	char str[]="I love Programming";
	int len=strlen(str);
	reverse(str,len);
	return 0;
}

void reverse(char *str,int len)
{
	stack<char> s;
		for(int i=0;i<len;i++)
		{
			s.push(str[i]);
		}
		for(int i=0;i<len;i++)
		{
			str[i]=s.top();
			s.pop();
		}
		for(int i=0;i<len;i++)
		{
			cout<<str[i];
		}
}
