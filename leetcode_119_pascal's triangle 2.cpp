//��һ���118���  ���ǶԿռ临�Ӷ���Ҫ��  o(n)
//֮ǰ����һ����ά�������洢����ģ���������Ҫ���һά�������洢
//����˵�ӵ�һ�п�ʼÿ����һά�����ϡ����м�����¡�
#include <iostream>
#include <vector>

using namespace std;
class Solution{
public:
    vector<int> getRow(int rowIndex){
        vector<int> res(rowIndex+1);
        res[0]=1;
        for(int i=1; i<= rowIndex; i++){
            for(int j=rowIndex; j>0; j--){
                res[j] = res[j-1] + res[j];
            }
        }
        return res;
    }

};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
