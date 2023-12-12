#pragma once
struct Test_Struct
{
public:
	virtual void pubfunc();

	int a = 0;
private:
	void prifunc();
};

struct Test_Struct2 : public Test_Struct
{
public:
	void pubfunc() override;
private:

};

class test : public Test_Struct2
{

};
