
// g++ filesystem.cc -o filesystem -std=c++23 -lboost_filesystem -lboost_system
// filesystem is not a header file, but binary
#include <iostream>
#include <boost/filesystem.hpp>
#include <print>

namespace bfs = boost::filesystem;

int main(int argc, char const *argv[])
{
    if (argc <= 1)
    {
        std::println(std::cerr, "Usage: {0} <filename>", argv[0]);
        return 1;
    }
    bfs::path user_path(argv[1]);
    if (bfs::exists(user_path))
        std::println(std::cout, "Hooray! your file {0} exists", user_path.c_str());
    else
        std::println(std::cout, "Your file {0} does not exist", user_path.c_str());
    return 0;
}
