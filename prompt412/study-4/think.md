# prompt 412 Study

- https://www.acmicpc.net/group/practice/1969/259

## A. 관중석

- https://www.acmicpc.net/problem/10166
- 혼자서는 못 풀었을 문제였는데, 스터디의 도움으로 풀었다. 이래서 함께 공부하는 게 중요하구나.
- 각 원에 n개의 좌석이 있을 때 앞 좌석과 겹치지 않는 좌석수를 구하는 문제
- d1 <= n <= d2인 각 n에 대해 1 / n ~ (n - 1) / n으로 구한 값 중 유니크한 값의 수를 구하면 된다.
- 0 <  v < 1 인 v를 double로 비교했다가 실패
- 최소공배수를 곱해서 정수로 만들려고 했는데 또 실패
- 연우의 힌트를 얻어 기약분수를 만들어서 해결
- 기약분수를 맏드는 데는 gcd 값을 사용하면 된다.

### 기약분수 만들기

```
a / b  == (a / gcd) / (b / gcd)
```

### gcd 코드

```
int gcd(int a, int b) {
    while (b!= 0) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}
```

## B. 검문

- https://www.acmicpc.net/problem/2981
- 아직 못 풀고 스터디 시간을 넘김
- 다시 도전하자.
