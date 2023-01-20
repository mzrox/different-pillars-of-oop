#include <iostream>
#include <ctime>
using namespace std;

class Cricketer{
	protected:
		string name;
		int shirtno;
		string dob;
		int odi_rating;
		int test_rating;
		int t20_rating;
		int startyear;
	public:
		Cricketer()
		{
			this->name = "";
			this->shirtno = 0;
			this->dob = "00-00-0000";
			this->odi_rating = 0;
			this->test_rating = 0;
			this->t20_rating = 0;
			this->startyear = 0;
			cout<<"\n\n\t\tCirckter Default Constructor Called...";
			}
		Cricketer(string name, int shirtno, string dob, int odi_rating, int test_rating, int t20_rating, int startyear)
		{
			this->name = name;
			this->shirtno = shirtno;
			this->dob = dob;
			this->odi_rating = odi_rating;
			this->test_rating = test_rating;
			this->t20_rating = t20_rating;
			this->startyear = startyear;
			cout<<"\n\n\t\tCirckter Parameterized Constructor Called...";

			}
		int calculateAge()
		{
			string a,b,c,d;
			a = dob[6]; b = dob[7]; c = dob[8]; d = dob[9];
			string s = a+b+c+d;
			int birthYear;
			birthYear = stoi(s);
			time_t t = time(nullptr);
			tm *const pTInfo = localtime(&t);
			int currentYear = 1900 + pTInfo->tm_year;
			int age;
			age = currentYear - birthYear;
			
			return age;
			}
		int calculateExperience()
		{
			int exp;
			time_t t = time(nullptr);
			tm *const pTInfo = localtime(&t);
			int currentYear = 1900 + pTInfo->tm_year;
			exp = currentYear - startyear;
			
			return exp;
			}
		void changeODIRating(int odi_rating)
		{
			this->odi_rating = odi_rating;
			}
		void changeTestRating(int test_rating)
		{
			this->test_rating = test_rating;
			}
		void changeT20Rating(int t20_rating)
		{
			this->t20_rating = t20_rating;
			}		
		~Cricketer()
		{
			cout<<"\n\n\t\tCrickter Destructor Called...";
			}							
};

class Bowler : public Cricketer{
	private:
		string type;
		int total_wickets;
		int match_played;
	public:
		Bowler()
		{
			this->type = "";
			this->total_wickets = 0;
			this->match_played = 0;
			cout<<"\n\n\t\tBowler Default Constructor Called...";
			}
		Bowler(string type, int total_wickets, int  match_played, string name, int shirtno, string dob, int odi_rating, int test_rating, int t20_rating, int startyear)
		{
			this->type = type;
			this->total_wickets = total_wickets;
			this->match_played = match_played;
			this->name = name;
			this->shirtno = shirtno;
			this->dob = dob;
			this->odi_rating = odi_rating;
			this->test_rating = test_rating;
			this->t20_rating = t20_rating;
			this->startyear = startyear;
			cout<<"\n\n\t\tBowler Parametarized Constructor Called...";
			}
		int calculateBowlAverage()
		{
			int avg;
			avg = total_wickets / match_played;
			
			return avg;
			}
		void updateMatches(int m)
		{
			this->match_played = this->match_played + m;
			}
		void updateWickets(int w)
		{
			this->total_wickets = this->total_wickets + w;
			}
		~Bowler()
		{
			cout<<"\n\n\t\tBowler Destructor Called...";
			}							
};

class Batsman : public Cricketer{
	private:
		string type;
		int total_runs;
		int match_played;
		int best_score;
	public:
		Batsman()
		{
			this->type = "";
			this->total_runs = 0;
			this->match_played = 0;
			this->best_score = 0;
			cout<<"\n\n\t\tBatsman Default Constructor Called...";
			}
		Batsman(string type, int total_runs, int  match_played, int best_score, string name, int shirtno, string dob, int odi_rating, int test_rating, int t20_rating, int startyear)	
		{
			this->type = type;
			this->total_runs = total_runs;
			this->match_played = match_played;
			this->best_score = best_score;
			this->name = name;
			this->shirtno = shirtno;
			this->dob = dob;
			this->odi_rating = odi_rating;
			this->test_rating = test_rating;
			this->t20_rating = t20_rating;
			this->startyear = startyear;
			cout<<"\n\n\t\tBatsman Parametarized Constructor Called...";
			}	
		int calculateBatAverage()
		{
			int avg;
			avg = total_runs / match_played;
			
			return avg;
			}
		void updateMatches(int m)
		{
			this->match_played = this->match_played + m;
			}
		void updateRuns(int r)
		{
			this->total_runs = this->total_runs + r;
			}
		~Batsman()
		{
			cout<<"\n\n\t\tBatsMan Destructor Called...";
			}					
};

class AllRounder : public Batsman , public Bowler{
	public:
		AllRounder()
		{
			cout<<"\n\n\t\tAll Rounder Constructor Called...";
			}
		~AllRounder()
		{
			cout<<"\n\n\t\tAll Rounder Destructor Called...";
			}	
};

int main()
{
	Batsman b("Opener", 1000, 10, 120, "Muzammil", 10, "23-04-2001", 2, 2, 2, 2015);
	return 0;
}