# rows = int(input())
# cols = int(input())

def pattern1(rows,cols):
    for i in range(rows):
        for j in range(cols):
            print('*',end=" ")
        print()

def pattern2(rows,cols):
    for i in range(rows):
        for j in range(i+1):
            print('*',end=' ')
        print()

def pattern3(rows,cols):
    for i in range(rows+1):
        for j in range(1,i+1):
            print(j, end=' ')
        print()

def pattern4(rows,cols):
    for i in range(1,rows+1):
        for j in range(1,i+1):
            print(i,end=' ')
        print()

def pattern5(rows,cols):
    for i in range(rows):
        for j in range(rows-i,0,-1):
            print('*',end=' ')
        print()

def pattern6(rows,col):
    for i in range(rows):
        for j in range(1,rows-i+1):
            print(j,end=' ')
        print()

def pattern7(rows):
    for i in range(rows):
        for j in range(rows-i-1):
            print(' ',end=' ')
        
        for k in range((2*i) + 1):
            print('*',end=' ')

        for l in range(rows-i-1):
            print(' ',end=' ')
        
        print()

def pattern8(rows):
    for i in range(rows):
        for j in range(i):
            print(' ',end=' ')
        
        for k in range(2*(rows - i)-1):
            print('*',end=' ')

        for l in range(i):
            print(' ',end=' ')
        
        print()

def pattern9(rows):
    for i in range(rows):
        for j in range(rows-i-1):
            print(' ',end=' ')
        
        for k in range((2*i) + 1):
            print('*',end=' ')

        for l in range(rows-i-1):
            print(' ',end=' ')
        
        print()
    for i in range(rows):
        for j in range(i):
            print(' ',end=' ')
        
        for k in range(2*(rows - i)-1):
            print('*',end=' ')

        for l in range(i):
            print(' ',end=' ')
        
        print()

def pattern10(rows):
    # for i in range(rows):
    #     for j in range(i+1):
    #         print('*',end=' ')
        
    #     print()

    # for k in range(rows-1,0,-1):
    #     for l in range(k):
    #         print('*',end=' ')
            
    #     print()

    for i in range(2 * rows - 1):
        
        # decide number of stars
        if i < rows:
            stars = i + 1
        else:
            stars = 2 * rows - i - 1

        # print stars
        for j in range(stars):
            print('*', end=' ')
        
        print()

def pattern11(rows):
    for i in range(rows):
        start = 0
        if i%2 == 0:
            start = 1
        else:
            start = 0

        for j in range(i+1):
            print(start,end=' ')
            start = 1 -start
        print()


def pattern14(rows):
    for i in range(rows):
        for j in range(i+1):
            print(chr(j+65),end=' ')
        print()


# pattern1(3,4)
# pattern2(3,4)
# pattern3(3,4)
# pattern4(3,4)
# pattern5(5,4)
# pattern6(5,4)
# pattern7(5)
# pattern8(5)
# pattern9(5)
# pattern10(5)
# pattern11(5)

pattern14(5)