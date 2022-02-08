#include "deSelsort.h"
#include <iostream>

using namespace std;

void print(int arr[]){
for(int i = 0; i < 8; i++){
    cout << arr[i] << " ";
}
cout << endl;
}

int main(){
    int arr[] = {13, 5, 2, 25, 47, 17, 8, 21};
    deSelsort sortObj;
    print(arr);
    sortObj.selectionSort(arr, 7);
    print(arr);
    return 0;
}
