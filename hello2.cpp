#include <iostream>
using namespace std;

namespace CSE3150{
  int foo(int n){
    return n+1;
  }
};

int main(){
  using namespace CSE3150;
  cout << "hello world!" << foo(10) << endl;
  /*

   */
  return 0;
}
