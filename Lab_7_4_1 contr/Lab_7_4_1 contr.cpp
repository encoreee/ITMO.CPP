#include<iostream>
#include<ctime>
using namespace std;

struct Time
{
	int hour;
	int minutes;
	int seconds;
	char format[6]{}; // am/pm (12-hours), utc (24-hours)

	Time();
	Time(int hour, int minutes, int seconds, const char* format = "utc");
	Time(const Time& obj);
	~Time();
	void showTime();

	void setHour(int hour);
	int getHour();
	void setMinutes(int minutes);
	int getMinutes();
	void setSeconds(int seconds);
	int getSeconds();
	bool setFormat(const char* format);
	const char* getFormat();

	bool valid();
	void tickTime();
};


void Time::tickTime()
{
	this->seconds += 1;

	if (this->seconds >= 60)
	{
		this->seconds %= 60;
		this->minutes += 1;
	}

	if (this->minutes >= 60)
	{
		this->minutes %= 60;
		this->hour += 1;
	}

	if (this->hour >= 24)
		this->minutes %= 24;
}

bool Time::valid()
{
	time_t t = time(NULL);
	tm flag;
	localtime_s(&flag, &t);

	if (this->hour == flag.tm_hour && this->minutes == flag.tm_min && this->seconds == flag.tm_sec)
		return true;
	return false;
}

bool Time::setFormat(const char* format)
{
	if (strcmp("am/pm", format) == 0 || strcmp("utc", format) == 0)
	{
		strcpy_s(this->format, format);
		return true;
	}
	return false;
}

const char* Time::getFormat()
{
	return this->format;
}


Time::Time()
{
	time_t t = time(NULL);
	tm flag;
	localtime_s(&flag, &t);

	this->hour = flag.tm_hour;
	this->minutes = flag.tm_min;
	this->seconds = flag.tm_sec;

	strcpy_s(this->format, "utc");
}

Time::Time(int hour, int minutes, int seconds, const char* format)
{
	this->hour = hour;
	this->minutes = minutes;
	this->seconds = seconds;
	strcpy_s(this->format, "utc");
}

Time::Time(const Time& obj)
{
	this->hour = obj.hour;
	this->minutes = obj.minutes;
	this->seconds = obj.seconds;
	strcpy_s(this->format, obj.format);
}

Time::~Time() {}

void Time::showTime()
{
	if (strcmp("am/pm", format) == 0)
	{
		cout << "Текущее время = " << hour % 12 << " : " << minutes << " : " << seconds << " (";
		if (hour > 12) cout << "pm)\n"; else cout << "am)\n";
	}

	else
		cout << "Текущее время = " << hour << " : " << minutes << " : " << seconds << " (" << format << ")\n";
}

void Time::setHour(int hour)
{
	this->hour = hour;
}

int Time::getHour()
{
	return hour;
}

void Time::setMinutes(int minutes)
{
	this->minutes = minutes;
}

int Time::getMinutes()
{
	return minutes;
}

void Time::setSeconds(int seconds)
{
	this->seconds = seconds;
}

int Time::getSeconds()
{
	return seconds;
}


int main()
{
	setlocale(LC_ALL, "rus");

	Time when;
	when.showTime();

	cout << when.getFormat() << endl;

	cout << when.setFormat("am/pm") << endl;

	cout << when.getFormat() << endl;

	when.showTime();

}