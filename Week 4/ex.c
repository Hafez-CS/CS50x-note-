#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>




//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&





& Provides the address of something stored in memory. (address of somthing in the memory)
* Instructs the compiler to go to a location in memory. (say to system go to the this address)


int main(void)
{

    int n = 50;
    printf("%p \n", &n);    // print address of 50 in the memory , with hexadecimal number format


    int n = 50;
     int *p = &n;
      printf("%p \n", p);  // print address of 50 in the memory , with hexadecimal number format



    int n = 50;
     int *p = &n;
      printf("%i \n", *p);  // print variable of this address = 50

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

// return address of word in the memory , with hexadecimal number format

    string s = "HI!";
     printf("%p\n", s);        // 0x564cb6534004
     printf("%p\n", &s[0]);    // 0x564cb6534004
     printf("%p\n", &s[1]);    // 0x564cb6534005
     printf("%p\n", &s[2]);    // 0x564cb6534006
     printf("%p\n", &s[3]);    // 0x564cb6534007

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{
    char *s = "HI!";
     printf("%c\n", s[0]);
     printf("%c\n", s[1]);
     printf("%c\n", s[2]);
// H
// I
// !


    char *s = "HI!";
     printf("%c\n", *s);
     printf("%c\n", *(s + 1));
     printf("%c\n", *(s + 2));
// H
// I
// !

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

// this is simple copy , and int  s  is equal to int  t
    string s = get_string("s: ");
    string t = s;

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);   // its same to  t
    printf("t: %s\n", t);   // its same to  s


//#############################


// this is deep copy , int s is not equal to int t
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);     // malloc make space equal any number

    for (int i = 0; i <= strlen(s); i++)
    {
        t[i] = s[i];
    }


    t[0] = toupper(t[0]);


    printf("s: %s\n", s);    // int s is different than int t
    printf("t: %s\n", t);    // int s is different than int t


//#############################


//this is looks like to up example , just without loop(for) instead strcpy
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    strcpy(t, s);            // this is looks like loop(for)

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);


//#############################


//this is looks like to up example
    char *s = get_string("s: ");
    if (s == NULL)
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1);
    if (t == NULL)
    {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);                 // free say to system we are done to malloc space
    return 0;

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

    int *x = malloc(3 * sizeof(int));   // sizeof is size for builtinfuncion , int = 4 / string = 8 / char = 1 / bool = 1 / long = 8 / float = 4 /
     x[0] = 72;
     x[1] = 73;
     x[2] = 33;



    int *x = malloc(3 * sizeof(int));
     x[0] = 72;
     x[1] = 73;
     x[2] = 33;
      free(x);

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


// swap two variables
void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(x, y);

}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
    printf("x is %i, y is %i\n", a, b);

}


//#############################


// swap two variables , another way
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x, y);
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

    int x;
     printf("x: ");
     scanf("%i", &x);           // looks like get_int
     printf("x: %i\n", x);



   char s[4];
    printf("s: ");
    scanf("%s", s);             // looks like get_string
    printf("s: %s\n", s);

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


// creat a file with name 't' and .cvs format

// open the file
    FILE *file = fopen("t.csv", "a");

    // Get name and number
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Print to the file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


typedef struct
{
    BYTE  rgbtBlue;
    BYTE  rgbtGreen;
    BYTE  rgbtRed;
} __attribute__((__packed__))
RGBTRIPLE;

// we can get the value of  this with = RGBTRIPLE.rgbBlur or RGBTRIPLE.rgbRed   . then we get the byte of this


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


fread(&ali, HEADER_SIZE, 1, input);                   // we can read the value  =  read(value , size , object , to this file)
fwrite(&ali, HEADER_SIZE, 1, output);                 // we can write that value = write(value , size , object , to this file)


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int a = sqrt(2+4)

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&

