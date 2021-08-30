t = int(input())
while t > 0:
    t -= 1
    string = input()
    sorted_characters = sorted(string)
    firtAlphabet = 0
    sum = 0
    for i in range(len(sorted_characters)):
        if sorted_characters[i].isdigit():
            sum += int(sorted_characters[i])
            firtAlphabet = i + 1
    print(''.join(sorted_characters)[firtAlphabet:] + str(sum))
