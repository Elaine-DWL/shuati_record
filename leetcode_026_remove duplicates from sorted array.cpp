//��Ŀ�����ǣ����һ���������е����ظ�Ԫ�صĸ��� �ռ临�Ӷȱ�����o(1)
//ע�⵽����Կռ临�Ӷ���Ҫ�󡣶�����Ŀ����˼�ǣ������ظ�����ֱ�Ӱ�˳�������������ǰ��
//�����ҶԱ����˼·�ǣ���ԭ���������������α꣬һ�����ڰ�˳��洢���ظ����У�һ����˳�����ԭ����
//ʱ�临�Ӷ���o(n)
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0) return 0;
        int len=1, i=0;
        vector<int>::iterator ite = nums.begin()+1;
        for(;ite<nums.end();ite++){
            if(nums[i]!=*ite){
                len++;
                nums[i+1] = *ite;
                i++;
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
