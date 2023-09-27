#include <iostream>

using namespace std;

int main() {
  string input;
  cout << "Enter a value: ";
  cin >> input;
  bool Numeric = true;
  for (char c : input) {
    if (c < '0' || c > '9') {
      Numeric = false;
      break;
    }
  }

  if (Numeric) {
    cout<< " Is Numeric" << endl;
  } else {
    cout<< " Is Not Numeric" << endl;
  }

  return 0;
}
