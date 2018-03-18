long long recursivesum(long long);
long long recursivefactorial(long long);
long long fibonacci(long long);
long long binomial(long long, long long);
long long sksterling(long long, long long);

void recursion()
{

  const long long niterations = 10;

  cout << "now starting..." << endl;

  cout << "recursive addition and multiplication (factorial)" << endl;
  for ( long long i = 0; i < niterations; ++i )
    {
      cout << i << " " << recursivesum(i) << " " << recursivefactorial(i) << endl;
    }

  cout << "fibonacci sequence" << endl;
  for ( long long i = 0; i < niterations; ++i )
    {
      cout << i << " " << fibonacci(i) << endl;
    }

  cout << "binomial coefficients" << endl;
  // --- starting at 0,0 gives you Pascal's triangle
  for ( long long i = 0; i < niterations; ++i )
    {
      for ( long long j = 0; j <= i; ++j )
        {
          cout << binomial(i,j) << " ";
        }
      cout << endl;
    }

  cout << "sterling numbers of the second kind" << endl;
  // --- can start at 0,0 but more easily understood starting at 1,1
  for ( long long i = 1; i < niterations+1; ++i )
    {
      for ( long long j = 1; j <= i; ++j )
        {
          cout << sksterling(i,j) << " ";
        }
      cout << endl;
    }

  cout << "now finished!" << endl;

}


long long recursivesum(long long x)
{
  if ( x == 0 ) return 0;
  return x + recursivesum(x-1);
}


long long recursivefactorial(long long x)
{
  if ( x == 0 ) return 1;
  return x * recursivefactorial(x-1);
}


long long fibonacci(long long x)
{
  if ( x == 0 ) return 0;
  if ( x == 1 ) return 1;
  return fibonacci(x-1) + fibonacci(x-2);
}


long long binomial(long long n, long long k)
{
  if ( k == 0 ) return 1;
  if ( k == n ) return 1;
  return binomial(n-1,k) + binomial(n-1,k-1);
}

long long sksterling(long long n, long long k)
{
  if ( n == 0 && k == 0 ) return 1;
  if ( n == 0 ) return 0;
  if ( k == n ) return 1;
  return k*sksterling(n-1,k) + sksterling(n-1,k-1);
}

