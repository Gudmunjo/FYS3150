#include<iostream>
#include<armadillo>
using namespace arma;
#include<cmath>

mat create_tridiagonal_2(double h, int size)
{
	mat A = mat(size,size);

	vec side = ( -1./pow(h,2) )*ones(size-1);
	vec diag = (  2./pow(h,2) )*ones(size);
	
	A.diag(1) = side;
	A.diag(0) = diag;
	A.diag(-1)= side;

	return A;
}



int main()
{


mat M = create_tridiagonal_2(1,5);

cout<< M <<endl;

	return 0;
}