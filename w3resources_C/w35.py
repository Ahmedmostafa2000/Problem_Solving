n = int(input())
s = list(map(int,input().split()))
counter=0
d = [None]*n
for i in range(len(s)):
	for j in range(i+1,len(s)):
		if s[i]==s[j] and not(s[i] in d):
			counter+=1
			d[i]=s[i]
print(counter)
