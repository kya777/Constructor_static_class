#pragma once
class Test_Class
{
public:
	virtual void pubfunc();

	int a = 0;
private:
	void prifunc();

};

class Test_Class2 : public Test_Class
{
public:
	void pubfunc() override;

private:


};


