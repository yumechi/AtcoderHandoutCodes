N = int(input())
a, b = map(int, input().split())
K = int(input())
l = list(map(int, input().split()))
print("YES" if not (a in l or b in l or K != len(set(l))) else "NO")