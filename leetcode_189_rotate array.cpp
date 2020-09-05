#include <iostream>
#include <vector>
using namespace std;
// ����1 insert��erase����
class Solution{
public:
    void rotate(vector<int>& nums, int k){
        for(int i=0; i<k; i++){
            nums.insert(nums.begin(), *(nums.end()-1));
            nums.erase(nums.end()-1);
        }
    }
};
// ��reverse������ע�������k���п��ܴ�������Ĵ�С
class Solution{
public:
    void rotate(vector<int>& nums, int k){
        k = k%nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin()+k, nums.end());
        reverse(nums.begin(), nums.begin()+k);
    }
};
// �ÿռ任ʱ��
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       if(k<1 || k%nums.size() == 0) return;
        vector<int> temp(nums.size());
        k = k%nums.size();
        for(int i=0; i<k; i++){
            temp[i] = nums[nums.size()-k+i];
        }
        for(int i=k; i<nums.size(); i++){
            temp[i] = nums[i-k];
        }
        nums = temp;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
