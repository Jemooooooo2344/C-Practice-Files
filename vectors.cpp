#include <iostream>
#include <vector>
using namespace std;

int main (){

  /* 
       ArrayS
    char vowels[] {a,e,i,o,u};
    cout << "\n The first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: "<< vowels[4]<< endl;
  */   
   // vector <char> vowels {'a','e','i','o','u'};
   // cout << vowels.at(4);

   vector<int> vector1;
   vector <int> vector2;

   vector1.push_back(10);
   vector1.push_back(20);

   cout << vector1.at(0) << endl;
   cout << vector1.at(1) << endl;
   cout << vector1.size() << endl;

   vector2.push_back(100);
   vector2.push_back(200);

   cout << vector2.at(0) << endl;
   cout << vector2.at(1) << endl;
   cout << vector2.size() << endl;

   vector <vector<int>> vector_2d;

   vector_2d.push_back(vector1);
   vector_2d.push_back(vector2);
   cout << vector_2d.at(0).at(0)<< " "<< vector_2d.at(0).at(1) << endl;
   cout << vector_2d.at(1).at(0)<< " "<< vector_2d.at(1).at(1) << endl;
   //cout << vector_2d.size() << endl;

   vector1.at(0) = 1000
   cout << vector_2d.at(0).at(0) << endl;// might not be right

  cout << vector_2d.at(0).at(0)<< " "<< vector_2d.at(0).at(1) << endl;
   cout << vector_2d.at(1).at(0)<< " "<< vector_2d.at(1).at(1) << endl;

   //cout << vector_2d.at(0) << endl;
   cout << vector1.at(0) << endl;
   cout << vector1.at(1) << endl;

stat

}