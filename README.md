# Longest-Palindromic-Substring


Given a string S, find the longest palindromic substring in S. You may assume that the maximum length of S is 1000, and there exists one unique longest palindromic substring.

My idea:

avoid to using string append or string addition, because it is not effiency.

use two pointer to point to the beginning position and ending position of the palindromic substring. then you can use substr(begin,end)
