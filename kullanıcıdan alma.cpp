#include <iostream>

using namespace std;

int main(){

  int x;
  
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x;
   
    
  cout << "variable value: " << x << endl;
  cout << "variable address: " << &x << endl;

  cout << endl;

  int *ptr = &x;
  cout << "The address pointer shows: " << ptr << endl;
  cout << "Address value displayed by Pointer: " << *ptr << endl;
  cout << "Pointer address: " << &ptr;

  return 0;
}
