"""
Doc string in three quotes
Simple linear search - getting use to Python!
Returns the index position of the target if found, else return None
def => defines function
"""

def linear_search(list, target):
  for i in range(0,len(list)):
    if list[i] == target:
      return i
  return None

def verify(index):
  if index is not None: 
    print("Target found at index:",index)
  else:
    print("Target not found in list")

mylist = [1,2,3,4,5,6,7,8,9,10]

result = linear_search(mylist,12)
verify(result)

result = linear_search(mylist,6)
verify(result)
