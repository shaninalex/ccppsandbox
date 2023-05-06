#include <iostream>

struct Person
{
    char name[20];
    char lastname[20];
    short age;
    char grade;
};

int main()
{

    Person person;
    std::cout << "What is your first name? ";
    std::cin.getline(person.name, 80);

    std::cout << "What is your last name? ";
    std::cin.getline(person.lastname, 80);

    std::cout << "What letter grade do you deserve? ";
    std::cin >> person.grade;

    std::cout << "What is your age? ";
    std::cin >> person.age;

    switch (person.grade)
    {
    case 'A':
        person.grade = 'B';
        break;
    case 'B':
        person.grade = 'C';
        break;
    case 'C':
        person.grade = 'D';
        break;
    default:
        break;
    }

    std::cout << "Name: " << person.lastname << ", " << person.name << std::endl;
    std::cout << "Grade: " << person.grade << std::endl;
    std::cout << "Age: " << person.age << std::endl;

    return 0;
}