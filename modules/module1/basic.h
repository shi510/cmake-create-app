#pragma once
#include <string>
#include <type_traits>

namespace module1{

std::string func1(std::string a, std::string b);

template <
	typename T, 
	typename = typename std::enable_if<std::is_integral<T>::value, T>::value
>
T func2(T a, T b){
	return a + b;
}

} // end namespace module1
