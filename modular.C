int calc_mod(int,int);

void modular()
{

  for ( int i = 11; i > -12; --i )
    {
      cout << i << " mod " << 7 << " is " << calc_mod(i,7) << endl;
    }
}


int calc_mod(int A, int B)
{

  // if ( A >= 0 ) return A%B; // shortcut
  // else if ( A < 0 ) return (A%B + B)%B; // shortcut
  if ( B <= 0 ) return -9999;
  int Q = A/B;
  if ( A < 0 ) Q -= 1; // funny difference between math and programming
  int R = A - Q*B;
  if ( R == B ) R = 0; // getting R=B for negative A...
  return R;

}
