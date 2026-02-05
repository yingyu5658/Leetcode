/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
double* convertTemperature(double celsius, int* returnSize) {
    *returnSize = 2;
    double* rtn = malloc(sizeof(double) * *returnSize);
    rtn[0] = celsius + 273.15;
    rtn[1] = celsius * 1.80 + 32.00;

    return rtn;
}
