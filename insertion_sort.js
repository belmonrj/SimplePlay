var insert = function(array, rightIndex, value)
{
    for ( var i = rightIndex; i >= 0 && array[i] > value; i-- )
    {
        array[i+1] = array[i];
    }
    array[i+1] = value; // hmm why didn't i go out of scope here?
};


var insertionSort = function(array)
{
    //process.stdout.write("doing something...\n");
    //process.stdout.write("i is " + i + "\n"); // undefined (that's good, out of scope from other function)
    for ( var i = 1; i < array.length; i++ )
    {
        //process.stdout.write("i is " + i + "\n");
        insert(array,i-1,array[i]);
    }
};

// --- test insert

var array = [3, 5, 7, 11, 13, 2, 9, 6];

process.stdout.write("Array starting point is:  " + array + "\n");

insert(array, 4, 2);
process.stdout.write("Array after inserting 2 at index 4:  " + array + "\n");
process.stdout.write("Array should be:                     2,3,5,7,11,13,9,6\n");

insert(array, 5, 9);
process.stdout.write("Array after inserting 9 at index 5:  " + array + "\n");
process.stdout.write("Array should be:                     2,3,5,7,9,11,13,6\n");

insert(array, 6, 6);
process.stdout.write("Array after inserting 6 at index 6:  " + array + "\n");
process.stdout.write("Array should be:                     2,3,5,6,7,9,11,13\n");

// --- test insertionSort

var array = [22, 11, 99, 88, 9, 7, 42];

process.stdout.write("Array starting point is:  " + array + "\n");
insertionSort(array);
process.stdout.write("Array ending point is:    " + array + "\n");
process.stdout.write("Sorted array should be:   7,9,11,22,42,88,99\n");

var array = [22, 11, 99, -88, 9, 7, 42];

process.stdout.write("Array starting point is:  " + array + "\n");
insertionSort(array);
process.stdout.write("Array ending point is:    " + array + "\n");
process.stdout.write("Sorted array should be:   -88,7,9,11,22,42,99\n");

var array = [17, 13, 11, 7, 5, 3, 2];

process.stdout.write("Array starting point is:  " + array + "\n");
insertionSort(array);
process.stdout.write("Array ending point is:    " + array + "\n");
process.stdout.write("Sorted array should be:   2,3,5,7,11,13,17\n");


