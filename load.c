#include <stdio.h>

void load_page(const char* page) {
    printf("📺 Loading page: %s\n", page);
}

int main() {
    load_page("HOME");
    load_page("APPS");
    load_page("SETTINGS");
    return 0;
}
