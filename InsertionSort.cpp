#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> num;
	int i,number,j,temp=0,flag=1,key;
	cout<<"\nEnter the array to be sorted: ";
	for(i=0;i<7;i++)
	{	
		cin>>number;
		num.push_back(number);	
		
	}
	
	int numLength=num.size();
	
	for(i=1;i<numLength;i++)
	{
		key=num[i];
		for(j=i-1;(j>=0)&&(num[j]<key);j--)
		{
			num[j+1]=num[j];
		}
		num[j+1]=key;
	}
     
	cout<<"\nThe sorted array is: ";
	vector<int>::iterator n=num.begin() ;
	while(n!=num.end())
	{
		cout<<*n<<endl;
		n++;
	}
	
	return 0;
}
