#include <iostream>
using namespace std;


int max_sum_subarray(int array,int n){
    int max_sum = INT_MIN;
    int cur_max = 0;

    for(int i = 0; i < n; i++){
        cur_max = cur_max + array[i];

        if( cur_max > max_sum){
            max_sum = cur_max;
        }
        if(cur_max < 0){
            cur_max = 0;
        }
    }
}

int main(){
    int arr_1[] = {5,6,-12,10,2,-1};
    int arr_2[] = {-5,-6,-7,-1,0};

    cout<<max_sum_subarray(arr_1,6);
    cout<<max_sum_subarray(arr_2,5);

    return 0; 
}
