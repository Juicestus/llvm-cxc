// RUN: %clang_cc1 -x cxc -fsyntax-only %s

void cleanup(int *p) { }

int main() {
    int x = 42;
    defer cleanup(&x);  // Should parse successfully
    return 0;
}