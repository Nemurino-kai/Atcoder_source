//ABC 073 D
#include <iostream>
#include <vector>
#include <array>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <map>
using namespace std;

#define INF (1<<29)

int N, M, R;
int d[201][201];
int r[9];
int A, B, C;
int res;
bool used[9];

//c:次に通過する町の数
//las:今いる町・最後に通った町
//dist:今現在の距離、最初は0からスタート
void dfs(int c, int las, int dist) {

	//すでにすべての町を通っているなら
	if (c == R + 1) {
		//距離を更新しておしまい
		if (res > dist)res = dist;
		return;
	}
	//そうでないなら
	for (int i = 1; i <= R; i++)
		//次はまだ通過していないi番目に向かう
		if(!used[i]) {
			//通過フラグを立て
			used[i] = true;
			//どの町もまだ通っていないなら距離0として探索を続け
			if (las == -1)dfs(c + 1, i, 0);
			//そうでないならここからの距離を加算し探索を続ける
			else dfs(c + 1, i, dist + d[r[las]][r[i]]);
			//最後に探索を終えて戻ってくるとき、通過フラグを取り消す
			used[i] = false;
		}

}

int main() {
	scanf("%d%d%d", &N, &M, &R);
	for (int i = 1; i <= N; i++)for (int j = 1; j <= N; j++)if (i != j)d[i][j] = INF;
	for (int i = 1; i <= R; i++)scanf("%d", &r[i]);//どの町を通れば良いか
	for (int i = 1; i <= M; i++) {
		scanf("%d%d%d", &A, &B, &C);
		//もし今現在の距離が与えられた距離より大きければ、与えられた距離に直す
		if (d[A][B] > C)d[A][B] = d[B][A] = C;
	}

	//ワーシャルフロイド法
	//単純な三重ループで書きやすいのが嬉しい
	for (int k = 1; k <= N; k++)
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				//経由した方が早いならそっちを最短距離に
				if (d[i][j] > d[i][k] + d[k][j])
					d[i][j] = d[i][k] + d[k][j];
	//これで各点間の最短距離が求まりました！

	res = INF;

	//あとはRすべてを通るときの最短距離を深さ優先探索で求める
	dfs(1, -1, 0);


	//最短距離を表示しておしまい
	printf("%d\n", res);




	return 0;
}