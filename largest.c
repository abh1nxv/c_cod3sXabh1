#include <stdio.h>
int main() {
  int n;
  double arr[10];
  printf("Enter the number of elements (1 to 10): ");
  scanf("%d", &n);

  for (int i = 0; i <= n; i=i+1) {
    printf("Enter number%d: ", i );
    scanf("%lf", &arr[i]);
  }
  for (int i = 1; i <= n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element = %.3lf", arr[0]);

  return 0;
}