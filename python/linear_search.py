def linear_search(list,target):
    for i in range(0,len(list)):
        if list[i] == target:
            return i
    return None

if __name__ == "__main__":
    number = [1,2,3,4,5,6,7]
    index = linear_search(number,9)
    if index is not None:
        print("Target found at : ",index)
    else:
        print("Target not found in list")

