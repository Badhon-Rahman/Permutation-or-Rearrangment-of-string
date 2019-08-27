#include <bits/stdc++.h>
using namespace std;

void Permutation(string str, int len, int strSize)
{
    if (len == strSize){
        cout << str << endl;
    }
    else{
        for (int i = len; i <= strSize; i++){
            swap(str[len], str[i]);
            Permutation(str, len + 1, strSize);
            swap(str[len], str[i]);
        }
    }
}

int main()
{
    string str = "ABCDEFGH";
    int strSize = str.length();
    Permutation(str, 0, strSize - 1);
    return 0;
}

