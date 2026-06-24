#include <iostream>



int main( void ) {

	std::string c = "chaine1";
	std::string d = "chaine2";


	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;

	return 0;
}