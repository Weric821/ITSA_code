#include<iostream>
#include<stdio.h>
#include<map>
#include<sstream>
using namespace std;
int main()
{
    int input_case=0;
    cin>>input_case;
    getchar();
    while(input_case--)
    {
        string input;
        getline(cin,input);
        map <string,int> mp;
        map <string,int>::iterator iter;
        for(int SIZE=2;SIZE<input.size();SIZE++)    //每組片段大小，題目要求最小片段大小為2字元
        {
            for(int j=0;j<=input.size()-SIZE;j++)   //選擇開始點
            {
                stringstream ss;
                for(int k=0;k<SIZE;k++)             //從j開始數SIZE個一組
                {
                    ss<<input[j+k];
                }
                string reg;
                ss>>reg;
                ss.clear();
                mp[reg]++;          //先以mp讓之以字母ascii排序，並統計字串總數
            }
        }
        multimap <int,string> mp2;
        multimap <int,string>::iterator iter2;
        for(iter=mp.begin();iter!=mp.end();iter++)
        {
            mp2.insert(make_pair((-1)*(iter->second),iter->first)); //以mp2以總數由大到小排序
        }
        int MAX=0;
        for(iter2=mp2.begin();iter2!=mp2.end();iter2++)
        {
            if(iter2==mp2.begin())
            {
                MAX=iter2->first;      //最大總數
                cout<<(-1)*MAX;
            }
            if(iter2->first==MAX)
            {
                cout<<" "<<iter2->second;
            }
            else
            {
                cout<<endl;
                break;
            }
        }
    }
}
