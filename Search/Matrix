#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, m, tmp, cnt = 0; // кол-во строк, столбцов, tmp, cnt
    cin >> n >> m; // ввод кол-ва строк, столбцов
    vector <vector <int>> v(n); // объявление двумерного вектора

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int tmp;
            cin >> tmp;
            v[i].push_back(tmp);
        }
    }  // ввод матрицы




    // минимумом в своей строке и максимумом в своем столбце.



    vector <int> maxx (m); // вектор максимумов
    for (int j = 0; j < m; j++) {
        maxx[j] = v[0][j];      // максимум в j-том столбце равен j-тому значению в первой строке
        for (int i = 0; i < n; i++)
            if (v[i][j] > maxx[j])
                maxx[j] = v[i][j];    // проходимся по j-тому столбцу, если встречается значение больше максимума в этом столбце, максимумом становится оно
    }

    vector <int> minn (n);
    for (int i = 0; i < n; i++) {
        minn[i] = v[i][0];            // присваиваем i-тому минимуму первое значение
        for (int j = 0; j < m; j++)
            if (v[i][j] < minn[i])
                minn[i] = v[i][j];    // проходимся по строчке и ищем минимум
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((v[i][j] == minn[i]) && (v[i][j] == maxx[j]))
                cnt++;
        }
    }
    cout << cnt << endl;
}
