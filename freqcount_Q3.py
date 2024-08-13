str="ANILKO FRCY IDOWPBLV, YB SPBLSPNY CG FKDT NZ GTSM CG FRCY OPNDFKLULY. FRCY YBKFSFLV ZULY YPHTFECV, UBFR FRCY IDLN HRLULUOV TIRMRFSX KDNY NZ PTKCSC TICYFYCY CIMXLUOV FRLGKMLZ FRCY GTCYPE. YB RLDTNY DM RECYPY GTUHSH, CYOSGLPS RLNYSPLN ZUBFHTNHSH, KDNY CDLMDPNY TIFDFRFKURKO WRBYLY THPO FRCY YPKULY. LU FRCY TYCDLUPR, YB QKFRTSPS KHMNDA NZ FNOQBHST, LGDHBRKO QUIHIQNHCXYI KDNY HRKHLUOV REGLSBLY. FRCY ULQRER YBST OXXC KDNY OCFDLV, UBFR FRCY RDZY BACNCN QC REKHLY. RB ZULY NZ YPNFFTNI PEFNYP THPO FRCY IARESC KDNY MIRESC QC TYTSDSDZ SLTF, NZ FLKDEF CG STOXLNDCEB UBFR DKBKST KDNY FDFL GCSFLV"
arr1 = []
for i in range(26):
        substr = "" + chr(i + 65)  + ""
        if str.count(substr) != 0:
            arr1.insert(0, ( str.count(substr), substr))

arr1.sort(reverse=True)
print("Frequency Of Single Character in Cypertext:\n",arr1)
arr2 = []

for i in range(26):
    for j in range(26):
        substr = "" + chr(i + 65) + chr(j + 65) + ""
        if str.count(substr) != 0:
            arr2.insert(0, ( str.count(substr), substr))

arr2.sort(reverse=True)
print("\n\nFrequency Of digraphs in Cypertext:\n",arr2)
arr3 = []

for i in range(26):
    for j in range(26):
        for k in range(26):
            substr = "" + chr(i + 65) + chr(j + 65) + chr(k + 65) + ""
            if str.count(substr) != 0:
                arr3.insert(0, ( str.count(substr), substr ))

arr3.sort(reverse=True)
print("\n\nFrequency Of trigraph in Cypertext:\n",arr3)
