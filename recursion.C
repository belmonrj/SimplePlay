unsigned long long recursivesum(unsigned long long);
unsigned long long recursivefactorial(unsigned long long);
unsigned long long recursivemult2(unsigned long long);
unsigned long long recursivesquare(unsigned long long);
unsigned long long recursiveexpo(unsigned long long);
unsigned long long fibonacci(unsigned long long);
unsigned long long binomial(unsigned long long, unsigned long long);
unsigned long long sksterling(unsigned long long, unsigned long long);
unsigned long long bellnumber(unsigned long long);

void recursion()
{

  const unsigned long long niterations = 10;

  cout << "now starting..." << endl;

  cout << "recursive addition and multiplication (factorial)" << endl;
  for ( unsigned long long i = 0; i < niterations; ++i )
    {
      cout << i << " " << recursivesum(i) << " " << recursivefactorial(i) << endl;
    }

  cout << "recursive multiplication (=exponentiation), squaring (name?), and exponentiation (=tetration)" << endl;
  for ( unsigned long long i = 0; i < niterations; ++i )
    {
      cout << i << " " << recursivemult2(i) << " " << recursivesquare(i) << " " << recursiveexpo(i) << endl;
    }

  cout << "fibonacci sequence" << endl;
  for ( unsigned long long i = 0; i < niterations; ++i )
    {
      cout << i << " " << fibonacci(i) << endl;
    }

  cout << "binomial coefficients" << endl;
  // --- starting at 0,0 gives you Pascal's triangle
  for ( unsigned long long i = 0; i < niterations; ++i )
    {
      for ( unsigned long long j = 0; j <= i; ++j )
        {
          cout << binomial(i,j) << " ";
        }
      cout << endl;
    }

  cout << "sterling numbers of the second kind" << endl;
  // --- can start at 0,0 but more easily understood starting at 1,1
  for ( unsigned long long i = 1; i < niterations+1; ++i )
    {
      for ( unsigned long long j = 1; j <= i; ++j )
        {
          cout << sksterling(i,j) << " ";
        }
      cout << endl;
    }

  cout << "bell sequence" << endl;
  for ( unsigned long long i = 0; i < niterations; ++i )
    {
      cout << i << " " << bellnumber(i) << endl;
    }

  cout << "now finished!" << endl;

}


unsigned long long recursivesum(unsigned long long x)
{
  if ( x == 0 ) return 0;
  return x + recursivesum(x-1);
}


unsigned long long recursivefactorial(unsigned long long x)
{
  if ( x == 0 ) return 1;
  return x * recursivefactorial(x-1);
}


unsigned long long recursivemult2(unsigned long long x)
{
  if ( x == 0 ) return 1;
  return 2 * recursivemult2(x-1);
}

unsigned long long recursivesquare(unsigned long long x)
{
  if ( x == 0 ) return 1;
  if ( x == 1 ) return 2;
  return recursivesquare(x-1) * recursivesquare(x-1);
}

unsigned long long recursiveexpo(unsigned long long x)
{
  if ( x == 0 ) return 1;
  return pow(2,recursiveexpo(x-1));
}


unsigned long long fibonacci(unsigned long long x)
{
  if ( x == 0 ) return 0;
  if ( x == 1 ) return 1;
  return fibonacci(x-1) + fibonacci(x-2);
}


unsigned long long binomial(unsigned long long n, unsigned long long k)
{
  if ( k == 0 ) return 1;
  if ( k == n ) return 1;
  return binomial(n-1,k) + binomial(n-1,k-1);
}

unsigned long long sksterling(unsigned long long n, unsigned long long k)
{
  if ( n == 0 && k == 0 ) return 1;
  if ( n == 0 ) return 0;
  if ( k == n ) return 1;
  return k*sksterling(n-1,k) + sksterling(n-1,k-1);
}

unsigned long long bellnumber(unsigned long long n)
{
  unsigned long long bell = 0;
  for ( unsigned long long i = 0; i < n+1; ++i ) bell += sksterling(n,i);
  return bell;
}

