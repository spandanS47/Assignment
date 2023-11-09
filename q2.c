#include <stdio.h>

struct Time
{
  int hours;
  int minutes;
  int seconds;
};

struct Time timeDifference(struct Time t1, struct Time t2)
{
  struct Time diff;

  if (t2.seconds < t1.seconds)
  {
    t2.minutes--;
    t2.seconds += 60;
  }
  diff.seconds = t2.seconds - t1.seconds;

  if (t2.minutes < t1.minutes)
  {
    t2.hours--;
    t2.minutes += 60;
  }
  diff.minutes = t2.minutes - t1.minutes;
  diff.hours = t2.hours - t1.hours;

  return diff;
}

int main()
{
  struct Time start, end, result;

  printf("Enter start time (HH:MM:SS): ");
  scanf("%d:%d:%d", &start.hours, &start.minutes, &start.seconds);

  printf("Enter end time (HH:MM:SS): ");
  scanf("%d:%d:%d", &end.hours, &end.minutes, &end.seconds);

  result = timeDifference(start, end);

  printf("Time difference: %02d:%02d:%02d\n", result.hours, result.minutes, result.seconds);

  return 0;
}
