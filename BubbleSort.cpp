#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> num;
	int i,number,j,temp=0,flag=1;
	cout<<"\nEnter the array to be sorted: ";
	for(i=0;i<7;i++)
	{	
		cin>>number;
		num.push_back(number);	
		
	}
	
	int numlength=num.size();
	
	for(i=1;i<=numlength&&flag;i++)
	{
		flag=0;
		for(j=0;j<(numlength-1);j++)
		{
			if(num[j+1]>num[j])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
				flag=1;
			}
		}
	}
	
	cout<<"\nThe sorted array is: ";
	vector<int>::iterator n=num.begin();
	while(n!=num.end())
	{
		cout<<*n<<endl;
		n++;
	}
	
	return 0;
}
