#include <iostream>
#include <string>
using namespace std;
// declaring structure
struct {
   string n;
   int id;
   string a;
}class1[10];

void print( string a, int b, string c)
{
   cout << "" << a <<"\t\t"<< b <<"\t\t"<< c << endl;
}

int main()
{
   int a;
   cout << "How many student's detail you want to put (1,2,3) \n";
   cin >> a;
   if (a==1)
   
   {
      cout << "Enter the Student 1 Detail \nName : ";
      getline(cin, class1[0].n);
      cout << "ID : ";
      cin >> class1[0].id;
      cout << "\nAddress : ";
      getline(cin, class1[0].a);
   
   cout <<"Name" << "\t\tID" << "\t\tAddress" << endl;
   print (class1[0].n, class1[0].id, class1[0].a);
   }
   else if (a==2)
   {
      cout << "Enter the Student 1 Detail \nName : ";
      getline(cin, class1[0].n);
      cout << "ID : ";
      cin >> class1[0].id;
      cout << "Address : ";
      getline(cin, class1[0].a);
      
      cout << "Enter the Student 2 Detail \nName : ";
      getline(cin, class1[1].n);
      cout << "ID : ";
      cin >> class1[1].id;
      cout << "Address : ";
      getline(cin, class1[1].a);
   
   cout <<"Name" << "\t\tID" << "\t\tAddress" << endl;
   print (class1[0].n, class1[0].id, class1[0].a);
   cout << "\nStudent 2\n" << endl;
   print (class1[1].n, class1[1].id, class1[1].a);
   }
   else if (a==3)
   {
      cout << "Enter the Student 1 Detail \nName : ";
      cin >> class1[0].n;
      cout << "ID : ";
      cin >> class1[0].id;
      cout << "Address : ";
      cin >> class1[0].a;
      
      cout << "Enter the Student 2 Detail \nName : ";
      cin >> class1[1].n;
      cout << "ID : ";
      cin >> class1[1].id;
      cout << "Address : ";
      cin >> class1[1].a;
      
      cout << "Enter the Student 3 Detail \nName : ";
      cin >> class1[2].n;
      cout << "ID : ";
      cin >> class1[2].id;
      cout << "Address : ";
      cin >> class1[2].a;
   
   cout << "\nStudent 1\n" << endl;
   print (class1[0].n, class1[0].id, class1[0].a);
   cout << "\nStudent 2\n" << endl;
   print (class1[1].n, class1[1].id, class1[1].a);
   cout << "\nStudent 3\n" << endl;
   print (class1[2].n, class1[2].id, class1[2].a);
   }
   else 
   {
      cout << "Invalid number" << endl;
   }
   return 0;
}