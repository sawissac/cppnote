#include <iostream>
#include <type_traits>
#include <concepts>


template <typename T>
concept Multi = requires(T a, T b){
    a + b;
};

template <typename T>
requires Multi<T>
T multi(T a, T b){
    return a + b;
};

int main(){
    int a{1};
    int b{2};

    std::string c{"Hello "};
    std::string d{"World"};

    bool e{false};
    bool f{true};

    std::cout << multi(e,f);
    return 0;
}