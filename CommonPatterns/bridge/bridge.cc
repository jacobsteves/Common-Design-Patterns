#include <iostream>
#include <memory>
using namespace std;


class AImpl {
  int x = 0;
  int y = 1;
  string d = "test";
};

class A {
    unique_ptr<AImpl> pimpl;
  public:
    A():pimpl{unique_ptr<AImpl>()}{}
};

int main() {
  A a;

  return 0;
}
