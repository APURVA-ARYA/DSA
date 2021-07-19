#include <iostream>
using namespace std;


int subarray(int a[],int l) {
   int maxsum = 0;
   int cursum = 0;
   for(int i = 0; i <l; i++){

       cursum=cursum+a[i];
       
       if(cursum>maxsum){
           maxsum=cursum;
       }
       if(cursum<0){
           cursum=0;
       }
    
   }
   return maxsum;
}
int main() {
//    cout << "Enter the array length: ";
//    int l;
//    cin >> l;
//    int arr[l];
  
//    cout << "Enter the elements of array: ";
//    for (int i = 0; i <l; i++) {
//       cin >> arr[i];
//    }
 int a[] = {-2, -3, -4, -1, -2, -1, 5, -3};
   cout << "The Maximum Sum is: "<<subarray(a,8) << endl;
   return 0;
}
