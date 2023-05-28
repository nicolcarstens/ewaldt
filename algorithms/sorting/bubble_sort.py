"""
Simple example of bubble sort in python
"""

def bubble_sort(list):
    n = len(list)

    for i in range(n):
        for j in range(0, n - i - 1):
            if list[j] > list[j + 1]:
                list[j], list[j + 1] = list[j + 1], list[j]

    return list

# Test the function
numbers = [1, 5, 7, 90, 54, 23]
sorted_numbers = bubble_sort(numbers)
print(sorted_numbers)