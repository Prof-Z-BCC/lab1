#include <string>
#include <iostream>

using namespace std;

// TODO: Define a templated method called CheckOrder() that
//       takes in four variables of generic type as arguments.
//       The return type of the method is string
//       Please note this uses a template

// Check the order of the input: 
// return "The elements are in ascending order" for ascending,
// "The elements are not in any specific order" for neither, 
// return "The elements are in descending order" for descending


int main() {
   // Variable Declaration Block
   string stringArg1,
          stringArg2,
          stringArg3,
          stringArg4;

  double doubleArg1,
         doubleArg2,
         doubleArg3,
         doubleArg4;

  char ch1,
       ch2,
       ch3,
       ch4;

   // Read 4 strings
   cin >> stringArg1;
   cin >> stringArg2;
   cin >> stringArg3;
   cin >> stringArg4;

   // Check order of four strings
   cout << "String order: " << CheckOrder(stringArg1, stringArg2, stringArg3, stringArg4) << endl;

   // Testing floating point
   cin >> doubleArg1;
   cin >> doubleArg2;
   cin >> doubleArg3;
   cin >> doubleArg4;

   // Check order of four doubles
   cout << "Double Order: " << CheckOrder(doubleArg1, doubleArg2, doubleArg3, doubleArg4) << endl;
   
   // Testing characters
    ch1 = cin.get();
    ch2 = cin.get();
    ch3 = cin.get();
    ch4 = cin.get();

    // Check order of four characters
    cout << "Character Order: " << CheckOrder(charOne, charTwo, charThree, charFour) << endl;
   
    return 0;
}
