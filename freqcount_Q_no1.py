str = "tawyrmytqreua em heugc jxv. eu prxuytum mamuynm jyuvxrom gjb bgug lrxn guugtom.gm uzrygum frxv murxjf nygmqrym gry jyybyb. yjtrapuexj qpbguym gjb ynpcxayy urgejejf rybqty remom. gvgryjymm em oya lxr gcc. ej g txjjytuyb vxrcb prxgtuehy yllxrum prxuytu ejlxrnguexj gjb ngejugej urqmu."

arr1 = []

for i in range(26):
        substr = "" + chr(i + 97)  + ""
        if str.count(substr) != 0:
            arr1.insert(0, ( str.count(substr), substr))

arr1.sort(reverse=True)
print("Frequency Of Single Character in Cypertext:\n",arr1)
arr2 = []

for i in range(26):
    for j in range(26):
        substr = "" + chr(i + 97) + chr(j + 97) + ""
        if str.count(substr) != 0:
            arr2.insert(0, ( str.count(substr), substr))

arr2.sort(reverse=True)
print("\n\nFrequency Of digraphs in Cypertext:\n",arr2)
arr3 = []

for i in range(26):
    for j in range(26):
        for k in range(26):
            substr = "" + chr(i + 97) + chr(j + 97) + chr(k + 97) + ""
            if str.count(substr) != 0:
                arr3.insert(0, ( str.count(substr), substr ))

arr3.sort(reverse=True)
print("\n\nFrequency Of trigraph in Cypertext:\n",arr3)