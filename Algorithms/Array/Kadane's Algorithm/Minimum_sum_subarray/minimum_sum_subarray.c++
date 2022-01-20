#include <iostream>

int min_sum_subarray(int array[], int n){
    int min_sum = INT_MAX;
    int cur_min = 0;

    for(int i = 0; i < n; i++){
        cur_min = cur_min + array[i];

        if( cur_min > min_sum){
            min_sum = cur_min;
        }
        if(cur_min > 0){
            cur_min = 0;
        }
    }
}


int main(){
    int arr_1[] = {5, 6, 7, -2}
    int arr_2[] = {2, -5, 3, -8};
    cout<<"min_sum_of_subarray of {5,6,7,-2} is "<<min_sum_subarray(arr_1,4);
    cout<<"min_sum_of_subarray of {2,-5,3,-8} is "<<min_sum_subarray(arr_2,4);
}