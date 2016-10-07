#include <string>
#include <iostream>

using namespace std;



string dead(string name, string yn) {
string retrn;
  if(yn == ("yes")) {
    retrn = (name + " is dead inside");
    return retrn;
  }
else if(yn == ("no")) {
  retrn = (name + " is not dead inside");
  return retrn;
}

}

int main() {
  string name;
  string yn;
  cout << "what is you name?" << endl;
  cin >> name;
  cout << name << ", are you dead inside (yes or no)" << endl;
  cin >> yn;
  cout << dead(name, yn);
}
