#include <iostream>

class MogarApp {
public:
    void open(const std::string& app) {
        std::cout << "📺 Opening: " << app << std::endl;
    }
};

int main() {
    MogarApp app;
    app.open("Netflix");
    app.open("YouTube");
    app.open("Mogar Settings");
    return 0;
}
