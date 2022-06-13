#include "solution.h"
#include "util.h"
#include <unordered_map>
#include <algorithm> //lower_bound
#include <string>
#include <queue>
#include <sstream>
#include <functional>
#include <math.h>

#include "Interval.h"
using namespace sol252;
using namespace std;

/*takeaways
  - sort the intervals by the start
  - detect the overlappings
*/

bool Solution::canAttend(vector<vector<int>> &intervals)
{
  sort(begin(intervals), end(intervals), [](vector<int> &a, vector<int> &b)
       { return a[0] < b[0]; });

  auto end = 0;
  for (auto i : intervals)
  {
    if (end == 0)
    {
      end = i[1];
      continue;
    }
    /* overlapping found */
    else if (i[0] < end)
      return false;
  }

  return true;
}