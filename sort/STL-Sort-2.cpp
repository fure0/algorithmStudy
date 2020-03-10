#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int score;
    Student(string name, int score) {
        this->name = name;
        this->score = score;
    }
    // 정렬 기준은 '점수가 작은 순서'
    bool operator <(const Student &student)const {
        return this->score < student.score;
    }
};

int main(void) {
    Student students[] = {
        Student("이후철", 95),
        Student("김태연", 92),
        Student("박종훈", 93),
        Student("정형근", 97),
        Student("한성민", 94)
    };
    sort(students, students + 5);
    for(int i = 0; i < 5; i++){
        cout << students[i].name << ' ';
    }
}