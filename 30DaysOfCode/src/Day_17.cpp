#include <limits>
#include <cmath>
#include "../header/Day_17.h"

int Day_17::Calculator::power(int n,int p)
{
	if ( n < 0 || p< 0 ) // !! Division by zero
	{
		//throw "n and p should be non-negative";
		throw Day_17::customException();

	}
   else
	   return std::pow(n,p);
}

 const char*  Day_17::customException::what()  const throw()
{
	 return "n and p should be non-negative";
}

void Day_17::MoreExceptions()
{
	Calculator myCalculator=Calculator();
	int T,n,p;
	std::cin>>T;
	while(T-->0){
	  if(scanf("%d %d",&n,&p)==2){
		 try{
			   int ans=myCalculator.power(n,p);
			   std::cout<<ans<<std::endl;
		 }
		 catch(std::exception& e){
			 std::cout<<e.what()<<std::endl;
		 }
	  }
	}
}
