//library
#include <iostream>
using namespace std;
int main()
{
       declaring variables//
       float km,met,cent;
       cout<<"\n\n convert centimeter into meter and kilometer:\n";
       cout<<"input the distance in centimeter :150000";
       cin >> cent;
       met = (cent/100);
       km = (cent/100000);
       cout << "the distance in meter is : "<<met<<endl;
       cout<< "the distance in kilometer is: "<<km<<endl;
       cout << endl;
       return 0;
}
