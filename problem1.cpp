#include <iostream>
#include <string>

using namespace std;

string CensorString1(string text, string remove);
void CensorString2(string &text, string &remove);

int main() {
  string text1 = "Stanford University";
  string remove1 = "nt";

  string text2 = "Llamas like to laugh";
  string remove2 = "la";

  string r1 = CensorString1(text1, remove1);
  CensorString2(text1, remove1);

  string r2 = CensorString1(text2, remove2);
  CensorString2(text2, remove2);

  cout << r1 << endl;
  cout << text1 << endl;

  cout << r2 << endl;
  cout << text2 << endl;

  return 0;
}

string CensorString1(string text, string remove) {
  string str = text;
  CensorString2(str, remove);
  return str;
}

void CensorString2(string &text, string &remove) {
  for (int i = 0, len = text.length(); i < len; ++i) {
    const size_t found = remove.find(text[i]);
    if (found != string::npos) {
      text.erase(i, 1);
      --len;
      --i;
    }
  }
}
