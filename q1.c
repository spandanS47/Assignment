#include <stdio.h>

struct Student
{
  int rollNo;
  char name[50];
  int age;
};

int main()
{
  struct Student students[5];

  for (int i = 0; i < 5; i++)
  {
    students[i].rollNo = i + 1;
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", students[i].name);
    printf("Enter the age of student %d: ", i + 1);
    scanf("%d", &students[i].age);
  }

  int rollToFind = 2;
  int found = 0;

  for (int i = 0; i < 5; i++)
  {
    if (students[i].rollNo == rollToFind)
    {
      printf("Details of student with roll number %d:\n", rollToFind);
      printf("Name: %s\n", students[i].name);
      printf("Age: %d\n", students[i].age);
      found = 1;
      break;
    }
  }

  if (!found)
  {
    printf("Student with roll number %d not found.\n", rollToFind);
  }

  return 0;
}
