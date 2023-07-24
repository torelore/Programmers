#include <string>
#include <vector>

using namespace std;

int ArrSum(vector<int> arr){
    int sum = 0;
    
    for(int num : arr){
        sum += num;
    }
    
    return sum;
}

int solution(vector<int> arr1, vector<int> arr2) {
    int arr1Size = arr1.size();
    int arr2Size = arr2.size();
    
    if(arr1Size == arr2Size){
        return ArrSum(arr1) == ArrSum(arr2) ? 0 : ArrSum(arr1) > ArrSum(arr2) ? 1 : -1;
    }  
    
    if(arr1Size > arr2Size)
        return 1;
    
    return -1;
}