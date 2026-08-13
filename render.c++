#include <iostream>

class MogarPage {
public:
    void render(const std::string& name) {
        std::cout << "🔥 Rendering page: " << name << std::endl;
    }
};

int main() {
    MogarPage page;
    page.render("HOME");
    page.render("SETTINGS");
    return 0;
}
