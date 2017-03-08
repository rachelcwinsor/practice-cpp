#include <iostream>
  using namespace std;
void printGreeting(string name){
  const string msg = "Hello "+name+"!"; //string("Hello ") is also acceptable
  // const makes the string constant! message cannot change after this! it is (for all intents and purposes) read-only
  const int len = msg.size(); //length of message
  const string stars(len+4, '*');
  const string edge= "*" + string(len+2, ' ') + "*";
  const string middle = "* " + msg + " *";

  //good for (A) documentation - tells the programmer this was never intended to be modified. protection against future accidents.

  cout << stars << endl
       << edge << endl
       << middle << endl
       << edge << endl
       << stars <<endl;
}

int main(){

  cout << "Please enter your first name:";

  string name; //std::string 
  cin >> name;

  printGreeting(name);

  return 0;
}
