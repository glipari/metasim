#include <iostream>
#include <memory>
#include <string>
#include <vector>
#include <entity.hpp>
#include "myentity.hpp"

#include "gtest/gtest.h"

using namespace MetaSim;
using namespace std;

TEST(ParseUtil, split)
{
    string a = "token1 token2 token3";
    string b = "instr1; instr2; instr3;";
    string c = "code1(a,b); code2(a,b); code3(a, b, c);";
    string d = "set 123.34 234.45 345.56";
  
    vector<string> tokens = parse_util::split(a, " ");
 
    EXPECT_TRUE(tokens.size() == 3);
    EXPECT_TRUE(tokens[0] == "token1");
    EXPECT_TRUE(tokens[1] == "token2");
    EXPECT_TRUE(tokens[2] == "token3");

    tokens = parse_util::split_instr(b);
  
    EXPECT_TRUE(tokens.size() == 3);
    EXPECT_TRUE(tokens[0] == "instr1");
    EXPECT_TRUE(tokens[1] == "instr2");
    EXPECT_TRUE(tokens[2] == "instr3");

    tokens = parse_util::split_instr(c);
  
    EXPECT_TRUE(tokens.size() == 3);
    EXPECT_TRUE(tokens[0] == "code1(a,b)");
    EXPECT_TRUE(tokens[1] == "code2(a,b)");
    EXPECT_TRUE(tokens[2] == "code3(a, b, c)");
}

TEST(ParseUtil, getparam)
{
    string a = "token1 token2 token3";
    string b = "instr1; instr2; instr3;";
    string c = "code1(a,b); code2(a,b); code3(a, b, c);";
    string d = "set 123.34 234.45 345.56";

    vector<string> tokens;

    tokens = parse_util::split_instr(c);
    EXPECT_TRUE(tokens.size() == 3);

    string tok = parse_util::get_token(tokens[0]);
    string param = parse_util::get_param(tokens[0]);
    EXPECT_TRUE(tok == "code1");
    EXPECT_TRUE(param == "a,b");

    tok = parse_util::get_token(tokens[1]);
    param = parse_util::get_param(tokens[1]);
    EXPECT_TRUE(tok == "code2");
    EXPECT_TRUE(param == "a,b");

    tok = parse_util::get_token(tokens[2]);
    param = parse_util::get_param(tokens[2]);
    EXPECT_TRUE(tok == "code3");
    EXPECT_TRUE(param == "a, b, c");
}

TEST(ParseUtil, splitparam)
{
    string a = "token1 token2 token3";
    string b = "instr1; instr2; instr3;";
    string c = "code1(a,b); code2(a,b); code3(a, b, c);";
    string d = "set 123.34 234.45 345.56";


    // your code here
    vector<string> tokens;
    string paramlist;
    vector<string> params;

    tokens = parse_util::split_instr(c);
    EXPECT_TRUE(tokens.size() == 3);

    paramlist = parse_util::get_param(tokens[0]);

    params = parse_util::split_param(paramlist);
    EXPECT_TRUE(params.size() == 2);
    EXPECT_TRUE(params[0] == "a");
    EXPECT_TRUE(params[1] == "b");

    paramlist = parse_util::get_param(tokens[1]);

    params = parse_util::split_param(paramlist);
    EXPECT_TRUE(params.size() == 2);
    EXPECT_TRUE(params[0] == "a");
    EXPECT_TRUE(params[1] == "b");

    paramlist = parse_util::get_param(tokens[2]);

    params = parse_util::split_param(paramlist);
    EXPECT_TRUE(params.size() == 3);
    EXPECT_TRUE(params[0] == "a");
    EXPECT_TRUE(params[1] == "b");
    EXPECT_TRUE(params[2] == "c");
}

TEST(ParseUtils, parsedouble)
{
    string a = "token1 token2 token3";
    string b = "instr1; instr2; instr3;";
    string c = "code1(a,b); code2(a,b); code3(a, b, c);";
    string d = "set 123.34 234.45 345.56";

    // your code here
    vector<string> tokens;
    string unit = "";
    double n;

    tokens = parse_util::split(d, " ");

    EXPECT_TRUE(tokens.size() == 4);
    EXPECT_TRUE(tokens[0] == "set");
    EXPECT_TRUE(tokens[1] == "123.34");
    EXPECT_TRUE(tokens[2] == "234.45");
    EXPECT_TRUE(tokens[3] == "345.56");
  
    parse_util::parse_double(tokens[0], n, unit);
    EXPECT_TRUE(n == 0);

    parse_util::parse_double(tokens[1], n, unit);
    EXPECT_TRUE(n == 123.34);

    parse_util::parse_double("3s", n, unit);
    EXPECT_TRUE(n == 3 && unit == "s");
    parse_util::parse_double(".3s", n, unit);
    EXPECT_TRUE(n == 0.3 && unit == "s");
    parse_util::parse_double(".3us", n, unit);
    EXPECT_TRUE(n == 0.3 && unit == "us");
}

