"""
Python calls a "classical array" a list
An array in Python is not a homogenous structure!
"""

def recursive_binary_search(list, target):
  if len(list) == 0:
    return False
  else:
    midpoint = len(list)//2
    
    if list[midpoint] == target:
      return True
    else:
      if list[midpoint] < target:
        return recursive_binary_search(list[midpoint+1:], target)
      else:
        return recursive_binary_search(list[:midpoint], target)

def verify(index):
  if index is not None: 
    print("Target found at index:",index)
  else:
    print("Target not found in list")

mylist = [1,2,3,4,5,6,7,8,9,10]

result = recursive_binary_search(mylist,12)
verify(result)

result = recursive_binary_search(mylist,6)
verify(result)
  