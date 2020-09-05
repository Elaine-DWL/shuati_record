#include <iostream>
#include <vector>
using namespace std;
// �ⷨ1 �Լ�д��̰���㷨
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int p1=0, p2=0;
        int maxlength = 0;
        while(p2<n){
            if(nums[p2]==0 && nums[p1]==1){
                p1=p2;
            }
            if(nums[p1]==0 && nums[p2]==0){
                p1++;p2++;
                continue;
            }
            maxlength = p2-p1+1>maxlength?p2-p1+1:maxlength;
            p2++;
        }
        return maxlength;
    }
};
//  Ҳ��̰��  ���˼·�򵥶��˰�������
class Solution{
public:
    int findMaxConsecutiveOnes(vector<int>& nums){
        int cnt = 0;//����1���ۼӼ���
        int cur_maxlength = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) cnt++;
            else cnt=0;
            cur_maxlength = max(cnt, cur_maxlength);
        }
        return cur_maxlength;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
