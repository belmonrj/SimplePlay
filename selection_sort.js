// swap function
var swap = function(array, firstIndex, secondIndex)
{
    var temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
};

// find minimum function
var indexOfMinimum = function(array, startIndex)
{
    var minValue = array[startIndex];
    var minIndex = startIndex;

    for(var i = minIndex + 1; i < array.length; i++)
    {
        if(array[i] < minValue)
        {
            minIndex = i;
            minValue = array[i];
        }
    }

    return minIndex;
};

// function to sort using swap and minimum finder
var selectionSort = function(array)
{
    var minIndex;
    //process.stdout.write("Starting position:  " + array + "\n");
    process.stdout.write("Iteration 0:  " + array + "\n");
    for ( var i = 0; i < array.length; i++ )
    {
        minIndex = indexOfMinimum(array,i);
        swap(array,minIndex,i);
        process.stdout.write("Iteration " + (i+1) + ":  " + array + "\n");
    }
    //process.stdout.write("Ending position:  " + array + "\n");
};

//var array = [22, 11, 99, 88, 9, 7, 42];
//selectionSort(array);

//var array = [22, 11, 99, 88, 9, 7, -42];
//selectionSort(array);

// just playing around to see which lists sort the fastest vs the slowest

process.stdout.write("-------------------------\n");

var array = [1,2,3,4,5,6];
selectionSort(array);

process.stdout.write("-------------------------\n");

var array = [6,5,4,3,2,1];
selectionSort(array);

process.stdout.write("-------------------------\n");

var array = [6,1,5,2,4,3];
selectionSort(array);

process.stdout.write("-------------------------\n");

var array = [5,6,3,4,2,1];
selectionSort(array);

process.stdout.write("-------------------------\n");

var array = [5,6,3,4,2,1];
selectionSort(array);

