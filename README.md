# 題目12. 遞迴程式練習
### 問題描述：
給定下列遞迴函式 :

請計算出 f (k) 。

### 輸入說明：
輸入值為一個大於 1 的整數。

### 輸出說明：
f(k) 的計算結果。

### 範例：
#### 輸入範例:
10

12

#### 輸出範例:
60

94

### 解答
```
#include <iostream>
using namespace std;

int f(int(x))
{

    if (x == 0 || x == 1) {

        return x + 1;
    }

    else if (x > 1) {
        return f(x - 1) + f(x / 2);
    }

}
int main()
{
    int x;
    cin >> x;
    cout << f(x) << endl;
}
```
