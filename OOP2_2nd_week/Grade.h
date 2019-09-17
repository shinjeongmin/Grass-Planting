class Grade {
private:
	int score1;
	int score2;
	int score3;
public:
	Grade(int n1,int n2,int n3){
		score1 = n1;
		score2 = n2;
		score3 = n3;

	}

	double getAvg()
	{
		return (score1 + score2 + score3) / 3;
	}
};