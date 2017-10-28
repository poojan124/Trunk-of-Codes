#include<bits/stdc++.h>
using namespace std;
class base{
    private:
        int  pr1=5,pr2=10;
    protected:
        int pro1=15,pro2=20;
};
class dir1 : protected base{
    protected:
        void pri(){
        printf("dir 1 %d\n",pro1);}
};
class dir2 : private dir1{
    public:
        void pri2(){
        pri();
        printf("dir 2 %d\n",pro2);
    }
};
int main()
{
    dir1 ob1;
    dir2 ob2;
    ob2.pri2();
    //ob2.pri();
    return 0;
}
