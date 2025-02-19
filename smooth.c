long avg(long *array, long i) {
    return (array[i - 1] + 2 * array[i] + array[i + 1]) / 4;
}

void smooth(long *array, long n) {
    long i;

    for (i = 1; i < n - 1; i++) {
        array[i] = avg(array, i)
    }
}
