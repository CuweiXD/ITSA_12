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
#include<iomanip>
using namespace std;

int main()
{
    double x = 0;
    double ans = 0;

    cin >> x;
    ans = x * 1.6;

    cout << fixed << setprecision(1) << ans << endl;

    return 0;
}
```
