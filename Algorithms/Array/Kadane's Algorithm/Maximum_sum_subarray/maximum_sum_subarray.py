from sys import maxsize

def max_subarray_sum(array):
    max_sum = - maxsize - 1
    cur_sum = 0
    
    for num in array:
        cur_sum += num
        if cur_sum > max_sum:
            max_sum = cur_sum
        if cur_sum < 0:
            cur_sum = 0
    return max_sum
    

#driver code for python file
if __name__=="__main__":
    arr_1 = [5,6,-12,12,2,-1]
    arr_2 = [-2,-3,-8,-5,-20,-15]
    print("for array ",arr_1,"\nMax sum of a subarray is ", max_subarray_sum(arr_1))
    print("for array ",arr_2,"\nMax sum of a subarray is ", max_subarray_sum(arr_2))