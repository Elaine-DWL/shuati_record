// ��121��һ����������Ҫ���ǿ��Խ��ж������ͳ��ۣ�
// ��ÿ�������µ�����֮ǰ����������е����Ӷ�����
// �Ҹտ�ʼ��˼·�ǣ�������еļ�Сֵ�ͼ���ֵ��Ȼ�������ߵļ�Сֵ��ʼ��ͳ�����м���ֵ-��Сֵ�ĺ�
// д�����ʱ�����������ֵ�ͼ�Сֵ�Ĳ���ȽϷ�����
// �������������д��еĽ����ǣ�����a<b<c<d����ôd-a=(d-c)+(c-b)+(b-a);
// ����˵��Ҫ�󼫴�ֵ�ͼ�Сֵ֮��  ����ֱ��ͳ�Ƶ������������Ԫ�ز�֮��
#include <iostream>
#include <vector>
using namespace std;
class Solution{
public:
    int maxProfit(vector<int>& prices){
        if(prices.size()/2==0) return 0;
        int maxprofit = 0;
        for(int i=1; i<prices.size(); i++){
           maxprofit += prices[i]>prices[i-1]?prices[i]-prices[i-1]:0;
        }
        return maxprofit;
    }
};


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
