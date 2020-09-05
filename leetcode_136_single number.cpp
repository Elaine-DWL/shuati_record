#include <iostream>

using namespace std;
// ��ϣ��ʵ��
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int num:nums) mp[num]++;
        for(auto num:mp){
            if(num.second == 1) return num.first;
        }
    }
};
// λ������ʵ��
class Solution{
public:
    int singleNumber(vector<int>& nums){
        int flag=0;
        for(int num:nums) flag ^= num;
        return flag;

    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
