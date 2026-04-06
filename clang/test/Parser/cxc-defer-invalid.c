// RUN: %clang_cc1 -x cxc -fsyntax-only -verify %s

void cleanup(int *p) { }

int main() {
    int x = 42;
    defer;  // expected-error {{expected statement}}
    defer cleanup(&x);  // ok
    return 0;
}
