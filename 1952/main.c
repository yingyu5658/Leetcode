bool isThree(int n) {
    if(n == 1) {
        return false;
    }

    int num = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            num++;
        }
    }

    return num == 3 ? true : false;
}
