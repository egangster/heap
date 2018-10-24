#include <vector>
#include <iostream>
#include <algorithm>

int main( ) {
	// create a vector and give it the name "name"
	std::vector< int > name { };

	// make the number to enter unsigned because it should never be negative
	auto num_to_enter = 0u;
	std::cout << "how many numbers would you like to enter into the heap? \n";
	std::cin >> num_to_enter;

	std::cout << "\nplease enter " << num_to_enter << " number( s ) here: \n";
	// loop through std::cin the given amount of times
	for( auto i = 0u; i < num_to_enter; ++i ) {
		int input;
		std::cin >> input;
		// store the users input in the name vector
		name.push_back( input );
	}

	// print out what the initial values are
	std::cout << "\nit was initally: \n";
	for( const auto &num : name )
		std::cout << num << ", ";
	std::cout << "\n\n";

	// make the vector into a heap
	std::make_heap( name.begin( ), name.end( ) );

	std::cout << "\nafter std::make_heap it is now: \n";
	for( const auto &num : name )
		std::cout << num << ", ";
	std::cout << "\n\n";

	// move the largest number to the end
	std::pop_heap( name.begin( ), name.end( ) );
	// store the largest number here
	const auto max = name.back( );

	std::cout << "largest number in the heap is: " << max << " \n\n";

	// remove the largest number
	name.pop_back( );

	std::cout << "after removing the largest number we have: \n";

	for( const auto &num : name )
		std::cout << num << ", ";
	std::cout << "\n\n";

	// sort the heap
	std::sort_heap( name.begin( ), name.end( ) );

	std::cout << "after it has been sorted: \n";
	for( const auto &num : name )
		std::cout << num << ", ";
	std::cout << "\n\n";

	system( "pause" );

	return 0;
}