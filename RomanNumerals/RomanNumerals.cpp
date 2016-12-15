#include <string>
#include <map>

std::string RomanNumerals::convert(int arabic_number)
{
    std::string str;

    std::map<int, std::string> mymap;

    mymap[1000]="M";
    mymap[500]="D";
    mymap[100]="C";
    mymap[90]="XC";
    mymap[50]="L";
    mymap[40]="XL";
    mymap[10]="X";
    mymap[9]="IX";
    mymap[5]="V";
    mymap[4]="IV";
    mymap[1]="I";

    int remainder = arabic_number;
    for (std::map<int, std::string>::reverse_iterator it=mymap.rbegin(); it!=mymap.rend(); ++it)
    {
   	 for(auto j=0;j < remainder/it->first;++j)
   		 str += it->second;
   	 remainder = remainder % it->first;
    }

    return str;
}  
