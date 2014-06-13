import io


n=int(raw_input())
for i in range(n):
	x,y=map(int,raw_input().split())
	if x%2!=0 and y%2!=0 :
		print str((x*y-1)/2)+'/'+str(x*y)
	else:
		print '1/2'

