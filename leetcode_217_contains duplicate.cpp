// �ж�һ��������ʱ�����ظ�Ԫ��
// ˼·1��ֱ�ӱ���  ����ѭ��  ����Ͳ�д��
// ˼·2 ��hash
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
//    -------��2����ϣ   18/18 36ms 36.62%
class Solution{
public:
    bool containsDuplicate(vector<int>& nums){
        unordered_map<int, int> myhash;
        for(int i=0; i<nums.size(); i++){
            if(myhash.count(nums[i])==0) myhash[nums[i]]=1;
            else return true;
        }
        return false;
    }
};
////   -------��2������stl�е�unique����
class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<int>::iterator new_end = unique(nums.begin(), nums.end());
        if(new_end < nums.end()) return true;
        return false;
    }
};
// ----��3 ��������leetcode�������㷨  4ms  �ҿ�����~~~
// [1,2,3,7,6,7] �ô����޷���ȷ�ж�
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len = nums.size();
        if(len < 2) return false;
        for(int i=1; i<len; i++) {
            for(int j=i-1; j>=0; j--) {
                if(nums[i]>nums[j]) break;
                if(nums[i]==nums[j]) return true;
            }
        }
        return false;
    }
};
int main()
{
    vector<int> a({1,2,3,7,6,7});
    Solution A;
    if(A.containsDuplicate(a)) printf("true");
    else printf("false");
}
