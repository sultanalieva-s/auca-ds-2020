#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numOfCoursesChosen;
    while (cin >> numOfCoursesChosen && numOfCoursesChosen != 0)
    {

        int numOfcategories;
        cin >> numOfcategories;

        vector<int> coursesChosen(numOfCoursesChosen);

        for(int i = 0; i < coursesChosen.size(); i++)
        {
            int numOfCourse;
            cin>> numOfCourse;
            coursesChosen[i] = numOfCourse;
        }
        bool isYes = true;

        for(int i = 0; i < numOfcategories; i++)
        {
            int numOfCoursesInCat, requiredMin;
            cin>>numOfCoursesInCat>> requiredMin;
            vector<int> coursesInCat(numOfCoursesInCat);

            for(int j = 0; j < numOfCoursesInCat; j++)
            {
                int courseInCat;
                cin >> courseInCat;
                coursesInCat[j] = courseInCat;
            }

            int count = 0;

            for(int k =0; k < coursesChosen.size(); k++)
            {
                for(int l=0; l < coursesInCat.size(); l++)
                {
                    if(count == requiredMin)
                    {
                        break;
                    }

                    if(coursesChosen[k] == coursesInCat[l])
                    {
                        count++;
                    }
                }
            }

            if(count < requiredMin)
            {
                isYes = false;
            }
        }

        cout<<(isYes? "yes": "no")<< endl;
    }
}