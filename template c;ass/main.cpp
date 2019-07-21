#include <iostream>

using namespace std;
template <class T>
class student
{
   T a;
   T b;
   public:
       student(T a,T b);
       T add();
       T sub();

};
template <class T>
student <T> ::student(T a,T b)
{
    this->a=a;
    this->b=b;
}
template <class T>
T student <T>::add()
{
    T c;
    c=a+b;
    return c;
}
int main()
{
 student s(4,7);
 cout<< s.add()<<endl;



    return 0;
}
