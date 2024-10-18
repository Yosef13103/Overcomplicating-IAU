import nltk
text1 = ["I", "am", "a", "student", "at", "Imam", "Abdulrahman", "Bin", "Faisal", "University", "and", "I'm", "studying", "AI","."]
text2 = "We are learning how to tokenize in Natural Language Processing using Python"

textarray = [text2]
for text in textarray:
    print(nltk.word_tokenize(text))

