#ifndef STRUCT_SCHOOLh
#define STRUCT_SCHOOLh 1

    #define PUPIL_SYMB 15
    #define ZERO 0
    #define KILK4 4
    #define  LINE puts("\n__________________________________________________ \n");
    struct SchoolList
    {
         unsigned int num;
         char surname [ PUPIL_SYMB ];
         char name [ PUPIL_SYMB ];
         double weight;
         double height;

         struct Date
         {
           unsigned char day;
           unsigned char month;
           unsigned short year;
         } DateBirth;
    };

#endif
