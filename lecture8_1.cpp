// #include <iostream>
// using namespace std;
// void printstuff()
// {
//     cout<<"Writing my first function";
//     return 0;
// }

// int main(){
//     printstuff();
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int sum(int a,int b)
    {
        int c;
        c = a+b;
        return c;
    }
    int main(){
        int a,b;
        int add_sum;
        a=3;
        b=5;
        add_sum = sum(a,b)
        cout<<add_sum;
        return 0;
    }
    return 0;
}