#pragma once


template <typename ArrayLike, typename T>
int ternary_search(const ArrayLike& arr, const T& value, int low, int high) {
   //make sure that a valid array is being searched.
   
   int tripoint1 = ((high - low) / 3) + low; // will return a truncated 1/3 of arraysize
   int tripoint2 = (((high - low) / 3) * 2) + low; // doubles that
   
   if (high < low)
   {
      return -1;
   }

   if (arr[tripoint1] == value)
      return tripoint1;
   if (arr[tripoint2] == value)
      return tripoint2;

   // first third of whats left
   if (value < arr[tripoint1])
   {
      // ternary_search(arr, value, low, tripoint1 - 1);
      ternary_search(arr, value, low, tripoint1 - 1);
   }
   // 2nd third of whats left
   else if (value < arr[tripoint2]){
      //ternary_search(arr, value, tripoint1 + 1, tripoint2 - 1);
      ternary_search(arr, value, tripoint1 + 1, tripoint2 - 1);
      // last third of whats left
   } else {
      //ternary_search(arr, value, tripoint2 + 1, high);
      ternary_search(arr, value, tripoint2 + 1, high);
   } 
}

template <typename ArrayLike, typename T>
int binarySearch(const ArrayLike& arr, const T& value, int low, int high) {
   int middle = ((high + low) / 2);
   if (high < low)
   {
      return -1;
   }
   if (arr[middle] == value)
      return middle;
   
   if (arr[middle] < value) {
      binarySearch(arr, value, middle + 1 , high);
   } 
   else {
      binarySearch(arr, value, low, middle - 1);
   }
}