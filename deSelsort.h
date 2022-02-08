#include <iostream>

using namespace std;

void printArr(int arr[]){
for(int i = 0; i < 8; i++){
    cout << arr[i] << " ";
}
cout << endl;
}

void valswap(int &a, int &b){
int swap = a;
a = b;
b = swap;
}

class deSelsort{
    public: 
    void selectionSort(int arr[], int size);
};
void deSelsort::selectionSort(int arr[], int size){
int key = 0;
for(int i = 0; i < size; i++){
if((i+1 <= size) && (arr[i] > arr[i+1])){
key = 1;
}
}
int index = 0;
while(key == 1){
key = 0;
for(int i = 0; i <= size; i++){
if((i+1 <= size) && (arr[i] > arr[i+1])){
key = 1;
}
}
if(key == 1){
int largest, smallest = 0;
int smallestVal = 0;
int largestVal = 0;
if(index != size-index){
int smallestVal = arr[index];
int largestVal = arr[size-index];
}
for(int i = index; i <= size-index;i++){
if(arr[i] < smallestVal){
smallest = i;
smallestVal = arr[i];
}
if(arr[i] > largestVal){
largest = i;
largestVal = arr[i];
}
}
valswap(arr[index],arr[smallest]);
valswap(arr[size-index],arr[largest]);
index++;
if(index > size-index){
    index = 0;
}
printArr(arr);
}
}
}
