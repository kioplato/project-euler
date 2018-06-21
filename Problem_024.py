#!/usr/bin/python2.7
# Problem_024.py

def next_lexical_permutation(number_list):
    number_list_len = len(number_list)
    # Locate pivot's index.
    pivot_index = None
    for i in range(-2, -number_list_len - 1, -1):
        if number_list[i] < number_list[i + 1]:
            pivot_index = i
            break
    if pivot_index == None:
        s = reduce(lambda x,y: x+str(y), number_list, '')
        number = int(s)
        print("This is the last permutation of the number: %d." % number)
        return
    # Locate the pivot's successor.
    pivot_successor_index = None
    pivot_successor = None
    for i in range(-1, pivot_index - 1, -1):
        if number_list[i] > number_list[pivot_index] and \
                (number_list[i] < pivot_successor or pivot_successor == None):
            pivot_successor_index = i
            pivot_successor = number_list[i]
    number_list[pivot_successor_index] = number_list[pivot_index]
    number_list[pivot_index] = pivot_successor
    number_list[pivot_index + 1:] = sorted(number_list[pivot_index +1:])
    return number_list

if __name__ == '__main__':
    number_str = raw_input("Input the number to permutate: ")
    n_permutations = input("Input the number of permutations to execute: ")
    number_list = [int(i) for i in number_str]
    permute_list = number_list
    for i in range(1, n_permutations):
        permute_list = next_lexical_permutation(permute_list)
    s = reduce(lambda x,y: x+str(y), permute_list, '')
    number = int(s)
    print(number)
