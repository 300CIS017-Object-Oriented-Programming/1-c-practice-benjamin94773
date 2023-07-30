#include <iostream>
#include <vector>
#include "cstdio"
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>


using namespace std;

//Punto 1

/*
int main() {

    int num1;
    int num2;
    int num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    int sum = num1 + num2 + num3;

    cout << sum << endl;


    return 0;
}

*/

//Punto 2

/*

int main2(){
    int n;
    cin >> n;
    if(n == 1){
        cout << "one" << endl;
    }
    else if(n == 2){
        cout << "two" << endl;
    }
    else if(n == 3){
        cout << "three" << endl;
    }
    else if(n == 4){
        cout << "four" << endl;
    }
    else if(n == 5){
        cout << "five" << endl;
    }
    else if(n == 6){
        cout << "six" << endl;
    }
    else if(n == 7){
        cout << "seven" << endl;
    }
    else if(n == 8){
        cout << "eight" << endl;
    }
    else if(n == 9){
        cout << "nine" << endl;
    }
    else{
        cout << "Greater than 9" << endl;
    }

    return 0;
}

*/

//Punto 3


/*

int main(){
    int num1;
    int num2;

    cin >> num1;
    cin >> num2;

    if(num1 >= 1 && num1 <= 9){
        for(int i = num1; i <= num2; i++){
            if(i == 1){
                cout << "one" << endl;
            }
            else if(i == 2){
                cout << "two" << endl;
            }
            else if(i == 3){
                cout << "three" << endl;
            }
            else if(i == 4){
                cout << "four" << endl;
            }
            else if(i == 5){
                cout << "five" << endl;
            }
            else if(i == 6){
                cout << "six" << endl;
            }
            else if(i == 7){
                cout << "seven" << endl;
            }
            else if(i == 8){
                cout << "eight" << endl;
            }
            else if(i == 9){
                cout << "nine" << endl;
            }
            else{
                if(i%2 == 0){
                    cout << "even" << endl;
                }
                else{
                    cout << "odd" << endl;
                }
            }
        }
    }
    return 0;
}

*/

//Punto 4

/*


int max_of_four(int a, int b, int c, int d){
    int ans;
    vector<int> res;

    res.push_back(a);
    res.push_back(b);
    res.push_back(c);
    res.push_back(d);


    ans = res[0];

    for(int i = 1; i < res.size(); i++){
        if(res[i] > ans){
            ans = res[i];
        }
    }
    return ans;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

*/

//Punto 5

/*

int main() {
    int caso;

    vector<int> ayuda;

    cin >> caso;

    for(int i = 0; i < caso; i++){
        int num;
        cin >> num;
        ayuda.push_back(num);
    }

    int tam = ayuda.size();

    for(int i = 0; i < tam; i++){
        cout << ayuda.back() << " ";
        ayuda.pop_back();
    }
    cout << endl;

    return 0;
}

*/

//Punto 6

/*

int main() {
    string a;
    string b;

    cin >> a;
    cin >> b;

    cout << a.size() << " " << b.size() << endl;

    string temp = "";
    temp += a;
    temp += b;

    cout << temp << endl;

    char temp1;
    char temp2;

    temp1 = a[0];
    temp2 = b[0];

    a[0] = temp2;
    b[0] = temp1;

    cout << a << " " << b << endl;


    return 0;
}

*/

//Punto 7

/*

class Student{
private:
    int age;
    int standard;
    string first_name;
    string last_name;
public:
    void set_age(int ages){
        age = ages;
    }
    void set_standard(int stan){
        standard = stan;
    }
    void set_first_name(string first){
        first_name = first;
    }
    void set_last_name(string last){
        last_name = last;
    }

    int get_age(){
        return age;
    }
    int get_standard(){
        return standard;
    }
    string get_first_name(){
        return first_name;
    }
    string get_last_name(){
        return last_name;
    }

    string to_string(){
        string ans = "";

        ans += std::to_string(age);
        ans += ',';
        ans += first_name;
        ans += ',';
        ans += last_name;
        ans += ',';
        ans += std::to_string(standard);
        return ans;
    }

};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

*/

//Punto 8

/*

class Student{
private:
    vector<int> notas;
public:
    void input(){
        int num;
        for(int i = 0; i < 5; i++){
            cin >> num;
            notas.push_back(num);
        }
    }

    int calculateTotalScore(){
        int ans = 0;
        for(int i = 0; i < notas.size(); i++){
            ans += notas[i];
        }
        return ans;
    }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students

    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();

        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;

    return 0;
}
*/
