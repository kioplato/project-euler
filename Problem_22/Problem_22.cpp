/*
Author: Platon-Nikolaos Kiorpelidis
Purpose: Solution to Problem 22 from Project Euler
Date: 28-6-2016
Language: C++
*/

#include <iostream>
#include <cstdint>
#include <fstream>

using namespace std;

int main()
{
  string file_names;

  fstream file;
  file.open("problem22_names.txt", ios::in);

  file >> file_names;

  //DEBUG
  cout << file_names;

  uint32_t num_words = 0;
  uint32_t i = 0;
  while(i < file_names.length())
  {
    if(file_names[i] == ',')
    {
      file_names[i] = '\n';
    }
    i++;
  }

  cout << "num_words :" << num_words << endl;

  file_names.append("\n");
  cout << file_names;

  i = 0;
  uint32_t counter = 1;
  while(i < file_names.length())
  {
    cout << file_names[i];
    if(file_names[i] == '\n')
    {
      cout << counter;
      counter++;
    }
    i++;
  }

  return 0;
}
