from sys import maxsize

def min_subarray_sum(array):
    min_sum = maxsize
    cur_sum = 0
    
    for num in array:
        cur_sum += num
        if cur_sum < min_sum:
            min_sum = cur_sum
        if cur_sum > 0:
            cur_sum = 0
    return min_sum
    






if __name__=="__main__":
    arr_1 = [5, 6, 7, -2,]
    arr_2 = [2, -5, 3, -8]
    
    print("for array ",arr_1,"\nMin sum of a subarray is ", min_subarray_sum(arr_1))
    print("for array ",arr_2,"\nMin sum of a subarray is ", min_subarray_sum(arr_2))