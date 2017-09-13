#include<iostream>
#include<stdio.h>
#include<vector>  //for tolower
using namespace std;
int main()
{
    int input_case=0;
    string arr="!@#$%^&*()_++`1234567890-=={}||qwertyuiop[]\\:asdfghjkl;''<>??zxcvbnm,.//";
    cin>>input_case;
    getchar();
    while(input_case--)
    {
        string input;
        getline(cin,input);
        for(int i=0;i<input.size();i++)
        {
            input[i]=tolower(input[i]);
            if(input[i]=='\\'||input[i]=='"'||input[i]=='+'||input[i]=='='||input[i]=='|'||input[i]=='\''||input[i]=='/'||input[i]=='?'||input[i]==' ')
            {
                cout<<input[i];
            }
            else if(input[i]==':')
            {
                cout<<'"';
            }
            else
            {
                cout<<arr[arr.find(input[i])+1];
            }
        }
        cout<<endl;
    }
}
