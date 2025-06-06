
int main() {
    int y = 10;
    int x = 2 + 3 * y;

    if (x < y) {
        return x;
    }

    int z = 1;

    while (x == z) {
        z = 10;
        break;
    }

    return 123;
}
