#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int input_case=0;
    cin>>input_case;
    while(input_case--)
    {
        int total_numbers_of_data=0;
        cin>>total_numbers_of_data;
        int data_arr[total_numbers_of_data]={0};
        for(int i=0;i<total_numbers_of_data;i++)
        {
            cin>>data_arr[i];
        }
        sort(data_arr,data_arr+total_numbers_of_data);
        int output_sum=data_arr[0];
        for(int i=1;i<total_numbers_of_data-1;i++)
        {
            data_arr[i]+=data_arr[i-1];
            output_sum+=data_arr[i];
        }
        cout<<output_sum<<endl;
    }
}
