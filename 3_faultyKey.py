tempT = input()
S = input() 
operations=0
oneLast=[]
lastLast=[]

i=0
for c in range(len(S)):
	substr = S[:len(S)-i]
	oneLast.append(substr)
	substr = S[i:]
	lastLast.append(substr)
	i+=1
lastLast.remove(S)
i=0
for ele in oneLast:
	status=False
	if ele in tempT:
		status=True
	while status:
		status=False
		operations=operations+i+1
		tempT=tempT.replace(ele,'',1)
		if ele in tempT:
			status=True
	i+=1

i=0
length=len(S)
for ele in lastLast:
	status=False
	if ele in tempT:
		status=True
	while status:
		status=False
		operations=operations+(length*2)-i
		tempT=tempT.replace(ele,'',1)
		if ele in tempT:
			status=True
	i+=1
print(operations)