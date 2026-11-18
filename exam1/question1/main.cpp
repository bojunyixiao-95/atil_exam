#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

int main()
{
    int arr[] = {78,92,65,88,70,95,82,60,100,85};

    sort(arr,arr+10,greater<int>());

    for (int i = 0;i < 10;i++)

    cout<<arr[i]<<" ";

    return 0;

}