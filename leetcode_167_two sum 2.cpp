//��һ�������������  �ҳ�����Ԫ�أ����ǵĺ�Ҫ����Ŀ��ֵ������������Ԫ�ص��±�

#include <iostream>
#include <vector>
using namespace std;
// �����Ҹտ�ʼ���뷨������find��������ȫ���ڵ���stl���������ٶ��ر��� 288ms
class Solution{
public:
    vector<int> twoSum(vector<int>& numbers, int target){
        for(int i=0; i<numbers.size(); i++){
            int p1 =find(numbers.begin()+i+1, numbers.end(),target-numbers[i]) - numbers.begin();
            if(p1 > 0 && p1!= numbers.size()){
                return vector<int>{i+1, p1+1};
            }
        }
    }
};


//�뵽��hash����  �տ�ʼ�����������洢��ϣ�� ���ǣ�û�а취������  ����Ҫ����map���洢��ϣ��
// ac�ˣ��ٶ���4ms   �Ѿ��ܿ���
class Solution{
public:
    vector<int> twoSum(vector<int>& numbers, int target){
        map<int, int> myhash;
        for(int i=0; i< numbers.size(); i++){// ������ϣ��
            myhash[numbers[i]] = i+1;
        }
        for(int i=0; i<numbers.size(); i++){
            if(myhash.count(target-numbers[i]) != 0){
                return vector<int>{i+1, myhash[target-numbers[i]]}��
            }
        }
    }
};
//  �����ַ������������������� ���ַ��������׿���  �������Լ�������벻����
// ����ٶȺ������ϣ����  ��������ռ临�Ӷȱ������С
class Solution{
public:
    vector<int> twoSum(vector<int>& numbers, int target){
        int p1=0, p2=numbers.size()-1;
        while(numbers[p1] + numbers[p2] != target){
            if(numbers[p1] + numbers[p2] < target) p1++;
            else p2--;
        }
        return vector<int>{p1+1, p2+1};
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
