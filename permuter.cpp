#include <bits/stdc++.h>

using namespace std;





/*         Below is a function which returns an address of the first term of a dynamically allocated array containing permutated result.          */


int* perm(int array[], int size_of_array){
    
    int* arr = new int[size_of_array];


for(int i =0;i<size_of_array;i++){
    arr[i] = array[i];
}
    
if(next_permutation(arr,arr+size_of_array)){
    return arr;
}
}
