def reversed(num):
    return int(str(num)[::-1])

if __name__ == "__main__":
    input_raw = input()
    i, j, k = [int(i) for i in input_raw.split()]

    beauty_day = 0
    for i in range(i, j+1):
        diff = abs(i - reversed(i))
        if diff % k == 0:
            beauty_day += 1

    print(beauty_day)