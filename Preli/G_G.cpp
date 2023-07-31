#include <iostream>

using namespace std;

void print_pattern(int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i <= n - 2 && j <= n - 2) {
        if (i == j || i == n - 2 - j) {
          cout << "*";
        } else {
          cout << " ";
        }
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }
}

int main() {
  int n = 5;
  print_pattern(n);
  return 0;
}
