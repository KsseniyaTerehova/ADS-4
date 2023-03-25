// Copyright 2021 NNTU-CS
int countPairs1(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] + arr[j] == value) {
        count += 1;
      }
    }
  }
  return count;
}
int countPairs2(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    for (int j = len - 1; j > i; j--) {
      if (arr[i] + arr[j] == value) {
        count += 1;
      }
    }
  }
  return count;
}
int countPairs3(int *arr, int len, int value) {
  int count = 0;
  for (int i = 0; i < len - 1; i++) {
    int s = i; f = len;
    while (1 < n - s) {
      int m = (s + f) / 2;
      if (arr[i] + arr[m] == value) {
        count++;
        int r = m + 1;
        while (arr[i] + arr[r] == value && r < f) {
          count++;
          r--;
        }
        break;
      }
      if (arr[i] + arr[m] > value) {
        f = m;
      }
      else {
        s = m;
      }
    }
  }
  return count;
}
