#include<iostream>
using namespace std;
class adi {
   string n;
   int age;
   // Access specifier
public:
   // Data Members
   adi(){
      cout << "enter the name"<< endl;
      cin >> n;
      cout << "enter the age"<< endl;
      cin >> age;
   };
   void p(){
      cout<< "\nName : " << n << "\nAge : " << age<< endl;
   };
   void pr(){
      cout<< "\nAge : " << age<< endl;
   };
};
int main()
{
   adi a1[3];
   a1[0].p();
   a1[1].p();
   a1[2].p();
  
   return 0;
   
}
