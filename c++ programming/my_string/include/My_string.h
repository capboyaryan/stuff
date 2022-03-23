#ifndef MY_STRING_H
#define MY_STRING_H


class My_string
{
    private:
        char* str;
    public:
        //constructors
        My_string();
        My_string(const char *src);
        //copy constructor
        My_string(const My_string &source);
        //move constructor
        My_string(My_string &&source) noexcept;
        //destructor
        ~My_string();
        //methods
        void display();
        int get_length();
        //operator overloading
        My_string &operator=(const My_string &rhs);
        My_string &operator=(My_string &&rhs);
};

#endif // MY_STRING_H
