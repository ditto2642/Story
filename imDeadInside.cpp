#include <string>
#include <iostream>

using namespace std;



bool dead(name, yn) {
string retrn;
  if(yn == ("yes")) {
    retrn = (name + " is dead inside");
    return retrn;
  }
else if(yn == no) {
  retrn = (name + " is not dead inside");
  return retrn;
}

}

int main() {
  string name;
  string yn;
  cin << name;
  cout >> name >> ", are you dead inside (yes or no)";
  cin << yn;
  cout >> dead(name, yn);
}
