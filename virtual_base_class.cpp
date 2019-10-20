#include <iostream>
using namespace std;
class animal
{
protected:
    int l;

    void get_leg()
 {
 	cout<<"ITS IN BASE CLASS ANIMAL\n";
 }
public:
    /*

    animal()notice that i am
    declaring the constructor in public area and not in
    protected becoz if i declare it in protected area
    then its not working becoz contructor is caalled when object
     is created and object in created in main and as we know protected attributes
     cannot be accessed externally only derieved classes can access so it shows
     error

    */
  animal()
{
    (*this).get_leg();
}

};

class dog:virtual public animal
{
        /*

    animal()notice that i am
    declaring the constructor in public area and not in
    protected becoz if i declare it in protected area
    then its not working becoz contructor is caalled when object
     is created and object in created in main and as we know protected attributes
     cannot be accessed externally only derieved classes can access so it shows
     error

    */


};

class human:virtual public animal
{

};

class alien:public animal,public human
{
	/*knowingly i have left it blank so that the get_leg from the derieeved
	class of dog and human would be inherited here*/


};



int main()
{
	animal a;

	dog d;

	human h;
    alien al;
    al.get_leg();
	return 0;
}
