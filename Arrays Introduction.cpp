#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    int arr[n],i,j;
    for (i=0;i<n;i++)
    {   
    scanf("%d",&arr[i]);
    }
    for (j=n-1;j>=0;j--){
        cout<<arr[j]<<" ";
    }
    return 0;
}
