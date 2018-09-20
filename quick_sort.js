// This function partitions given array and returns
//  the index of the pivot.
//var partition=function(array, p, r){
//    // This code has been purposefully obfuscated,
//    // as you will implement it yourself in next challenge
//    var e=array,t=p,n=r;var r=function(e,t,n){var r=e[t];e[t]=e[n];e[n]=r;};var i=t;for(var s=t;s<n;s++){if(e[s]<=e[n]){r(e,s,i);i++;}}r(e,n,i);return i;
//};

// Swaps two items in an array, changing the original array
var swap = function(array, firstIndex, secondIndex) {
    var temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
};

var partition = function(array, p, r) {
    // Compare array[j] with array[r], for j = p, p+1,...r-1
    // maintaining that:
    // array[p..q-1] are values known to be <= to array[r]
    // array[q..j-1] are values known to be > array[r]
    // array[j..r-1] haven't been compared with array[r]
    // If array[j] > array[r], just increment j.
    // If array[j] <= array[r], swap array[j] with array[q],
    // increment q, and increment j.
    // Once all elements in array[p..r-1]
    // have been compared with array[r],
    // swap array[r] with array[q], and return q.
    var q = p;
    for ( var j = p; j < r; j++ )
    {
        if ( array[j] <= array[r] )
        {
            swap(array,j,q);
            q++;
        }
    }
    swap(array,q,r);
    return q;
};



var quickSort = function(array, p, r)
{
    if ( p < r )
    {
        var q = partition(array,p,r);
        quickSort(array,p,q-1);
        quickSort(array,q+1,r);
    }
};



var array = [9, 7, 5, 11, 12, 2, 14, 3, 10, 6];
console.log("Array before sorting: " + array);
quickSort(array, 0, array.length-1);
console.log("Array after sorting:  " + array);
// Program.assertEqual(array, [2,3,5,6,7,9,10,11,12,14]);

var array = [31, 29, 23, 17, 13, 11, 7, 5, 3, 2];
console.log("Array before sorting: " + array);
quickSort(array, 0, array.length-1);
console.log("Array after sorting:  " + array);
// Program.assertEqual(array, [2,3,5,6,7,9,10,11,12,14]);
