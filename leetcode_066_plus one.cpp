#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> plusOne(vector<int>& digits){
        int index = digits.size()-1;
        int jin = 1;
        int cur = 0;
        for(int i=index; i>=0; i--){
            if(jin != 0){// ��λ������0
                cur = (1+digits[i])%10;
                jin = (1+digits[i])/10;
                digits[i] = cur;
                if(jin == 0) return digits;//��ǰ��������λ  ֱ�ӷ��ؽ��
                if(i==0){// ��ǰ�������Ҫ��λ�Ļ���Ӧ��������������ǰ���������
                    digits.insert(digits.begin(), 1);
                        return digits;
                }
            }
            else return digits;
        }
    }
};
// ----��������������������һ�ֺ���˼·�Ľⷨ
//void plusone(vector<int> &digits)
//{
//	int n = digits.size();
//	for (int i = n - 1; i >= 0; --i)
//	{
//		if (digits[i] == 9)
//		{
//			digits[i] = 0;
//		}
//		else
//		{
//			digits[i]++;
//			return;
//		}
//	}
//		digits[0] =1;
//		digits.push_back(0);
//
//}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
//            if(i==index){
//                cur = (1+digits[i])%10;
//                jin = (1+digits[i])/10;
//                digits[i] = cur;
//                if(jin == 0) return digits;
//            }
//            else{
//                if(jin!=0){
//                    cur = (jin+digits[i])%10;
//                    jin = (jin+digits[i])/10;
//                    digits[i] = cur
//                    if(jin==0) return digits;
//                    if(i==0){//�����ٽ�λ��  ֱ����ǰ�����1
//                        digits.insert(0, 1);
//                        return digits
//                    }
//                }
//            }
