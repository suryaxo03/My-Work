from Pjt_ad import coll
import random
n = int(input("How many questions you want to attempt? "))
print("Please type the answer!")
correct = 0
wrong = 0
skip = 0
data = list(coll.find())
random.shuffle(data)
co = 0
c = 1
anLi = []
for i in data:
    ques = i.get('q')
    opt = set(i.get('opt'))
    cor = i.get('ans')
    print(f"Q{co+1}: {ques}")
    for i in opt:
        print(f"{c}) {i}")
        c += 1
        anLi.append(i)
    ans = int(input())
##    print(anLi)
##    print(cor)
    if anLi[ans-1] == cor:
        correct += 1
    elif ans == '':
        skip += 1
    else:
        wrong += 1
##    print(anLi[ans-1])
##    print(cor)
    co += 1
    c = 1
    anLi = []
    if co == n:
        break

print(f"You've attempted {n} questions of which {correct} were correct, {wrong} were wrong, and {skip} were skipped!")

