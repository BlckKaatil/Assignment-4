#include <iostream>
using namespace std;

class Plugin {
public:
    virtual void execute() = 0;  // Pure virtual function
};

class PluginA : public Plugin {
public:
    void execute() override {
        cout << "Plugin A executed" << endl;
    }
};

class PluginB : public Plugin {
public:
    void execute() override {
        cout << "Plugin B executed" << endl;
    }
};

int main() {
    Plugin* plugin1 = new PluginA();
    Plugin* plugin2 = new PluginB();
    
    plugin1->execute();
    plugin2->execute();
    
    delete plugin1;
    delete plugin2;
}
