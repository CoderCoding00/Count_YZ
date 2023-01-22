/**
 *  The Count YZ
 *
 *  Given an input string, count the number of words ending
 *  in 'y' or 'z' -so the 'y' in "heavy" and the 'z' in "fez"
 *  count, but not the 'y' in "yellow".
 *
 *  Make sure that your comparison is not case sensitive.
 *  We'll say that a 'y' or 'z' is at the end of a word
 *  if there is not an alphabetic letter immediately following it.
 *
 *  Do not use any string functions except for substr(),
 *  at(), and size(), and isalpha() from <cctype>.
 *
 *  This is the most difficult problem in the set,
 *  so do not start with this one.
 *
 *  Here are some other examples:
 *     - "fez day" -> 2
 *     - "day fez" -> 2
 *     - "day fyyyz" -> 2
 */
#include <iostream>
#include <string>
using namespace std;

int endzy(const string &str)
{
   int result = 0;
   int len = str.size();

   for (int i = 0; i < len; i++)
   {
      if (!isalpha(str[i]))
      {
         if (str[i - 1] == 'y' || str[i - 1] == 'z' || str[i - 1] == 'Y' || str[i - 1] == 'Z')
         {
            result++;
         }
      }
   }
   if (str[len - 1] == 'y' || str[len - 1] == 'z' || str[len - 1] == 'Y' || str[len - 1] == 'Z')
   {
      result++;
   }
   return result;
}

int main()
{

   cout << "Testing endzy(\"fez day\"): " << endzy("fez day") << endl;
   cout << "Testing endzy(\"day fez\"): " << endzy("day fez") << endl;
   cout << "Testing endzy(\"day fyyyz\"): " << endzy("day fyyyz") << endl;
   return 0;
}