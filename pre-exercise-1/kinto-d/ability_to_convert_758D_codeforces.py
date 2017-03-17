## Python 3- Accepted - 93 ms - 4512 KB

def convert_base(base, result_number, counter):

    if result_number == "":
        return 0
    else:

        slice_range = 0
        slice_num = 0

        for i in range(len(result_number), 0, -1):

            raw_num = result_number[-i:]
            slice_num = int(raw_num)

            if slice_num < base:

                if raw_num[0] == "0" and len(raw_num) != 1:
                    continue

                slice_range = i
                break


        print(slice_num, "*", base, "^", counter)
        return slice_num * base ** counter + convert_base(base, result_number[:-slice_range], counter + 1)

if __name__ == "__main__":

    # base_n = int(input())
    # result_number = input()
    # print(convert_base(base_n, result_number, 0))

    # Test Case
    print(convert_base(13, "12", 0) == 12, "\n")
    print(convert_base(16, "11311", 0) == 475, "\n")
    print(convert_base(20, "999", 0) == 3789, "\n")
    print(convert_base(17, "2016", 0) == 594, "\n")

    # Test Case 5..
    print(convert_base(1000, "1001", 0) == 100001, "\n")
    print(convert_base(1000, "1000", 0) == 100000, "\n")
