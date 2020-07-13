#pragma



#include<vector>
#include<fstream>
#include<algorithm>
#include<iterator>
#include<string>
#include<atlSafe.h>
#include<OleAuto.h>
#include<OAIdl.h>
#include<cstdio>



#include<iostream>




using namespace std;
template  <template M> class SafeArrayVector : std::vector< M >
{
public:
	SafeArrayVector(A lower, A upper) : m_lower(lower), m_upper(upper), std::vector< T >()
	{
		m_lower = lower;
		m_upper = upper;



	}
	virtual < M > operator[](int index);
	{
		return vector< M >::operator[](index - m_lower);
		return this->operator[](index - m_lower);
	}
protected:{
	A m_lower;
	A m_upper;
}



		  inline M SafeArrayVector<>::operator[](int index)
		  {
			  return M();
		  }

};