#include<iostream>
#include<algorithm>
using namespace std;
int *heap_arr;
int number_of_nodes=0;
void bottom_up(int node_code)
{
    if(node_code!=1&&heap_arr[node_code]<=heap_arr[node_code/2])    //target_node<father_node
    {
        swap(heap_arr[node_code],heap_arr[node_code/2]);
        bottom_up(node_code/2);  //current father_node is target node
    }
}
void show_heap()    //show array
{
    for(int i=1;i<=number_of_nodes;i++)
    {
        cout<<heap_arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int input_case=0;
    cin>>input_case;
    while(input_case--)
    {
        cin>>number_of_nodes;
        heap_arr=new int[number_of_nodes+1];
        heap_arr[0]=0;
        for(int i=1;i<=number_of_nodes;i++)
        {
            cin>>heap_arr[i];
            bottom_up(i);
        }
        show_heap();
        sort(heap_arr,heap_arr+number_of_nodes+1);
        show_heap();
    }
}
