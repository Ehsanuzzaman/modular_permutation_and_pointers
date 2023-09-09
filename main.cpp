#include <bits/stdc++.h>
#include "factorial.h"
#include "permuter.h"




using namespace std;


int main(int argc, char* argv[]){

int array[] = {1,2,3}; // Defining an array.
int size = sizeof(array)/sizeof(array[0]);




int* p = array;
for(int i = 0; i<fact(size);i++){
    for(int j=0;j<size;j++){
        std::cout<<p[j]<<"  "; //  Printing the permutated terms for every steps.
    }
    cout<<endl;
    p=perm(p,size); // Updating the array for next evaluation
}





delete [] p;








return 0;

}




















