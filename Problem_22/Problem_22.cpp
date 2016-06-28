/*
Author: Platon-Nikolaos Kiorpelidis
Purpose: Solution to Problem 22 from Project Euler
Date: 28-6-2016
Language: C++
*/

#include <iostream>
#include <cstdint>
#include <fstream>
#include <algorithm>

using namespace std;

int main()
{
  string file_names;

  fstream file;
  file.open("problem22_names.txt", ios::in);

  file >> file_names;

  uint32_t num_words = 0;
  uint32_t i = 0;
  while(i < file_names.length())
  {
    if(file_names[i] == ',')
    {
      num_words++;
    }
    i++;
  }
  num_words++;

  string *names = NULL;
  names = new string[num_words];

  uint32_t counter = 0;
  i = 0;
  while(i < file_names.length())
  {
    if(file_names[i] != '\"' && file_names[i] != ',')
    {
      names[counter].append(1, file_names[i]);
    }
    else if(file_names[i] == ',')
    {
      i++;
      counter++;
    }
    i++;
  }

  vector<string> my_vector(names, names + num_words);

  sort(my_vector.begin(), my_vector.begin()+num_words);


  uint32_t name_value = 0;
  uint32_t all_names_value = 0;
  vector<string>::iterator it=my_vector.begin();
  for(i = 0; i < my_vector.size(); i++)
  {
    name_value = 0;
    for(size_t j = 0; j < it[i].length(); j++)
    {
      name_value += it[i][j] - 64;
    }
    name_value *= (i + 1);
    all_names_value += name_value;
  }
  cout << "ALL: " << all_names_value << endl;

  return 0;
}
