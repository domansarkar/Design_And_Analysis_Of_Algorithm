"""
Question-1: Given an array of nonnegative integers, design a linear algorithm and implement it using a program to find whether a given key element
is present in the array or not. Also, find the total number of comparisons for each input case. (Time Complexity = O(n), where n is the size of 
input). 

"""
def searchInArray(array, value):
    for i in array:
        if i == value:
            return "Element found at " + str(array.index(value))
    return "The element does not exist in this array"


if __name__=="__main__":
    arr = []
    n = int(input("Enter element size : "))
    for i in range(0,n):
        arr.append(int(input("Enter element : ")))

    num = int(input("Enter Search Element : "))
    print(searchInArray(arr, num))

