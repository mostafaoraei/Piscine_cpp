//
// Created by Mostafa Oraei on 10/8/20.
//

#ifndef PHONEBOOK_CONTACT_H
#define PHONEBOOK_CONTACT_H

#include <iostream>

class Contact {
private:
    std::string first_name_;
    std::string last_name_{};
    std::string nick_name_{};
    std::string login_{};
    std::string postal_address_{};
    std::string email_address_{};
    std::string phone_number_{};
    std::string birthday_{};
    std::string favorite_meal_{};
    std::string underwear_color_{};
    std::string darkest_secret_{};

public:
    void Add(void);
    void Show();
    void Search();
};


#endif //PHONEBOOK_CONTACT_H
