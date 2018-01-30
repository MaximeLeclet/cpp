#include <iostream>
#include "fibonacci.hpp"

int fibonacciRecursif(int nb)
{

  int zero = 0;
  int un = 1;
  int deux = 1;
  
  if(nb == 0)
  {

    return zero;

  }
  else
  {

    if(nb == 1)
    {

      return un;
      
    }
    else
    {

      if(nb == 2)
      {

	 return deux;

      }
      else
      {

       	return fibonacciRecursif(nb - 1) + fibonacciRecursif(nb -2);

      }

    }

  }

}

int fibonacciIteratif(int nb)
{

  int zero = 0;
  int un = 1;
  int deux = 1;
  
  if(nb == 0)
  {

    return zero;

  }
  else
  {

    if(nb == 1)
    {

      return un;

    }
    else
    {

      if(nb == 2)
      {

	 return deux;

      }
      else
      {

	int temp = 1;
	int somme = 0;

	for(int i = 0 ; i < nb -1 ; i++)
	  {
	    temp += somme;
	    somme = temp - somme;
	   
	  }

	return temp;

      }

    }

  }

}
