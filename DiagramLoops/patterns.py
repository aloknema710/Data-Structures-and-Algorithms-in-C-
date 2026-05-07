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

def pattern7(rows):  # pyramid
    for i in range(rows):
        for j in range(rows-i-1):
            print(' ',end=' ')
        
        for k in range((2*i) + 1):
            print('*',end=' ')

        for l in range(rows-i-1):
            print(' ',end=' ')
        
        print()

def pattern8(rows):  # pyramid opp
    for i in range(rows):
        for j in range(i):
            print(' ',end=' ')
        
        for k in range(2*(rows - i)-1):
            print('*',end=' ')

        for l in range(i):
            print(' ',end=' ')
        
        print()

def pattern9(rows):  # pyramid
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

def pattern10(rows):  #pyramid
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

def pattern12(rows):
    space = 2*(rows - 1)
    for i in range(1,rows+1):
        for j in range(1,i+1):
            print(j,end=' ')

        for k in range(1,space+1):
            print(" ",end=" ")

        for l in range(i,0,-1):
            print(j,end=' ')

        print()
        space = space - 2

def pattern13(rows):
    num = 1
    for i in range(1,rows+1):
        for j in range(i):
            print(num, end=' ')
            num+=1
        print()

def pattern14(rows):
    for i in range(rows):
        for j in range(i+1):
            print(chr(j+65),end=' ')
        print()

def pattern15(rows):
    for i in range(rows):
        for j in range(rows-i):
            print(chr(j+65),end=' ')
        
        print()

def pattern16(rows):
    for i in range(rows):
        for j in range(i+1):
            print(chr(65+i),end=' ')
        print()

def pattern17(rows):
    for i in range(rows):
        char = 0
        for j in range(rows-i):
            print(' ',end=' ')
        for k in range(2*i+1):
            print(chr(65+char),end=' ')
            if k >= i :             # instead of dividing it by 2 we can check if k exceed i we decrement char
                char = char - 1
            else:
                char = char + 1
        print()

def pattern18(rows):
    for i in range(rows):
        char = rows - i
        for j in range(i+1):
            print(chr(65+char-1),end=' ')
            char = char + 1
        print()

def pattern19(rows):
    for i in range(2*rows-1):
        for j in range(max(1,abs(rows-i))):
            print('*',end=' ')
        for k in range(2*(rows-max(1,abs(rows-i)))):
            print(' ',end=' ')
        for j in range(max(1,abs(rows-i))):
            print('*',end=' ')
        print()

# def pattern20(rows):
#     for i in range(2*rows-1):
#         stars = i+1
#         if(stars>rows):
#             stars = stars - 
#         for j in range(stars):
#             print('*',end=' ')
        
            
#         print()

def pattern21(rows):
    for i in range(rows):
        for j in range(rows):
            if i ==0 or j == 0 or i == rows-1 or j == rows - 1:
                print('*',end='')
            else:
                print(' ',end='')
        print()

def pattern22(rows):
    for i in range(2*rows-1):
        num = rows
        for j in range(2*rows-1):
            top = i
            bottom = (2*rows - 2)-i
            left = j
            right = (2*rows - 2)-j

            minDist = min(top,bottom,left,right)
            print(rows-minDist,end=' ')
        print()


def pattern55(rows):
    for i in range(rows):
        for j in range(rows):
            if i == j:
                print('*',end=' ')
            elif i > j:
                print('#', end=' ')
            else:
                print('$', end=' ')
        print()

def pattern56(rows):
    for i in range(rows):
        val=1
        for j in range(rows):
            if i == j:
                print('*',end=' ')
                val = 1
            elif i > j:
                print(val,end=' ') 
                val+=1
            else:
                print(val,end=' ')
                val+=1
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
# pattern10(3)
# pattern11(5)
# pattern12(3)
# pattern13(5)
# pattern14(5)
# pattern15()
# pattern16(5)
# pattern17(5)
# pattern18(5)
pattern19(5)
# pattern20(5)
# pattern21(4)
# pattern22(4)



# pattern55(5)
# pattern56(7)