// ��һ��string���ַ������һ�����ʵĳ���
#include <iostream>
#include <string>
using namespace std;
//------˼·(1)������string����غ������տ�ʼֻ���ǵ�����ͨ���("","aa bbb"��"aa")�����Ծ������ҵ����һ���ո��λ�ã�Ȼ�����ַ�������-�ո�Ϊλ��-1
//------         �����Ļ���©����("aa   ","aa  bbb  ")������������
//class Solution {
//public:
//    int lengthOfLastWord(string s) {
//        int tail = s.find_last_not_of(' ');//�ҵ����һ���ǿո��λ��
//        if(tail == -1) return 0;
//        //��tail��ʼ��������ҵ�һ���ո�
//        int head = s.rfind(' ',tail);
//        if(head == -1) return tail+1;
//        return tail-head;
//    }
//};

//-------˼·(2):ֱ�Ӷ�������в���
class Solution{
    int lengthOfLastWord(string s){
        if(s.size()==0) return 0;
        int tail = s.size()-1;
        while(tail>0 && s[tail]==' ') tail--;
        int head = tail;
        while(head>=0 && s[head]!=' ') head--;
        return tail-head;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
