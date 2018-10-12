std::string timeConversion(std::string s) 
{
    if(s[8] == 'p' || s[8] == 'P')
    {
        int hh = std::stoi(s.substr(0, 2)) + 12;
        int mm = std::stoi(s.substr(3, 5)); 
        int ss = std::stoi(s.substr(6, 8));   
        
        if(hh == 24) hh = 12;
        if(mm == 60) mm = 0;
        if(ss == 60) ss = 0;        
        
        return ((hh < 10) ? ("0" + std::to_string(hh)) : (std::to_string(hh))) + ":" + ((mm < 10) ? ("0" + std::to_string(mm)) : (std::to_string(mm))) + ":" + ((ss < 10) ? ("0" + std::to_string(ss)) : (std::to_string(ss)));    
    }
    else
    {
        int hh = std::stoi(s.substr(0, 2));
        int mm = std::stoi(s.substr(3, 5)); 
        int ss = std::stoi(s.substr(6, 8)); 
        
        if(hh == 12) hh = 0;
        if(mm == 60) mm = 0;
        if(ss == 60) ss = 0;
        
        return ((hh < 10) ? ("0" + std::to_string(hh)) : (std::to_string(hh))) + ":" + ((mm < 10) ? ("0" + std::to_string(mm)) : (std::to_string(mm))) + ":" + ((ss < 10) ? ("0" + std::to_string(ss)) : (std::to_string(ss)));
    }
}
