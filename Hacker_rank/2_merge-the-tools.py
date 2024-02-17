def merge_the_tools(string, k):
    # your code goes here
    m = len(string)
    text = string[0]
    for i in range(1,m):
        if string[i]==text[-1]:
            pass
        else:
            text+=string[i]
    m = len(text)
    seg = m//k
    for i in range(k):
    	print(text[i*seg:(i+1)*seg])
merge_the_tools("AABCAAADA",3)