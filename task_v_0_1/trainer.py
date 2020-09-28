from random import randint
import json

delta = 1

C = 0
CPP = 0
CSHARP = 0
JAVA = 0
JS = 0
PHP = 0
PYTHON = 0

cIndex = 0
cppIndex = 1
cshIndex = 2
javaIndex = 3
jsIndex = 4
phpIndex = 5
pyIndex = 6

triger = 0
trigerExp = 0

N = 15
arrayOfW = [
    [86, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 86, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 86, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 86, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 86, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 86, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 86]
]

def getIndex(expected):
    if expected == 'C':
        return cIndex
    elif expected == 'Cpp':
        return cppIndex
    elif expected == 'CSharp':
        return cshIndex
    elif expected == 'Java':
        return javaIndex
    elif expected == 'JS':
        return jsIndex
    elif expected == 'PHP':
        return phpIndex
    elif expected == 'Python':
        return pyIndex

def getSize(index):
    sums = 0
    for j in range(N):
            sums += arrayOfW[index][j]
            print('ssssssuuuuuuukaaaa' + str(sums))
    return sums

def what(langName, answers, expected):
    print(expected + 'lannnnnnnnnnnnnnnnngsssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssssss')
    index = getIndex(langName)
    indexExp = getIndex(expected)

    sumArray = getSize(index)   
    sumArray2 = getSize(indexExp)
    
    global triger
    global trigerExp
    #triger = 0
    #trigerExp = 0
    target = True
    print('first sum1 -> ' + str(getSize(index)))
    print('first sum2 -> ' + str(getSize(indexExp)))
    print('begin triger size -> ' + str(triger))
    print('begin trigerExp size -> ' + str(trigerExp))

    if sumArray == 100 and sumArray2 == 100:
        for i in range(0, 15):
            if answers[i] == 1 and arrayOfW[index][i] > 0:
                arrayOfW[index][i] -= delta
                arrayOfW[indexExp][i] += delta
                triger += 1
                trigerExp += 1
        print('midel triger -> ' + str(triger))
        print('midel trigerExp -> ' + str(trigerExp))

        print('midel sum1 -> ' + str(getSize(index)))
        print('midel sum2 -> ' + str(getSize(indexExp)))
        #try:   
        while target == True:       
            if getSize(index) != 100 and getSize(indexExp) != 100:                      
                for i in range (0, N):         
                    print('in for -> ' + str(i))
                    if answers[i] == 0:
                        if triger > 0:
                            print('##################################################')
                            print('triger != 0 size -> ' + str(triger))
                            print('in else size index -> ' + str(getSize(index)))
                            print('##################################################')

                            if getSize(index) != 100:
                                print('baaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa' + str(i))
                                if i != N - 1:
                                    if answers[i + 1] == 0:
                                        #if arrayOfW[index][i + 1] > 0:
                                        print('index elements of array -> ' + str(arrayOfW[index][i]))
                                        arrayOfW[index][i] += delta
                                        triger -= 1 
                                        print('aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa')
                        else:
                            print('second sum1 -> ' + str(getSize(index)))
                            print('triger size -> ' + str(triger))
                        
                        if trigerExp > 0:                   
                            print('##################################################')        
                            print('trigerExp != 0 size -> ' + str(trigerExp))                           
                            print('in else size indexExp -> ' + str(getSize(indexExp)))
                            print('##################################################')
                            
                            if getSize(indexExp) != 100:
                                #if i != N - 1:
                                    #if answers[i + 1] == 0:
                                if arrayOfW[indexExp][i + 1] > 0:
                                    print('indexExp elements of array -> ' + str(arrayOfW[index][i]))
                                    arrayOfW[indexExp][i] -= delta              
                                    trigerExp -= 1                                                                                     
                        else:                           
                            print('second sum2 -> ' + str(getSize(indexExp)))                            
                            print('trigerExp size -> ' + str(trigerExp))
                            #raise Exception()
            elif getSize(index) == 100 and getSize(indexExp) == 100:
                target = False
                print('Error')

                                                                                               
        #except :
            #print('out triger size -> ' + str(triger))
            #print('out trigerExp size -> ' + str(trigerExp))
            #print('out sum1 -> ' + str(getSize(index)))
            #print('out sum2 -> ' + str(getSize(indexExp)))
            #print('end')
    else:
        print('sum1 -> ' + str(getSize(index)))
        print('sum2 -> ' + str(getSize(indexExp)))
        print('Error')
        exit(1)

def sort(answers, expected):
    global C
    global CPP
    global CSHARP
    global JAVA
    global JS
    global PHP
    global PYTHON

    for i in range(0, 7):
        for j in range(0, N):           
            if i == 0:                
                if arrayOfW[i][j] > 0 and answers[j] != 0:
                    C += arrayOfW[i][j]  
            elif i == 1:
                if arrayOfW[i][j] > 0 and answers[j] != 0:
                    CPP += arrayOfW[i][j]                    
            elif i == 2:
                if arrayOfW[i][j] > 0 and answers[j] != 0:
                    CSHARP += arrayOfW[i][j]
            elif i == 3:
                if arrayOfW[i][j] > 0 and answers[j] != 0:
                    JAVA += arrayOfW[i][j]
            elif i == 4:
                if arrayOfW[i][j] > 0 and answers[j] != 0:
                    JS += arrayOfW[i][j]
            elif i == 5:
                if arrayOfW[i][j] > 0 and answers[j] != 0:
                    PHP += arrayOfW[i][j]
            elif i == 6:
                if arrayOfW[i][j] > 0 and answers[j] != 0:
                    PYTHON += arrayOfW[i][j]
    
    out = [C, CPP, CSHARP, JAVA, JS, PHP, PYTHON]
    maxOut = max(out)

    if maxOut == C:
        if expected == 'C':
            print('C lang')
        else:
            what('C', answers, expected)
    
    if maxOut == CPP:
        if expected == 'Cpp':
            print('C++ lang')
        else:
            what('Cpp', answers, expected)

    if maxOut == CSHARP:
        if expected == 'CSharp':
            print('CSharp lang')
        else:
            what('CSharp', answers, expected)

    if maxOut == JAVA:
        if expected == 'Java':
            print('Java lang')
        else:
            what('Java', answers, expected)

    if maxOut == JS:
        if expected == 'JS':
            print('JS lang')
        else:
            what('JS', answers, expected)

    if maxOut == PHP:
        if expected == 'PHP':
            print('PHP lang')
        else:
            what('PHP', answers, expected)
    
    if maxOut == PYTHON:
        if expected == 'Python':
            print('Python lang')
        else:
            what('Python', answers, expected)        


with open('train_data.json', 'r') as f:
    train_data = json.load(f)

print('first -> ' + str(arrayOfW))

for i in range(10):
    for indexOfID in range(30):    
        sort(train_data['id' + str(indexOfID)]['answers'], train_data['id' + str(indexOfID)]['expected'])

with open('output.txt', 'w') as wf:
    for i in arrayOfW:
        for j in i:
            wf.write(str(j) + ' ')
        wf.write('\n')

print('last -> ' + str(arrayOfW))