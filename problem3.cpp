#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

#include <vector>
#include <cctype>

using namespace std;

void CountLetters(string filename);

int main(int argc, char const *argv[]) {

  CountLetters("problem3.input");

  return 0;
}

void CountLetters(string filename) {
  vector<unsigned int> vec(26, 0);

  // read file content
  ifstream input("problem3.input");
  char c;
  while (input.get(c)) {
    int x = tolower(c);
    if ('a' <= x && x <= 'z') {
      ++vec[x - 'a'];
    }

  }

  unsigned int i = 0;
  for (vector<unsigned int>::iterator it = vec.begin(); it != vec.end(); ++it) {
    cout << char(i++ + 'a') << ": " << *it << endl;
  }

  input.close();
}
