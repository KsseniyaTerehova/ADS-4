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
    int start = i, end = len;
    while (1 < end - start) {
      int mid = (start + end) / 2;
      if (arr[i] + arr[mid] == value) {
        count++;
        int r = mid + 1;
        while (arr[i] + arr[r] == value && r < end) {
          count++;
          r++;
        }
        r = mid - 1;
        while (arr[i] + arr[r] == value && r > start) {
          count++;
          r--;
        }
        break;
      }
      if (arr[i] + arr[mid] > value) {
        end = mid;
      }
      else {
        start = mid;
      }
    }
  }
  return count;
}
