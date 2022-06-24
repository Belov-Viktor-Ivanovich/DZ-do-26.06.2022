#pragma once
class Programmer
{
	string name;
	string phone;
	string office;
public:
	void setName(string name)
	{
		this->name = name;
	}
	void setPhone(string phone)
	{
		this->phone = phone;
	}
	void setOffice(string office)
	{
		this->office = office;
	}
	void show()
	{
		cout << this->name << " " << this->office << " " << this->phone << endl;
	}
};
class Engineer
{
	string name;
	string phone;
	string office;
public:
	void setName(string name)
	{
		this->name = name;
	}
	void setPhone(string phone)
	{
		this->phone = phone;
	}
	void setOffice(string office)
	{
		this->office = office;
	}
	void show()
	{
		cout << this->name << " " << this->office << " " << this->phone << endl;
	}
};

class EngineerInfo
{
	string info;
public:
	void setInfo(string info)
	{
		this->info = info;
	}
	void show()
	{
		cout << this->info << endl;
	}
};

class ProgrammerInfo
{
	string info;
public:
	void setInfo(string info)
	{
		this->info = info;
	}
	void show()
	{
		cout << this->info << endl;
	}
};



class Builder
{
public:
	virtual void setName(string name) = 0;
	virtual void setPhone(string phone) = 0;
	virtual void setOffice(string office) = 0;
};

class BuilderProgrammer :public Builder
{
	string name;
	string phone;
	string office;
	Programmer* programer;
public:
	BuilderProgrammer() {
		this->programer = new Programmer();
	}
	void setName(string name)override
	{
		this->name = name;
	}
	void setPhone(string phone)override
	{
		this->phone = phone;
	}
	void setOffice(string office)override
	{
		this->office = office;
	}

	Programmer* getResult()
	{
		Programmer* programer2 = this->programer;
		programer2->setName(name);
		programer2->setOffice(office);
		programer2->setPhone(phone);
		return programer2;
	}
};
class BuilderEngineer :public Builder
{
	string name;
	string phone;
	string office;
	Engineer* engineer;
public:
	BuilderEngineer() {
		this->engineer = new Engineer();
	}
	void setName(string name)override
	{
		this->name = name;
	}
	void setPhone(string phone)override
	{
		this->phone = phone;
	}
	void setOffice(string office)override
	{
		this->office = office;
	}

	Engineer* getResult()
	{
		Engineer* engineer2 = this->engineer;
		engineer2->setName(name);
		engineer2->setOffice(office);
		engineer2->setPhone(phone);
		return engineer2;
	}
};

class BuilderEngineerInfo :public Builder
{
	string name;
	string phone;
	string office;
	EngineerInfo* engineerInfo;
public:
	BuilderEngineerInfo() {
		this->engineerInfo = new EngineerInfo();
	}
	void setName(string name)override
	{
		this->name = name;
	}
	void setPhone(string phone)override
	{
		this->phone = phone;
	}
	void setOffice(string office)override
	{
		this->office = office;
	}

	EngineerInfo* getResult()
	{
		EngineerInfo* engineerInfo2 = this->engineerInfo;
		engineerInfo2->setInfo("Engineer "+ name + " tel " + phone+" office "+office);
		return engineerInfo2;
	}
};

class BuilderProgrammerInfo :public Builder
{
	string name;
	string phone;
	string office;
	ProgrammerInfo* programmerInfo;
public:
	BuilderProgrammerInfo() {
		this->programmerInfo = new ProgrammerInfo();
	}
	void setName(string name)override
	{
		this->name = name;
	}
	void setPhone(string phone)override
	{
		this->phone = phone;
	}
	void setOffice(string office)override
	{
		this->office = office;
	}

	ProgrammerInfo* getResult()
	{
		ProgrammerInfo* programmerInfo2 = this->programmerInfo;
		programmerInfo2->setInfo(("Programmer " + name + " tel " + phone + " office " + office));
		return programmerInfo2;
	}
};

class BuilderDirector
{
	Builder* builder;
public:
	void createProgrammer(Builder* builder2, string name, string phone, string office)
	{
		builder = builder2;
		builder2->setName(name);
		builder2->setPhone(phone);
		builder2->setOffice(office);
	}
	void createEngineer(Builder* builder2, string name, string phone, string office)
	{
		builder = builder2;
		builder2->setName(name);
		builder2->setPhone(phone);
		builder2->setOffice(office);
	}
	void createProgrammerInfo(Builder* builder2, string name, string phone, string office)
	{
		builder = builder2;
		builder2->setName(name);
		builder2->setPhone(phone);
		builder2->setOffice(office);
	}
	void createEngineerInfo(Builder* builder2, string name, string phone, string office)
	{
		builder = builder2;
		builder2->setName(name);
		builder2->setPhone(phone);
		builder2->setOffice(office);
	}
};



