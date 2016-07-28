#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
   // create a vector to store int
   vector<int> radius; 
   int i;

   // push 5 values into the vector
   for(i = 0; i < 5; i++)
   {
      radius.push_back(i);
   }

   // display extended size of vec
   cout << "extended vector size = " << radius.size() << endl;

   // access 5 values from the vector
   for(i = 0; i < 5; i++){
      cout << "value of vec [" << i << "] = " << radius[i] << endl;
   }

   // use iterator to access the values
   vector<int>::iterator r = radius.begin();
   while( r != radius.end()) {
      cout << "value of v = " << *r << endl;
      r++;
   }

   return 0;
}
