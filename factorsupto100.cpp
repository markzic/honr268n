#include <iostream>
using namespace std;

int main() {
  int n=1;
  while (n<=100) {
    cout << "n is "<<n<<", the factors of "<<n<<" are:";
    int p=1;
    while (p<=n) {
      int q = n % p;
      if (q == 0) cout <<" "<< p;
      p++;
    }
    cout<<"."<<endl;
    n++;
  }
  return 0;
    }
