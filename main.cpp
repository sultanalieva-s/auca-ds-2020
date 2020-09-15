#include <iostream>
#include <limits>
#include <cstdint>

using namespace std;



int main()
{
    cout << "bool: " << sizeof(bool) << " " << numeric_limits<bool>::min()<<" "<< numeric_limits<bool>::max()<<"\n";
    cout << "int: " << sizeof(int) << " " << numeric_limits<int>::min()<<" "<< numeric_limits<int>::max()<<"\n";
    cout << "long: " << sizeof(long) << " " << numeric_limits<long>::min()<<" "<< numeric_limits<long>::max()<<"\n";
    cout << "long long: " << sizeof(long long) << " " << numeric_limits<long long>::min()<<" "<< numeric_limits<long long>::max()<<"\n";
    cout << "int64_t: " << sizeof(int64_t) << " " << numeric_limits<int64_t>::min()<<" "<< numeric_limits<int16_t>::max()<<"\n";
    cout << "double: " << sizeof(double) << " " << numeric_limits<double>::min()<<" "<< numeric_limits<double>::max()<<"\n";

}