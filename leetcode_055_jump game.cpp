#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//-------˼·��1��������⣬��ȻAC������ʱ�临�Ӷ���o(n*n)�������׳�ʱ
//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        vector<int> can(nums.size()+1);
//        can[0] = 1;// can[i]=1��ʾ�ܵ���λ��i
//        for(int i=0; i<nums.size(); i++){
//            if(can[i]==1){//�ܵ���λ��i�����i��ʼ��̽����Ծ��������can[]
//                int step = nums[i];
//                for(int j=1; j<=step; j++){
//                    if(i+j < nums.size())   can[i+j]=1;
//                }
//            }
//
//        }
//        if(can[nums.size()-1]==1) return true;
//        return false;
//    }
//};

//-------˼·��2��o(n)�������� cover��ʾ��ǰ�ߵ�����Զ��λ��  ���cover>=nums.size()-1 ˵���ܵ������һ��λ��
//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int cover = 0;
//        for(int i=0; i<nums.size(); i++){
//            if(cover >= i)  cover = cover<i+nums[i]?i+nums[i]:cover;
//            else break;
//        }
//        if(cover >= nums.size()-1) return true;
//        return false;
//    }
//};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
