//library
#include <iostream>
using namespace std;
//entering main function
int main()
{
          //declaring variables
          float days,years,weeks;
          //process
          cout<< "enter the no of days";
          cin>> days;
          years=(days/365);
          weeks=(days/7);
          cout<< "the number of week is" <<weeks<<endl;
          cout<< "the number of years is" <<years<<endl;
          cout<< "the number of days is" <<days<<endl;
          return 0;
}
