#include <iostream>

using namespace std;

const int MAX = 100 + 1;
int N, M,K;
int paper[N][M];

int main()
{
	int Cnt = 0;
	cin >> N >> M >> K;
	for (int i = 0; i < K; i++)
	{
		int choice, Num;
		cin >> choice >> NuM;

		if (chcie == 0)
		{
			if (Num >= M / 2)
			{
				for (int i = 0; i < Num; i++)
				{
					for (int i = 0; i < M; i++)
					{
						paper[i][j] += 1;

					}
				}
				Cnt + ;
			}
			else
			{
				for (int i = Num; i < N; i++)
				{
					for (int i = 0; i < M; i++)
					{
						paper[i][j] += 1;

					}
				}
				Cnt + ;
			}
		}

		if (choice == 1)
		{
			if (Num >= N / 2)
			{
				for (int i = 0; i < N; i++)
				{
					for (int i = 0; i < Num; i++)
					{
						paper[i][j] += 1;

					}
				}
				Cnt + ;
			}
			else
			{
				for (int i = 0; i < N; i++)
				{
					for (int i = Num; i < M; i++)
					{
						paper[i][j] += 1;

					}
				}
				Cnt + ;
			}
		}

		if (Num >= M / 2)
		{
			for (int i = 0; i < Num; i++)
			{
				for (int i = 0; i < M; i++)
				{
					paper[i][j] += 1;

				}
			}
			Cnt + ;
		}

	}
	for (int i = 0; i < N; i++)
	{
		for (int i = 0; i < M; i++)
		{
			cout << paper[i][j] << " ";

		}
		cout << endl;
	}

	

}