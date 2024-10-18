import csv
import re

csv_file = 'apple-twitter-sentiment-texts.csv'
text_array = [] # List to store all texts

with open(csv_file, 'r', encoding='utf-8') as file: # Open the csv file
    csv_reader = csv.reader(file)
    for row in csv_reader:
        text_array.append(row[0]) # The text is in the first column

def find_hashtags(text):
    # Convert text to lowercase
    text = text.lower()
    # Find all words or numbers that come after a # before a space
    matches = re.findall(r'#\w+', text)
    # Join the matches into a single string separated by spaces
    result = ' '.join(matches)
    return result

preprocessed_texts = [find_hashtags(text) for text in text_array] # Extract all hashtags from the texts

hashtags = [] # List to store all hashtags
for text in preprocessed_texts:
    if text != '': # If the text has hashtags
        hashtags.extend(text.split()) # Split the text by spaces and add the hashtags to the list

hashtag_counts = {}
for hashtag in hashtags: # Count the number of occurrences of each hashtag
    if hashtag in hashtag_counts:
        hashtag_counts[hashtag] += 1 # Increment the count if the hashtag is already in the dictionary
    else:
        hashtag_counts[hashtag] = 1 # Initialize the count to 1 if the hashtag is not in the dictionary

top_10_hashtags = sorted(hashtag_counts.items(), key=lambda item: item[1], reverse=True)[:10]  # Sort the hashtags by count in descending order and get the top 10

print(f"Total number of hashtags: {len(hashtags)}")
print(f"Total number of unique hashtags: {len(hashtag_counts)}")
print("Top 10 most frequently used hashtags:")
for hashtag, count in top_10_hashtags:
    print(f"{hashtag}: {count}")