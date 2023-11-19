#!/usr/bin/python3
import sys

"""Function to look up available attributes and methods of an object"""


def lookup(obj):
    """Return a list of attributes and method"""
     return dir(obj)
