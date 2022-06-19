#!/usr/bin/python3
"""
Contains the function us_same_Class
"""


def is_same_class(obj, a_class):
    """return true if obj is the exact class a_class, if not false"""
    return (type(obj) == a_class)
