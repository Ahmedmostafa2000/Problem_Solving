def minion_game(string):
    # your code goes here
    p = {"Kevin": set(), "Stuart": set()}
    v = ['A', 'O', 'U', 'E', 'I']
    for i in range(len(string)):
        if string[i] in v:
            for j in range(i + 1, len(string)):
                p["Kevin"].add(string[i:j])
        else:
            for j in range(i + 1, len(string)):
                p["Stuart"].add(string[i:j])
    return p

out = minion_game(input())
best = list(out.values())
if len(best[0])>len(best[1]):
    print('Kevin',len(best[0]))
elif len(best[0])<len(best[1]):
    print("Stuart",len(best[1]))
else:
    print('draw')