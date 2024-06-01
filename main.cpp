#include <iostream>
#include <vector>
#include <algorithm> // for std::min and std::max

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int result=0;
        int L=0;
        int R=height.size()-1;
        while(L<R){
            result=max(result,(R-L)*min(height[L],height[R]));
            if(height[L]<height[R]){
                L++;

            }
            else {
                R--;
            }
        }
        return result;
    }
};


int main() {
    Solution solution;

    // Sample test case
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    int max_area = solution.maxArea(height);

    cout << "The maximum area is: " << max_area << endl;

    return 0;
}