// �����������Ǹ���һ�����ظ�Ԫ�ص������������һ��Ŀ��ֵ�����Ҹ�Ŀ��ֵ���±꣬
// ��������ڵĻ�  ���ؽ���Ԫ�ز���������
// �����˳�������Ļ� ���Ӷ���o(n)  ���������Ļ�����o(logn)
#include <iostream>

using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int p=0, q=nums.size()-1;
        int n=(p+q)/2;
        while(p<=q){
            if(target==nums[n]) return n;
            if(target > nums[n]){
                p = n+1;
            }
            else q = n-1;
            n = (p+q)/2;
        }
        return p;

    }
};
int main(){

}
