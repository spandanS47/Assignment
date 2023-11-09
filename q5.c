#include <stdio.h>
#include <string.h>

struct Customer
{
  char name[30];
  int accountNumber;
  float balance;
};

void printCustomersWithBalanceOver50K(struct Customer customers[], int n)
{
  printf("Customers with balance more than Rs. 50000:\n");
  for (int i = 0; i < n; i++)
  {
    if (customers[i].balance > 50000)
    {
      printf("%s\n", customers[i].name);
    }
  }
}

void addRs1000ToBalance(struct Customer customers[], int n)
{
  printf("Updated balances after adding Rs 1000 to customers with balance more than Rs. 10000:\n");
  for (int i = 0; i < n; i++)
  {
    if (customers[i].balance > 10000)
    {
      customers[i].balance += 1000;
      printf("%s: Rs. %.2f\n", customers[i].name, customers[i].balance);
    }
  }
}

void withdraw(struct Customer customers[], int n, int accountNumber, float amount)
{
  for (int i = 0; i < n; i++)
  {
    if (customers[i].accountNumber == accountNumber)
    {
      if (customers[i].balance >= amount)
      {
        customers[i].balance -= amount;
        printf("Withdrawn Rs. %.2f from %s's account. Updated balance: Rs. %.2f\n", amount, customers[i].name, customers[i].balance);
      }
      else
      {
        printf("Insufficient balance in %s's account. Withdrawal not possible.\n", customers[i].name);
      }
      return;
    }
  }
  printf("Account not found.\n");
}

int main()
{
  int n = 15; // Number of customers
  struct Customer customers[n];

  // Initialize customer data
  for (int i = 0; i < n; i++)
  {
    printf("Enter details for Customer %d:\n", i + 1);
    printf("Name: ");
    scanf("%s", customers[i].name);
    printf("Account Number: ");
    scanf("%d", &customers[i].accountNumber);
    printf("Balance (in Rs.): ");
    scanf("%f", &customers[i].balance);
  }

  printCustomersWithBalanceOver50K(customers, n);

  addRs1000ToBalance(customers, n);

  return 0;
}
