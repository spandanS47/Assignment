#include <stdio.h>
#include <string.h>

struct Student
{
  int regNo;
  char name[30];
  char branch[30];
  float cgpa;
};

void searchStudentByRegNo(const struct Student students[], int n, int regNo)
{
  int found = 0;

  for (int i = 0; i < n; i++)
  {
    if (students[i].regNo == regNo)
    {
      found = 1;
      printf("Student Found:\n");
      printf("Registration No: %d\n", students[i].regNo);
      printf("Name: %s\n", students[i].name);
      printf("Branch: %s\n", students[i].branch);
      printf("CGPA: %.2f\n", students[i].cgpa);
      break;
    }
  }

  if (!found)
  {
    printf("Student with Registration No %d not found.\n", regNo);
  }
}

void sortStudentsByRegNo(struct Student students[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (students[j].regNo > students[j + 1].regNo)
      {
        struct Student temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
      }
    }
  }
}

int main()
{
  int n = 10; // Number of students
  struct Student students[n];

  // Input details for each student
  for (int i = 0; i < n; i++)
  {
    printf("Enter details for Student %d:\n", i + 1);
    students[i].regNo = i + 1;
    printf("Name: ");
    scanf("%s", students[i].name);
    printf("Branch: ");
    scanf("%s", students[i].branch);
    printf("CGPA: ");
    scanf("%f", &students[i].cgpa);
  }

  int searchRegNo;
  printf("Enter the Registration No. to search: ");
  scanf("%d", &searchRegNo);
  searchStudentByRegNo(students, n, searchRegNo);

  sortStudentsByRegNo(students, n);

  printf("\nStudents sorted by Registration No.:\n");
  for (int i = 0; i < n; i++)
  {
    printf("Registration No: %d, Name: %s, Branch: %s, CGPA: %.2f\n",
           students[i].regNo, students[i].name, students[i].branch, students[i].cgpa);
  }

  return 0;
}
