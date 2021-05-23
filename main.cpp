Program:
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
bool areEqual(char arr1[], char arr2[], int n, int m)
{
    // If lengths of array are not equal means
    // array are not equal
    if (n != m)
        return false;
 
    // Sort both arrays
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
 
    // Linearly compare elements
    for (int i = 0; i < n; i++)
        if (toupper(arr1[i] )!= toupper(arr2[i]))
            return false;
 
    // If all elements were same.
    return true;
}
int main()
{  char arr1[] = { 'H','E','L','L' };
    char arr2[] = { 'h','e','l','l','o' };
    int n = sizeof(arr1) / sizeof(char);
    int m = sizeof(arr2) / sizeof(char);
 
    if (areEqual(arr1, arr2, n, m))
        cout << "Same";
    else
        cout << "No Same";
    return 0;}
