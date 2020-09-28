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

arrayOfW  = []

#for i in range(0, 7):
#    tmp = []
#    sum = 0
#    for j in range(0, 14):
#        for sums in range(int(len(tmp))):
#            sum += tmp[sums]
#        if sum < 100:
#            tmp.append(randint(0, 100 % 14))
#    arrayOfW.append(tmp)    
arrayOfW = [
    [1, 45, 2, 28, 1, 4, 1, 1, 2, 0, 1, 2, 3, 4, 5],
    [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6],
    [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6],
    [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6],
    [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6],
    [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6],
    [6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6, 6]
]
questions = [
    "Кросплатформенна розробка?",
    "Розробка під андроїд?",
    "Розробка під MacOS/IOS?",
    "Розробка під Windows орієнтовані системи?",
    "Розробка під *nix орієнтовані системи?",
    "Написання скриптів?"
    "Розробка компонентів ядра ОС або драйверів?",
    "Розробка front-end?",
    "Розробка серверів?",
    "Розробка GUI?",
    "Розробка ігор?",
    "Написання продуктивного коду?"
    "Розробка для бізнесу?",
    "Робота з даними?",
    "Розробка систем штучного інтелекту"
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
    for j in range(14):
            sums += arrayOfW[index][j]
    return sums

def what(langName, answers, expected):
    index = getIndex(langName)
    indexExp = getIndex(expected)
    sumArray = getSize(index)   
    sumArray2 = getSize(indexExp)
    
    if sumArray == 100:
        for i in range(0, 14):
            if answers[i] == 1 and arrayOfW[index][i] >= 0:
                arrayOfW[index][i] -= delta
                #arrayOfW[indexExp][i] += delta
                sumArray = getSize(index)  
                #sumArray2 = getSize(indexExp)

    while sumArray == 100:
        sumArray = getSize(index)       
        #sumArray2 = getSize(indexExp)
        for i in range(0, 14):               
            if answers[i] == 0:
                if i != 13 and answers[i + 1] == 0:
                    arrayOfW[index][i] += delta
                    #arrayOfW[indexExp][i] -= delta
            #else:
                #arrayOfW[index][i] += delta       
                #arrayOfW[indexExp][i] -= delta 

def sort(answers, expected):
    global C
    global CPP
    global CSHARP
    global JAVA
    global JS
    global PHP
    global PYTHON

    for i in range(0, 7):
        for j in range(0, 14):           
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
    print(expected)
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

#print('last -> ' + str(arrayOfW))