//�������ʵ��һ�������ַ������Һ����������ַ���b�Ƿ����ַ���a�г��֣�
//�ǵĻ����ص�һ�γ��ֵ�λ���±꣬�������򷵻�-1 ����ַ���b�ǿյľͷ���0
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()) return 0;
        if(haystack.empty()) return -1;
        int len = needle.size();
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i]==needle[0]){
                string str = haystack.substr(i, len);
                if(str==needle) return i;
            }
        }
        return -1;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
