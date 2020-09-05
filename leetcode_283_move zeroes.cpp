#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.empty()) return nums;
        for(vector<int>::iterator ite=nums.begin(); ite<nums.end(); ite++){
            if(*ite==0){
              vector<int>::iterator i2 = ite+1;
              nums.erase(ite);
              ite = i2;
              nums.push_back(0);
            }
        }
    }
};
// AC 12ms 63.01%
class Solution{
public:
    void moveZeroes(vector<int>& nums){
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0) nums[j++]=nums[i];
        }
        for(;j<nums.size();j++) nums[j]=0;
    }
};
// leetcode�����Ĵ��� ����̰�ĵ�˼�룬û�ν�ǰiλ�е����з���Ԫ�ض�Ų����ǰ�棬
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zeros = 0;
        int i;

        for (i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                zeros++;
            } else if (zeros) {
                nums[i-zeros] = nums[i];
                nums[i] = 0;
            }
        }
    }
};
// Ҳʱ̰���㷨  ͨ������ʵ�֣�ÿ�ζ���֤ĩβ��0��
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int lastNonZeroFoundAt = 0, cur = 0; cur < nums.size(); cur++) {
        if (nums[cur] != 0) {
            swap(nums[lastNonZeroFoundAt++], nums[cur]);
        }
    }
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
