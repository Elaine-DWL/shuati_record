//������026��࣬��Ȼ���������飬����Ŀռ临�Ӷȱ�����o(1)
//ֻ������Ҫ�����ԭ��������ĳ��Ԫ�ظ���������2����ֻ����2����ԭ��ֻ��һ���Ļ������Ǳ���һ��
//�ⷨ��026���һ��˼·����Ȼ���������α꣬������������abc��ֻ����a=!b����b!=c������£����ܰ�c����
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<= 2) return nums.size();
        int len=2, i=1;
        vector<int>::iterator ite = nums.begin()+2;
        for(;ite<nums.end();ite++){
            if(nums[i-1]!=nums[i] || nums[i]!=*ite){
                nums[i+1] = *ite;
                i++;
                len++;
            }
        }
        return len;

    }
};

int main()
{
    vector<int> nums;
    int t;
    while(scanf("%d", &t)!=EOF){
        nums.push_back(t);
    }
    Solution A;
    printf("%d",A.removeDuplicates(nums));
}
