#include<iostream>
#include<ctime>
using namespace std;

class Time
{
private:
	int hour;
	int minutes;
	int seconds;
	char format[6]{};

public:
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
	Time concat(const Time& obj);
	Time operator+(Time obj);
	Time operator-(Time obj);
	bool operator > (const Time& obj);
	bool operator < (const Time& obj);

	bool valid();
	void tickTime();

	class OverTimeSecs
	{
		string message = "Превышена разрядность секунд";
	public:
		string printMessage() const
		{
			return message;
		}
	};
	class OverTimeMins
	{
		string message = "Превышена разрядность минут";
	public:
		string printMessage() const
		{
			return message;
		}
	};
	class OverTimeHours
	{
		string message = "Превышена разрядность часов";
	public:
		string printMessage() const
		{
			return message;
		}

	};
	class FormatExeption
	{
		string message = "Ошибка формата";
	public:

		string printMessage() const
		{
			return message;
		}
	};
};


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
	else
	{
		throw FormatExeption();
		return false;
	}
}

const char* Time::getFormat()
{
	return this->format;
}


Time::Time()
{
	this->hour = 0;
	this->minutes = 0;
	this->seconds = 0;

	strcpy_s(this->format, "utc");
}

Time::Time(int hour, int minutes, int seconds, const char* format)
{
	this->hour = hour;
	this->minutes = minutes;
	this->seconds = seconds;

	if (this->seconds >= 60)
	{
		throw OverTimeSecs();
	}

	if (this->minutes >= 60)
	{
		throw OverTimeMins();
	}

	if (this->hour >= 24)
	{
		throw OverTimeHours();
	}


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
	if (this->hour >= 24)
	{
		throw OverTimeHours();
	}
	else
	{
		this->hour = hour;
	}
}

int Time::getHour()
{
	return hour;
}

void Time::setMinutes(int minutes)
{
	if (this->minutes >= 60)
	{
		throw OverTimeMins();
	}
	else
	{
		this->minutes = minutes;
	}

}

int Time::getMinutes()
{
	return minutes;
}

void Time::setSeconds(int seconds)
{
	if (this->seconds >= 60)
	{
		throw OverTimeSecs();
	}
	else
	{
		this->seconds = seconds;
	}

}

int Time::getSeconds()
{
	return seconds;
}


Time Time::concat(const Time& obj)
{
	Time time;
	time.hour = this->hour + obj.hour;
	time.minutes = this->minutes + obj.minutes;
	time.seconds = this->seconds + obj.seconds;

	if (time.seconds >= 60)
	{
		time.seconds %= 60;
		time.minutes += 1;
	}

	if (time.minutes >= 60)
	{
		time.minutes %= 60;
		time.hour += 1;
	}

	if (time.hour >= 24)
		time.hour %= 24;


	return time;
}
Time Time::operator + (Time obj)
{
	Time time;
	time.hour = this->hour + obj.hour;
	time.minutes = this->minutes + obj.minutes;
	time.seconds = this->seconds + obj.seconds;

	if (time.seconds >= 60)
	{
		time.seconds %= 60;
		time.minutes += 1;
	}

	if (time.minutes >= 60)
	{
		time.minutes %= 60;
		time.hour += 1;
	}

	if (time.hour >= 24)
		time.hour %= 24;

	return time;
}

Time operator + (Time & obj, int s)
{
	Time time;

	time.setSeconds(obj.getSeconds() + s);

	if (time.getSeconds() >= 60)
	{
		time.setSeconds((obj.getSeconds() + s) % 60);
		time.setMinutes(time.getMinutes() + 1);
	}

	if (time.getMinutes() >= 60)
	{
		time.setMinutes((obj.getSeconds() + s) % 60);
		time.setHour(time.getHour() + 1);
	}

	if (time.getHour() >= 24)
		time.setHour(time.getHour() % 24); 

	return time;
}

Time operator + (int s, Time & obj )
{
	Time time;

	time.setSeconds(obj.getSeconds() + s);

	if (time.getSeconds() >= 60)
	{
		time.setSeconds((obj.getSeconds() + s) % 60);
		time.setMinutes(time.getMinutes() + 1);
	}

	if (time.getMinutes() >= 60)
	{
		time.setMinutes((obj.getSeconds() + s) % 60);
		time.setHour(time.getHour() + 1);
	}

	if (time.getHour() >= 24)
		time.setHour(time.getHour() % 24);

	return time;
}


Time Time::operator - (Time obj)
{
	Time time;
	time.hour = this->hour - obj.hour;
	time.minutes = this->minutes - obj.minutes;
	time.seconds = this->seconds - obj.seconds;

	if (this->seconds < obj.seconds)
	{
		time.seconds = 60 + this->seconds - obj.seconds;
		time.minutes -= 1;
	}
	else 
	{
		time.seconds = this->seconds - obj.seconds;
	}

	if (this->minutes < obj.minutes)
	{
		time.minutes = 60 + this->minutes - obj.minutes;
		time.hour -= 1;
		if (time.hour < 0)
		{
			time.hour = 0;
		}
	}
	else
	{
		time.minutes = this->minutes - obj.minutes;
	}

	if (this->hour < obj.hour)
		time.hour = 0;

	return time;
}

bool Time::operator > (const Time & obj)
{
	if (this->hour > obj.hour) 
	{
		return this->hour > obj.hour;
	}
	else
	{
		if (this->minutes > obj.minutes)
		{
			return this->minutes > obj.minutes;
		}
		else 
		{
			if (this->seconds > obj.seconds)
			{
				return this->seconds > obj.seconds;
			}
			else 
			{
				return this->seconds < obj.seconds;
			}
		}
		return this->hour < obj.hour;
	}
}

bool Time::operator < (const Time& obj)
{
	if (this->hour < obj.hour)
	{
		return this->hour < obj.hour;
	}
	else
	{
		if (this->minutes < obj.minutes)
		{
			return this->minutes < obj.minutes;
		}
		else
		{
			if (this->seconds < obj.seconds)
			{
				return this->seconds < obj.seconds;
			}
			else
			{
				return this->seconds > obj.seconds;
			}
		}
		return this->hour > obj.hour;
	}
}



int main()
{
	setlocale(LC_ALL, "rus");

	try
	{
		Time when(1, 2, 3);
		Time now(5, 6, 7);
		Time t1(1, 61, 10);

		when = when + 100;
		when = 100 + when;
	}
	catch (const Time::OverTimeHours& ex)
	{
		cout << ex.printMessage();
	}
	catch (const Time::OverTimeMins& ex)
	{
		cout << ex.printMessage();
	}
	catch (const Time::OverTimeSecs& ex)
	{
		cout << ex.printMessage();
	}
	catch (const Time::FormatExeption& ex)
	{
		cout << ex.printMessage();
	}


}