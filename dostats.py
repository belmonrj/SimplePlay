from math import *
from numpy import * # --- makes things so easy it feels like cheating



print "Hello! This is a translation of dostats from C++(11) to python..."



def dostats(*diffs):

    # --- calculate the sum and the mean
    size = len(diffs)
    total = sum(diffs)

    # --- calculate the average
    # --- so easy it feels like cheating
    average = mean(diffs)
    print "The mean is " + str(average)

    # --- calculate the variance
    # --- so easy it feels like cheating
    variance = var(diffs)
    print "The variance is " + str(variance)

    # --- calculate the standard deviation
    # --- so easy it feels like cheating
    stddev = std(diffs)
    print "The stddev is " + str(stddev)



dostats(5.0,5.0,5.35,4.65,5.95,5.0,5.17,5.17,4.83)
dostats(5.35,5.17,5.35,4.82,4.91,5.17,4.66,5.86,5.34)
dostats(5.17,4.65,5.69,4.83,4.83,5.34,5.18,4.48)
dostats(4.83,5.35,6.03,4.31,4.83,5.34,5.18,4.48)



print "All done!  Have a nice day!"

