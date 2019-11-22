#include<iostream>
#include<exception>
using namespace std;

class MyException:public exception
{

	public:
		 virtual const char* what() const throw() //Overriding the what() method of the exception class const throw() -> it means that virtual consta char* what() is not going to throw any exception and we can list the exceptions as arguments of fucntion throw()
		                                        //what function can return only string or character as it is defined in the standard.    
		{
return "This is the string error";

		}
};
class test
{
public:
void goesWrong() 
{

	throw MyException();
}
};


int main()
{
	test t;
  try
  {
t.goesWrong();

  }

catch (MyException &e)
{
cout<<"This Error found was : "<<e.what();
	}
	return 0;


}