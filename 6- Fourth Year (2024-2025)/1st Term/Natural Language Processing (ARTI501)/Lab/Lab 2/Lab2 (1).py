import csv
import re

csv_file = 'apple-twitter-sentiment-texts.csv'
text_array = [] # List to store all texts

with open(csv_file, 'r', encoding='utf-8') as file: # Open the csv file
    csv_reader = csv.reader(file)
    for row in csv_reader:
        text_array.append(row[0]) # The text is in the first column

def preprocess_text(text):
    text = text.lower()
    text = re.sub(r'[^\s#\w-]', ' ', text) # replace all characters that are not alphanumeric, whitespace, or # wih a space to separate words
    return text

preprocessed_texts = [preprocess_text(text) for text in text_array] # Preprocess all texts

hashtags = [] # List to store all hashtags
for text in preprocessed_texts:
    print(text)
    hashtags.extend(re.findall(r'#\w+', text))  # Find all hashtags in the text (# followed by alphanumeric characters)

hashtag_counts = {}
for hashtag in hashtags: # Count the number of occurrences of each hashtag
    if hashtag in hashtag_counts:
        hashtag_counts[hashtag] += 1 # Increment the count if the hashtag is already in the dictionary
    else:
        hashtag_counts[hashtag] = 1 # Initialize the count to 1 if the hashtag is not in the dictionary

top_10_hashtags = sorted(hashtag_counts.items(), key=lambda item: item[1], reverse=True)[:10] # Sort the hashtags by count in descending order and get the top 10

print(f"Total number of hashtags: {len(hashtags)}")
print(f"Total number of unique hashtags: {len(hashtag_counts)}")
print("Top 10 most frequently used hashtags:")
for hashtag, count in top_10_hashtags:
    print(f"{hashtag}: {count}")