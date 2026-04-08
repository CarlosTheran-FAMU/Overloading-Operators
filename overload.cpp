//This is an example abot how to commit and push my code

#include<iostream>

using namesapce std;


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
            section[3] + other.section[3],
        );
    }

};


// sectionA = [4,5,6,7] 
// sectionB = [1,2,3,4]


// SectionC = sectionA + sectionB

// SectionC = [5,7,9,11]

