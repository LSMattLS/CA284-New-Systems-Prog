# Imports
import sys
from random import randint


def generate():
    # Create an empty list to store random integers
    nums = []

    # We want to keep length of list relatively short so its easier to work with
    # So we use a while loop which will fail when length of list reaches 10
    while len(nums) < 10:
        # Generate random integer using randint() function
        # Range is between 0 & 1050 just so we can get a mix of 1/2/3/4 digit integers
        # Finally add that random integer to the list we created
        nums.append(randint(0, 1050)) 

    # Print list
    print(nums)


# Test
generate()