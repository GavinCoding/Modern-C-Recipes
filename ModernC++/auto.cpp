#include <iostream>

auto addTwo(int a, int b) //-> int  c++ 14 addition allows us to get rid of the trailing return type and the compiler deduces the type from the return statement
{
	return(a + b);
}

int main()
{
	//You should almost always use auto.
	//When using auto the compiler deduces the actual type from
	//	1.From the type of expression used to init a variable
	//	2.From the trailing return type or the return expression type of a function, only when auto is used as a placeholder for the return type of a function


	//pros
	//auto someVar;  will not work. Which is a plus. When using auto it will not allwo you to leave a variable uninitialized which can cause undefined behavior
	//Will always use intended type which avoid implicit conversion. Which can lead to possible loss of data for example size_t -> int. No good
	//Good for oop, readability and simplicity
	//Good for iterators. We don't care about type we just want to iterate

	//cons
	//Need to use auto& if you want to be working with refrence specifiers. Auto will just assume int not &int
	//doesn't work for types that arnt movable. such as atomics 
	//doesn't work for multiword types like long long 
	auto first = 8;
	auto second = 20;

	auto result = addTwo(first, second);

	//std::cout << first << " + " << second << " = " << result;
	printf("%d + %d = %d\n", first, second, result);

	getchar();
	return 0;
}
//