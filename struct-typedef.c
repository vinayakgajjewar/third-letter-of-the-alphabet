// struct-typedef.c

// https://c-faq.com/struct/typedef.html

int main()
{
    struct my_struct_tag
    {
        int myint;
        char mychar;
    };

    typedef struct
    {
        int myint;
        char mychar;
    } my_typedef;

    struct my_struct_tag x;
    my_typedef y;
}
