  int j;
  int sumAll = 0, sumOdd = 0, sumEven = 0;
  int n;


  scanf("%d", &n );

  for (j=0; j<=n; j++ )
  {
    if ( j%3 != 0 && j%4 != 0 )
    {
      sumAll += j;
      if ( j%2 == 0 )
        sumEven += j;
      else
        sumOdd  += j;
    }
  }
  printf("Sum = %4d, Sum of Odd = %4d, Sum of Even = %4d\n", 
      sumAll, sumOdd, sumEven);