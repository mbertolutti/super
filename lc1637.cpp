// lc1637.cpp 'Widest Vertical Area Between Two Points Containing No Points'.

// space: O(log n).
// inplace.
// the stack space of the recursion of the quicksort phase of the std::sort function needs O(log n) space.
// std::sort uses introsort which is a hybrid of quicksort, heapsort and insertionsort.

// time: O(n log n).
// O(n log n): sorting of the inner vectors of the two dimensional vector by comparing their x values via lambda function.
// O(n): finding the widest area by iterating through the sorted values.

#include <fmt/core.h>
#include <vector>
#include <algorithm>

using namespace std;

int maxWidthOfVerticalArea(vector<vector<int>>& points)
{
    int widest_area = 0;
    sort(points.begin(), points.end(), [](const vector<int>& x, const vector<int>& y){return x[0] < y[0];});
    for (size_t i = 1; i < points.size(); ++i)
    {
        int current = points[i][0] - points[i - 1][0];
        if (current > widest_area)
        {
            widest_area = current;
        }
    }
    return widest_area;
}

int main()
{
    vector<vector<int>> vec = { {3, 1},
                                {9, 0},
                                {1, 0},
                                {1, 4},
                                {5, 3},
                                {8, 8}};

    fmt::print("{}{}{}","maxWidthOfVerticalArea: ", maxWidthOfVerticalArea(vec), ".\n\n");
}
