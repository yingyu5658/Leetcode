#include <stdbool.h>
bool isTrionic(int *nums, int numsSize) {
  if (numsSize < 4) {
    return false;
  }

  // 防止[9,4,6,8]
  if (nums[0] > nums[1]) {
    return false;
  }

  enum { UP1, DOWN, UP2 } state = UP1;

  // 状态机真好玩嘻嘻嘻
  for (int i = 0; i < numsSize - 1; i++) {
    if (nums[i] == nums[i + 1]) {
      return false;
    }

    if (state == UP1) {
      if (nums[i] < nums[i + 1]) {
        continue;
      } else {
        state = DOWN;
      }
    } else if (state == DOWN) {
      if (nums[i] > nums[i + 1]) {
        continue;
      } else {
        state = UP2;
      }
    } else { // 既不等于UP1, 也不等于DOWN，就等于UP2
      if (nums[i] < nums[i + 1]) {
        continue;
      } else {
        return false;
      }
    }
  }

  return state == UP2;
}
