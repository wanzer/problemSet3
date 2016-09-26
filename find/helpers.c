/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    int middle;
    int low=0;
    int high=n;
        while(low<=high){
        middle=(low + high)/2;
        if (value==values[middle]) {
                return true;
            }
        else if (value<values[middle]) {
                high=middle-1;
            }
        else {
                low=middle+1;
            }
        } 
        return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    int hold;
     for (int j=1; j<n; j++) {
         for (int i=0; i<n-1; i++) {
             if (values[i]>values[i+1]){
                 hold=values[i];
                 values[i]=values[i+1];
                 values[i+1]=hold;
                 }
             }
         }
    return;
}
