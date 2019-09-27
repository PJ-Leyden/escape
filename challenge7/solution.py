#/bin/python3

our_phrase="hacksu is a pretty cool"
answer=[]
# Makes everything lowercase
our_phrase = our_phrase.lower()
# split things into arrays of words
words=our_phrase.split(" ")
# for each word...
for word in words:
  # take all but the first letter
  # add to first letter to end
  # add ay to the end
  answer.append("ay"+word[-1:]+word[:-1])

# Join everything back together and seperate by spaces
print(" ".join(answer))