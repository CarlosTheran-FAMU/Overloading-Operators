#include<iostream>

using namespace std;


class BookCollection 
{
   private:
      int section[4];      


   public:
     BookCollection(int a, int b, int c, int d)
     {
        section[0] = a;
        section[1] = b;
        section[2] = c;
        section[3] = d;
    }

    BookCollection operator+(const BookCollection& other) const {
        return BookCollection(
            section[0] + other.section[0],   
            section[1] + other.section[1],   
            section[2] + other.section[2],   
            section[3] + other.section[3]
        );
    }

};