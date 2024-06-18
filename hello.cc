#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

int main()
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in; //alias for iterator

    std::for_each(
        in(std::cin),   // First iterator
        in(),           // the end is an empty iterator for this example
        std::cout << (_1 * 3) << " "  // _1 is a lambda placeholder
    );
    
    return 0;
}