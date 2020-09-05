#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// �ҳ������е������Ԫ��
class Solution {
public:
    int thirdMax(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<int>::iterator ite = unique(nums.begin(), nums.end());
        if(ite - nums.begin()>=3) return *(ite-3);
        else return *(ite-1);

    }
};

// �����������洢��������ֵ��ͨ���������������¡�
class Solution {
public:
    int thirdMax(vector<int>& nums){
       long long a, b, c;
        a = b = c = LLONG_MIN;
        for (auto num : nums) {
            if (num <= c || num == b || num == a) continue;
            c = num;
            if (c > b) swap(b, c);
            if (b > a) swap(a, b);
        }
        return c == LLONG_MIN ? a : c;
    }
};
//  int thirdMax(vector<int>& nums) {

}

int main()
{
    int a[3]={1,2,3};
    vector<int> nums({1,2,3});
    sort(nums.begin(), nums.end());
    vector<int>::iterator ite = unique(nums.begin(), nums.end());
    if(ite == nums.end()) printf("%d", *(nums.begin()));

}
