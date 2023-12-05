#include <cs50.h>
#include <stdio.h>
#include <string.h>       // Since this is such a common problem within programming, other programmers have created code in the string.h library to find the length of a string. You can find the length of a string by modifying your code as follows:
#include <ctype.h>        //ctype.h is another library that is quite useful. Imagine we wanted to create a program that converted all lowercase characters to uppercase ones. In the terminal window type code uppercase.c and write code as follows:
#include <math.h>         // math.h use libary of the math in the vc code
#include <stdlib.h>       // for atoi and argv argc





//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


const int N = 3;   //Further, notice that a const or constant value

float average(int length, int array[]);

int main(void)
{

    int scores[N];
    for (int i = 0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }


    printf("Average: %f\n", average(N, scores));
}

float average(int length, int array[])
{

    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / (float) length;
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

    string name = get_string("Name: ");


    int n = 0;
    while (name[n] != '\0')      //      \0  is nothings
    {
        n++;
    }
    printf("%i\n", n);
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

    string name = get_string("Name: ");
    int length = strlen(name);      // Notice that this code uses the string.h library, declared at the top of the file. Further, it uses a function from that library called strlen, which calculates the length of the string passed to it.
    printf("%i\n", length);
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{
       // we want chang char to upper
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{
    string s = get_string("Before: ");
    printf("After:  ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        if (islower(s[i]))    // Notice that the program uses islower to detect if each character is uppercase or lowercase.         islower (a,b,c,d,...)       isupper (A,B,C,D,...)
        {
            printf("%c", toupper(s[i]));    // the toupper function is passed s[i]. Each character (if lowercase) is converted to uppercase.
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


float c = (0.0588 * 2 - 0.296 * 3 - 15.8);
int u = round(c);                             // rounf the number to upp
printf("%d \n",u)


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


#define ali 1000    // make a static variable with 1000 andis
int main(void)
{

...
}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

int a=1;
int b=2;

for(int i=0;i<b;i++)
{
    printf("a \n");      // system just print one "a" and "helo"  because of break in the loop , break can stop loop or switch
    break;               // break can use in the loop and switch
}

if(a<b)
{
    printf("helo \n");

}
else
{
    printf("by");
}

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

string a="ali98";

for(int i=0; i<5 ; i++)
{

if(isalphaa(a[i]))     // isalpha can find out a[i] is word our not     ,  isdigit can find out a[i] is number our not
{
    printf("word \n");
}
else
{
    printf("number \n");
}

}

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

int a=2;

if(a ==2)
{
    printf("error \n");
    return 1;                // with return we can stop all projects
}
else
{
    printf("helo \n");
}

printf("halo \n");

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(int argc, string argv[])   // argc is number of word when user write , // argv is sentences of word when user write
{

if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }

}

>> make text
>> ./text
>> helo, world

>> make text
>> ./text h
>> helo, h


//#############################


int main(int argc, string argv[])
{


if (argc != 2)
    {
        printf("usage : ./text name \n");
        return 0;
    }
    else
    {
        printf("hello, %s\n", argv[1]);
    }


}


>> make text
>> ./text
>> usage : ./text name

>> make text
>> ./text david
>> helo, david


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

string h = "12345";

int a = atoi(h);      // convert string to int (with string number)
printf("%i \n", a);

>> make text
>> ./text
>> 12345

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


int main(void)
{

string a;

if(!isalpha(a))     // if a is not(!) alpha
{
...

}

}


//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&


