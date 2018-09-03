int euclid_gcd(int,int);

void euclid()
{

  cout << euclid_gcd(5,2) << endl;
  cout << euclid_gcd(2,5) << endl;
  cout << euclid_gcd(270,192) << endl;
  cout << euclid_gcd(192,270) << endl;
  cout << euclid_gcd(698,312) << endl;
  cout << euclid_gcd(312,698) << endl;
  cout << euclid_gcd(314,698) << endl;
  cout << euclid_gcd(350,700) << endl;
  cout << euclid_gcd(355,700) << endl;

}

int euclid_gcd(int A, int B)
{

  if ( A == 0 ) return B;
  if ( B == 0 ) return A;
  int R = A%B;
  return euclid_gcd(B,R);

}
