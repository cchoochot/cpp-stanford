// g++ problem2.cpp -std=c++1y
// git push -u origin master

#include <string>
#include <sstream>
#include <fstream>
#include <iostream>

#include <cmath>
#include <climits>
#include <algorithm>

using namespace std;

struct STATISTIC_DATA {
  int min;
  int max;
  int count;
  int sum;
  float avg;
};

int main() {
  STATISTIC_DATA stat;
  stat.count = 0;
  stat.sum = 0;
  stat.min = INT_MAX;
  stat.max = INT_MIN;

  ifstream input("problem2.input");
  string line;
  while (getline(input, line)) {
    istringstream iss(line.c_str());
    int val;
    if (!(iss >> val)) {
      break;
    }

    ++stat.count;
    stat.sum += val;
    stat.min = std::min(stat.min, val);
    stat.max = std::max(stat.max, val);
  }
  input.close();

  stat.avg = float(stat.sum) / float(stat.count);

  cout << "stat.count: " << stat.count << endl;
  cout << "stat.sum: " << stat.sum << endl;
  cout << "stat.min: " << stat.min << endl;
  cout << "stat.max: " << stat.max << endl;
  cout << "stat.avg: " << stat.avg << endl;

  return 0;
}
