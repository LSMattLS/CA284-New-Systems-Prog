# Imports
import sys
from random import randint


# The below code has been simplified to its very basic elements so it can be easily read


def generate():

    # Ask user for desired list size
    size = int(input("Enter desired size of data set: "))
    print()

    # Create an empty list to store random integers
    nums1, nums2, nums3 = [], [], []


    # ---------------------- Unsorted random integers ----------------------------

    # We want to keep length of list relatively short so its easier to work with
    # So we use a while loop which will fail when length of list reaches 10
    while len(nums1) < size:
        # Generate random integer using randint() function
        # Range is between 0 & 1050 just so we can get a mix of 1/2/3/4 digit integers
        # Finally add that random integer to the list we created
        nums1.append(randint(0, 1050)) 
    
    # Output message
    print("Random:", stringify(nums1))

    # --------------------- Sorts only first half ---------------------------

    # Identify half way point of list
    half_point = size // 2

    # Create an empty list which'll store the first half of original list
    decoy = []

    # Retrieve values in first half of original list
    for item in range(0, half_point):
        decoy.append(nums1[item])

    # Sort new list and append it to a fresh list
    for item in sorted(decoy):
        nums2.append(item)
    
    # Add remaining unsorted values from original list to new list
    for num in nums1:
        if num not in decoy:
            nums2.append(num)

    # Eg. 
    # - Original list = [4, 67, 43, 90, 2, 12]
    # - Decoy = [4, 67, 43]
    # - Sorted Decoy = [4, 43, 67]
    # - nums2 = [4, 43, 67, 90, 2, 12]

    # Output Message
    print("Half sorted, half unsorted:", stringify(nums2))

    # ---------------------- Sorted in reverse order ------------------------

    # Sort original random values list
    # Get size of that list
    nums1, length = sorted(nums1), len(nums1) - 1
    
    # Loop through sorted list in reverse and add to new list so new list is reverse sorted
    for num in range(length, -1, -1):
        nums3.append(nums1[num])

    # Eg.
    #   original list = [4, 67, 43, 90, 2, 12]
    #   sorted original list = [2, 4, 12, 43, 67, 90]
    #   new list = [90, 67, 43, 12, 4, 2]

    # Output Message
    print("Reverse sorted:", stringify(nums3))


    # --------------------- only even numbers sorted -------------------------

    # Create dictionary to keep record of even number index
    # Create list to store the even numbers
    even_pos, even_val = {}, []

    # Loop through and add position to dict and value to list
    for item in range(0, length):
        if nums1[item] % 2 == 0:
            even_pos[nums1[item]] = item
            even_val.append(nums1[item])

    # Sort values in list and retrieve the indexes of even values
    even_val, even_pos = sorted(even_val), list(even_pos.values())


    # Replace the values in the original list
    for index in range(0, len(even_pos)):
        nums1[even_pos[index]] = even_val[index]

    # Eg.
    # Original list = [5, 7, 9, 4, 3, 2, 6]
    # even_val = [4, 2, 6]
    # even_pos = {4: 3, 2: 5, 6: 6}
    # final list = [5, 7, 9, 2, 3, 4, 6]

    # Output Message
    print("Only Even numbers sorted:", stringify(nums1))
    
    # --------------------- Already sorted -------------------------
    nums1 = sorted(nums1)
    print("Already sorted:", stringify(nums1))



# Function to convert list into string format
def stringify(lis):
    string = ""
    
    for item in lis:
        string += str(item) + " "
    
    return string

# Test
generate()