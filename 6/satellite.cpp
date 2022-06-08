#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include "windows.h"


class Satellite
{
    public:
        Satellite(const std::string &name)
        {
            this->name = name;
        }
        double getPosition()
        {
            return rand();
        }
        std::string getName()
        {
            return this->name;
        }
    private:
        std::string name;
};

class Station
{
    public:
        Station(const std::vector<std::string> &names)
        {
            srand(time(NULL));
            for (int i = 0; i<names.size(); ++i) {
                Satellite* s = new Satellite(names[i]);
                satellites.push_back(s);
            }
        }
        void work()
        {
            while(1) {                
                double res;
                for (auto s: satellites) res += s->getPosition();
                std::cout<<res/satellites.size()<<"\n";
                Sleep(1000);
            }
        }
    private:
        std::vector<Satellite*> satellites;
};

int main()
{
    std::vector<std::string> names = {"10", "2", "3", "4"};
    Station *st = new Station(names);
    st->work();
}