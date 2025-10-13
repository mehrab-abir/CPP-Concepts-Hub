#include <iostream>
#include <typeinfo>
using namespace std;
 
template<typename T>
void print(T data)
{
    // RTTI - RunTime Type Information
    cout << typeid(data).name() << " -> "
        << '[' << data << ']' << endl;
}
 
template<typename T>
class Foo
{
    T m_data; // instance variable
public:
    static size_t m_cnt; // class variable (type variable)
 
    Foo();
    Foo(const T& data);
    void display() const;
};
 
template<typename T>
size_t Foo<T>::m_cnt = 0;
 
template<typename T>
Foo<T>::Foo() : m_data{}
{
    ++(Foo<T>::m_cnt);
}
template<typename T>
Foo<T>::Foo(const T& data) : m_data{data}
{
    ++(Foo<T>::m_cnt);
}
 
template<typename T>
void Foo<T>::display() const
{
    cout << typeid(*this).name() << " -> [" << m_data << "]\n";
}
 
int main()
{
    cout << "Foo<float>::m_cnt -> [" << Foo<float>::m_cnt << "]\n";
    cout << "Foo<double>::m_cnt -> [" << Foo<double>::m_cnt << "]\n";
    Foo<float> aF[6];
    aF[0].display();
    Foo<double> aD(96.78);
    aD.display();
    cout << "Foo<float>::m_cnt -> [" << Foo<float>::m_cnt << "]\n";
    cout << "Foo<double>::m_cnt -> [" << Foo<double>::m_cnt << "]\n";
 
//    aF = aD;
}