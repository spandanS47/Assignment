#include <stdio.h>
#include <string.h>

// Define a structure to represent a student
struct Student
{
  char name[30];
  int marks[5];
};

// Function to calculate the total marks of a student
int calculateTotalMarks(const struct Student *student)
{
  int total = 0;
  for (int i = 0; i < 5; i++)
  {
    total += student->marks[i];
  }
  return total;
}

// Function to calculate the average marks of a student
float calculateAverageMarks(const struct Student *student)
{
  int total = calculateTotalMarks(student);
  return (float)total / 5;
}

int main()
{
  int numStudents;

  printf("Enter the number of students: ");
  scanf("%d", &numStudents);

  struct Student students[numStudents];

  for (int i = 0; i < numStudents; i++)
  {
    printf("Enter the name of student %d: ", i + 1);
    scanf("%s", students[i].name);

    printf("Enter the marks for 5 subjects for student %d: ", i + 1);
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &students[i].marks[j]);
    }
  }

  char searchName[30];
  printf("Enter the name of the student you want to search: ");
  scanf("%s", searchName);

  int found = 0;

  for (int i = 0; i < numStudents; i++)
  {
    if (strcmp(students[i].name, searchName) == 0)
    {
      found = 1;
      int total = calculateTotalMarks(&students[i]);
      float average = calculateAverageMarks(&students[i]);

      printf("Student Name: %s\n", students[i].name);
      printf("Total Marks: %d\n", total);
      printf("Average Marks: %.2f\n", average);
      break;
    }
  }

  if (!found)
  {
    printf("Student with the name '%s' not found.\n", searchName);
  }

  return 0;
}
