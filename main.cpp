#include <iostream>
#include <tuple>
#include <vector>
#include <string>
#include "solution.h"
#include "interval.h"
#include "util.h"

using namespace std;
using namespace sol252;

/* Example 1:
Input: [[0,30],[5,10],[15,20]]
Output: false
*/
tuple<vector<vector<int>>, bool>
testFixture1()
{
  auto input = vector<vector<int>>{{0, 30}, {5, 10}, {15, 20}};

  return make_tuple(input, false);
}

/* Example 2:
Input: [[7,10],[2,4]]
Output: true.
*/
tuple<vector<vector<int>>, bool>
testFixture2()
{
  auto input = vector<vector<int>>{{7, 10}, {2, 4}};

  return make_tuple(input, true);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see : " << get<1>(f) << endl;
  Solution sol;
  cout << sol.canAttend(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  cout << "Expect to see : " << get<1>(f) << endl;
  Solution sol;
  cout << sol.canAttend(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}