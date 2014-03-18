#include<stdio.h>
#include"fooIn.h"
int Checking();

int FooIn( struct SchoolList *pPupil )

{   int i;
    int ind = 1;

    if( pPupil == ZERO )
    {
        i = -1;
        puts( "Warning!!! Application doesn't use normally memory. Please restart application for normally work!" );
        return i;
    }
    else if( pPupil != ZERO )
    {
        LINE
        puts("\t- Welcome! - To the \"School List\" system");
        LINE
        for( i = ZERO; i != KILK4; ++i )
        {
            /* Autor Surname */
            while( ind )
            {
                puts( "Please, enter pupil's surname:" );
                scanf( "%s", pPupil -> surname );
                ind = Checking();
                LINE
            }
            ++ind;
            /* Autor Name*/
            while( ind )
            {
                puts( "Please, enter pupil's name:" );
                scanf( "%s", pPupil -> name );
                ind = Checking();
                LINE
            }
            ++ind;
            ++pPupil;
        }
    }
    return i;
}

int Checking()
{
    char ch;
    int ind = 1;
    while( ch != '\n' )
    {
        ch = getchar();
        /* discard */
        --ind;
    }
    if( ind < 0 )
    {
        puts( "\nAttention! Please, enter text more carefully without breakspace!" );
        return ind;
    }
    else
    {
        return ind;
    }
}
