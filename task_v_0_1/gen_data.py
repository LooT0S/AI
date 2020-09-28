import json

data = {
    "id0" : {
        "answers" : [1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0],
        "expected" : "C"
    },
    "id1" : {
        "answers" : [0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0],
        "expected" : "C"
    }, 
    "id2" : {
        "answers" : [0, 0, 1, 0 , 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0],
        "expected" : "C"
    },
    "id3" : {#
        "answers" : [ 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0],
        "expected" : "C"
    },
    "id4" : {#
        "answers" : [ 0, 1, 1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1],
        "expected" : "Cpp"
    },
    "id5" : {#
        "answers" : [ 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0],
        "expected" : "Cpp"
    },
    "id6" : {
        "answers" : [0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0],
        "expected" : "Cpp"
    },
    "id7" : {
        "answers" : [0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0],
        "expected" : "Cpp"
    },
    "id8" : {
        "answers" : [0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0],
        "expected" : "Cpp"
    },
    "id9" : {
        "answers" : [0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0],
        "expected" : "Cpp"
    },
    "id10" : {
        "answers" : [0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0],
        "expected" : "Cpp"
    },
    "id11" : {
        "answers" : [0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0],
        "expected" : "Cpp"
    },
    "id12" : {
        "answers" : [0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0],
        "expected" : "Cpp"
    },
    "id13" : {
        "answers" : [0, 1, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 0],
        "expected" : "CSharp"
    },
    "id14" : {
        "answers" : [0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0],
        "expected" : "CSharp"
    },
    "id15" : {
        "answers" : [0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0],
        "expected" : "CSharp"
    },
    "id16" : {
        "answers" : [0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0],
        "expected" : "CSharp"
    },
    "id17" : {
        "answers" : [1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0],
        "expected" : "Java"
    },
    "id18" : {
        "answers" : [1, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0],
        "expected" : "Java"
    },
    "id19" : {
        "answers" : [1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0],
        "expected" : "JS"
    },
    "id20" : {
        "answers" : [0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 0],
        "expected" : "JS"
    },
    "id21" : {
        "answers" : [0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0],
        "expected" : "JS"
    },
    "id22" : {
        "answers" : [1, 0, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0],
        "expected" : "JS"
    },
    "id23" : {
        "answers" : [1, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0],
        "expected" : "PHP"
    },
    "id24" : {
        "answers" : [1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1, 0],
        "expected" : "PHP"
    },
    "id25" : {
        "answers" : [0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0,],
        "expected" : "PHP"
    },
    "id26" : {
        "answers" : [1, 0, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1],
        "expected" : "Python"
    },
    "id27" : {
        "answers" : [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
        "expected" : "Python"
    },
    "id28" : {
        "answers" : [1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, ],
        "expected" : "Python"
    },
    "id29" : {
        "answers" : [1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0],
        "expected" : "Python"
    },
    "id30" : {
        "answers" : [1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0],
        "expected" : "Python"
    }
}

with open("train_data.json", "w") as write_file:
    json.dump(data, write_file)