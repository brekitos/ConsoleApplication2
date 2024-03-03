#include <iostream>
using namespace std;

class Player
{
private:
	int score;
	string name;
public:
	
	void Enter(int i)
	{
		cout << "Enter name of Player" << i+1 << ": ";
		cin >> name;
		cout << "Enter score of Player" << i + 1 << ": ";
		cin >> score;
	}
	void bubblesort(Player arr[], int x)
	{
		for (int i = 0; i < x - 1; i++) {
			for (int j = 0; j < x - i - 1; j++) {
				if (arr[j].score < arr[j + 1].score) 
				{
					swap(arr[j], arr[j + 1]);
				}
			}
		}
	}
	void Show()
	{
	
		cout << name << '\t' << score << endl;
	}
};

int main()
{
	int x;
	cout << "Enter the number of players: ";
	cin >> x;
	Player* arr = new Player[x];
	for (int i = 0; i < x; i++)
	{
		arr[i].Enter(i);
	}
	cout << '\n' << "Name\t" << "Score" << endl;
	for (int i = 0; i < x; i++)
	{
		arr[i].bubblesort(arr,x);
	}
	for (int i = 0; i < x; i++)
	{
		arr[i].Show();
		
	}
	delete[] arr;
}