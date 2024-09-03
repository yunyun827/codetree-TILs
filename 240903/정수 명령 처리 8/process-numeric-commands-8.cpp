#include <iostream>
#include <list>
using namespace std;
list<int> li;
int n, A;
string s;

int main() {
    // 여기에 코드를 작성해주세요.
    cin >> n;
   while (n>0){
     
     if(s=="push_front"){
        cin >> A;
        li.push_front(A);
     }else if(s=="push_back"){
        cin >> A;
        li.push_back(A);
     }else if (s=="pop_front"){
        cout << li.head << "\n";
        li.pop_front();
     }else if (s=="pop_back"){
        cout << li.tail << "\n";
        li.pop_back();
     }else if (s=="size"){
        cout << li.size << "\n";
     }else if (s=="empty"){
        if(li.head==null && li.tail==null){
            cout << 0;
        }else cout << 1;
     }else if (s=="front"){
        cout << li.front() << "\n";
     }else if (s=="back"){
        cout << li.back() << "\n";
     }
   }

    return 0;
}