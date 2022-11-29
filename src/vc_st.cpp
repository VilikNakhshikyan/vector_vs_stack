#include"include/vc_st.h"
#include<stack>
#include<vector>

bool isValid_stack(std::string s)
{
    int count = 0;
    std::stack<char> answer;
    for (unsigned int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
        {
            answer.push(s[i]);
            ++count;
            continue;
        }
        else if (s[i] == ')')
        {
            if (answer.empty() || answer.top() != '(')
                return false;
            else
                answer.pop();
            --count;
            continue;
        }

        if (s[i] == '{')
        {
            answer.push(s[i]);
            ++count;
            continue;
        }
        else if (s[i] == '}')
        {
            if (answer.empty() || answer.top() != '{')
                return false;
            else
                answer.pop();
            --count;
            continue;
        }

        if (s[i] == '[')
        {
            answer.push(s[i]);
            ++count;
            continue;
        }
        else if (s[i] == ']')
        {
            if (answer.empty() || answer.top() != '[')
                return false;
            else
                answer.pop();
            --count;
            continue;
        }
    }
    if (count == 0)
        return true;
    return false;
}

bool isValid_vector(std::string s)
{
    int count = 0;
    std::vector<char> answer;
    for (unsigned int i = 0; i < s.size(); ++i)
    {
        if (s[i] == '(')
        {
            answer.push_back(s[i]);
            ++count;
            continue;
        }
        else if (s[i] == ')')
        {
            if (answer.empty() || answer[answer.size() - 1] != '(')
                return false;
            else
                answer.pop_back();
            --count;
            continue;
        }

        if (s[i] == '{')
        {
            answer.push_back(s[i]);
            ++count;
            continue;
        }
        else if (s[i] == '}')
        {
            if (answer.empty() || answer[answer.size() - 1] != '{')
                return false;
            else
                answer.pop_back();
            --count;
            continue;
        }

        if (s[i] == '[')
        {
            answer.push_back(s[i]);
            ++count;
            continue;
        }
        else if (s[i] == ']')
        {
            if (answer.empty() || answer[answer.size() - 1] != '[')
                return false;
            else
                answer.pop_back();
            --count;
            continue;
        }
    }
    if (count == 0)
        return true;
    return false;
}