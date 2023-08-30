#include <iostream>
#include <string>
#include <concepts>

template <typename T> concept ComplexConcept = requires(const T v) {

	{ v.hash() }
	->std::convertible_to<long>;

	{ v.hash() }
	->std::same_as<long>;

	{ v.toString() }
	->std::convertible_to<std::string>;

	{ v.toString() }
	->std::same_as<std::string>;

	!std::has_virtual_destructor<T>::value;

};