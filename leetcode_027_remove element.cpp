// ��Ŀ�����ǣ�����һ�������һ��valueֵ��ɾ���������е�value
// �������㣬ʣ�µ�Ԫ�ض���ԭ�������ǰ��   ����Ŀռ临�Ӷ�Ϊo(1)
// ����ֵ���޳����е�value��������Ԫ�صĴ�С
// ����˼·�ǣ���ԭ�����Ͻ��в�������Ȼ�����������α�
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0) return nums.size();
        int i=0;
        vector<int>::iterator ite = nums.begin();
        for(; ite<nums.end(); ite++){
            if(*ite != val) nums[i++] = *ite;
        }
        return i;
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
    printf("%d", A.removeElement(nums, 2));

}
