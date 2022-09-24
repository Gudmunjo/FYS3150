#include<iostream>
#include<armadillo>
using namespace arma;
#include<cmath>

#include "problem2.cpp"

double max_offdiag_symmetric(mat A , int k, int l)
{
	double maxval = A(k,l);

	int size = A.n_rows;

	for (int s = 0; s < size ; s++)
	{	
		for (int i = s; i < size ; i++)
		{
			if (A(s,i) > maxval)
			{	
				k = s;
				l = i;
			}
			std::cout<<k<<l<<std::endl;
			std::cout<<A(s,i)<<std::endl;
		}

	}
	return 99;
}


int main()
{
	int size = 5;
	mat A = mat(size,size,fill::randu);

	mat M = symmatu(A);
	std::cout<<M<<std::endl;
	int s = max_offdiag_symmetric(M,0,0);

	return 0;
}