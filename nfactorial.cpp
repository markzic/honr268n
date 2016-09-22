#include <iostream>
using namespace std;

int main() {
  int n=1, m=1, p=1;
  while(n<=10) {
  cout << "n is "<<n<<", ";
  while(m<=n) {
    p*=m;
      m++;
  }
  cout << "n! is "<<p<<endl;
  n++;
  }
  return 0;

}
