#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <int> num;
	int i,number,j,temp=0,flag=1,first;
	cout<<"\nEnter the array to be sorted: ";
	for(i=0;i<7;i++)
	{	
		cin>>number;
		num.push_back(number);	
		
	}
	
	int numlength=num.size();
	
	 for (i= 0; i <numlength-1; i++)
     {
           first = 0;                 // initialize to subscript of first element
           for (j=i+1; j<numlength; j++)   // locate smallest between positions 1 and i.
          {
                 if (num[j] < num[first])
                 first = j;
          }
         temp = num[i];   // Swap smallest found with element in position i.
         num[i] = num[first];
         num[first] = temp;
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
