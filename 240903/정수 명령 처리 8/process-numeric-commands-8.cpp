#include <iostream>
#include <list>
using namespace std;

list<int> li;
int n, A;
string s;

int main() {
    cin >> n;
    while (n > 0) {
        cin >> s; // 명령어 입력 받기

        if (s == "push_front") {
            cin >> A;
            li.push_front(A);
        } else if (s == "push_back") {
            cin >> A;
            li.push_back(A);
        } else if (s == "pop_front") {
            if (!li.empty()) {
                cout << li.front() << "\n";
                li.pop_front();
            } else {
                cout << -1 << "\n"; // 리스트가 비어 있을 경우 -1 출력
            }
        } else if (s == "pop_back") {
            if (!li.empty()) {
                cout << li.back() << "\n";
                li.pop_back();
            } else {
                cout << -1 << "\n"; // 리스트가 비어 있을 경우 -1 출력
            }
        } else if (s == "size") {
            cout << li.size() << "\n";
        } else if (s == "empty") {
            cout << (li.empty() ? 1 : 0) << "\n";
        } else if (s == "front") {
            if (!li.empty()) {
                cout << li.front() << "\n";
            } else {
                cout << -1 << "\n"; // 리스트가 비어 있을 경우 -1 출력
            }
        } else if (s == "back") {
            if (!li.empty()) {
                cout << li.back() << "\n";
            } else {
                cout << -1 << "\n"; // 리스트가 비어 있을 경우 -1 출력
            }
        }
        n--; // 명령어를 처리했으므로 n을 감소시킴
    }

    return 0;
}