import time
st=time.process_time()
sum=0
for i in range(1000000000):
	sum+=1
et=time.process_time()
res=et-st
print(res)
