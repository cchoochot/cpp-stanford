// g++ problem2.cpp -std=c++1y

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
  int count = 0, sum = 0, min = INT_MAX, max = INT_MIN;
  string line;

  ifstream input("problem2.input");
  while (getline(input, line)) {
    istringstream iss(line.c_str());
    int val;
    if (!(iss >> val)) {
      break;
    }

    ++count;
    sum += val;
    min = std::min(min, val);
    max = std::max(max, val);
  }
  input.close();

  float avg = float(sum)/float(count);

  cout << "count: " << count << endl;
  cout << "sum: " << sum << endl;
  cout << "min: " << min << endl;
  cout << "max: " << max << endl;
  cout << "avg: " << avg << endl;

  return 0;
}
