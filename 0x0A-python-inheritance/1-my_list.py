#!/usr/bin/python3
"""MyList is a class that inherits from list"""


class MyList(list):
    """initialize the class"""
    def __init__(self):
        """initialize the object"""
        super().__init__()

    def print_sorted(self):
        """prints the sorted list"""
        print(sorted(self))
