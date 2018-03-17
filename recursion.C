long long recursivesum(long long);
long long recursivefactorial(long long);
long long fibonacci(long long);
long long binomial(long long, long long);

void recursion()
{

  const long long niterations = 20;

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

  cout << "some binomial coefficients" << endl;
  for ( long long i = 0; i < 8; ++i )
    {
      for ( long long j = 0; j <= i; ++j )
        {
          cout << binomial(i,j) << " ";
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
  if ( n == 1 ) return n;
  return binomial(n-1,k) + binomial(n-1,k-1);
}

