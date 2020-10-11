w = 1000000000
n, m = map(int, input().split())

rows = list(map(int, input().split()))
cols = list(map(int, input().split()))
rmax = max(rows)
cmax = max(cols)

rmaxIdx = []
for i in range(len(rows)):
    if rows[i] == rmax:
        rmaxIdx.append(i)

# A의 최대값은 고정되어 있음
cost = (sum(rows) + rmax * (m - 1)) * w + sum(cols)
# 처음 내려갈 때 중복되는 B[0]의 갯수
cost +=  + cols[0] * rmaxIdx[0]
# A의 최대값이 두개 이상인 경우 B의 최대값 라인에서 주욱 내려감
cost += (rmaxIdx[-1] - rmaxIdx[0]) * cmax     
# 마지막 칸에서 내려가는 경로
cost += (n - 1 - rmaxIdx[-1]) * cols[-1]    
print(cost)
