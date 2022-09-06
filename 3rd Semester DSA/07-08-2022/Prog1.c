#include <stdio.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))

void polyadd()
{

  int n, m, a[50], b[50], c[50];
  printf("Enter the degree(highest power) of polynomial 1 : ");
  scanf("%d", &n);

  printf("Enter the degree (highest power) of polynomial 2 : ");
  scanf("%d", &m);

  int max = MAX(m, n);

  printf("Enter the coefficients of polynomial 1\n");
  for (int i = n; i >= 0; i--)
  {
    printf("Coefficient of x^%d : ", i);
    scanf("%d", &a[i]);
  }

  printf("Enter the coefficients of polynomial 2\n");
  for (int i = m; i >= 0; i--)
  {
    printf("Coefficient of x^%d : ", i);
    scanf("%d", &b[i]);
  }

  // Displaying polynomial 1;

  printf("Polynomial 1 : \n");
  for (int i = n; i >= 0; i--)
  {
    printf("%dx^%d+", a[i], i);
  }

  printf("\n");

  // Displaying polynomial 2;

  printf("Polynomial 2 : \n");
  for (int i = m; i >= 0; i--)
  {
    printf("%dx^%d+", b[i], i);
  }

  // Addition of two polynomials
  for (int i = max; i >= 0; i--)
  {
    if (m > n)
    {
      c[i] = b[m];
      m--;
    }

    if (m == n)
    {
      c[i] = a[n] + b[m];
      m--;
      n--;
    }

    if (n > m)
    {
      c[i] = a[n];
      n--;
    }
  }

  printf("\n");
  printf("The resultant polynomial is :\n");
  for (int i = max; i >= 0; i--)
  {
    printf("%d x^%d ", c[i], i);
    printf("+ ");
  }
}

// MULTIPLICATION FUNCTION

void polymul()
{
  int n, m, a[50], b[50], c[50], d[50];
  printf("Enter the degree of polynomial 1 : ");
  scanf("%d", &n);

  printf("Enter the degree of polynomial 2 : ");
  scanf("%d", &m);
  int e = n;
  int f = m;

  printf("Enter the coefficients of polynomial 1\n");
  for (int i = n; i >= 0; i--)
  {
    printf("Coefficient of x^%d : ", i);
    scanf("%d", &a[i]);
    printf("\n");
  }

  printf("Enter the coefficients of polynomial 2\n");
  for (int i = m; i >= 0; i--)
  {
    printf("Coefficient of x^%d : ", i);
    scanf("%d", &b[i]);
    printf("\n");
  }

  // Displaying polynomial 1;

  printf("Polynomial 1 : \n");
  for (int i = n; i >= 0; i--)
  {
    printf("%dx^%d+", a[i], i);
  }

  printf("\n");

  // Displaying polynomial 2;

  printf("Polynomial 2 : \n");
  for (int i = m; i >= 0; i--)
  {
    printf("%dx^%d+", b[i], i);
  }
  
  // Making all elements of d arary zero
  for (int i = n; i >= 0; i--)
  {
    for (int j = m; j >= 0; j--)
    {
      d[j + i] = 0;
    }
  }
  // Multiplying two polynomials
  for (int i = n; i >= 0; i--)
  {
    for (int j = m; j >= 0; j--)
    {
      d[j + i] += b[j] * a[i];
    }
  }

  printf("\n");
  printf("The resultant polynomial is :\n");
  for (int i = e + f; i >= 0; i--)
  {
    printf("%dx^%d", d[i], i);
    printf("+");
  }
}

int main()
{

  polyadd();
  polymul();
  return 0;
}