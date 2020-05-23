#include <iostream>

std::string currentAddr(std::string text) {
    static std::string address ;
    if (!address.empty()) {
        return address;
    }
    std::cout << " #NO!# ";
    address = text;
    std::replace(address.begin(), address.end(), '.', '-');
    std::cout << " #currentAddr: " << text << "# " << std::endl;
    return address;
}

std::string collaborationIns(std::string text) {
    std::cout << " #collaborationIns# ";
    std::string collaborationIns = std::string("collaboration") + "." + currentAddr(text);
    return collaborationIns;
}

std::string collaborationInsWhen(std::string text) {
    std::cout << " #collaborationInsWhen# ";
    std::string collaborationInsWhen = collaborationIns(text) + "." + "when";
    return collaborationInsWhen;
}

int main() {
    std::cout << "1: " << collaborationInsWhen("first") << std::endl;
    std::cout << "2: " << collaborationInsWhen("second") << std::endl;
    std::cout << "3: " << collaborationInsWhen("third") << std::endl;

}