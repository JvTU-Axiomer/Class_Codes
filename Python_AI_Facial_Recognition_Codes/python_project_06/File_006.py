# 人生哪能多如意，万事只求半称心.
# @Time : 2023/5/31 19:21
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_06

""" 1、局部变量和全局变量 """
# 全局变量.
str1 = 'abcdef'


def test1(a):
    b = 100
    return a + b


print(test1(10))
''' 以下代码会报错！ '''
# print(a) # 局部变量
# print(b) # 局部变量

""" 2、在函数中修改全局变量 """
num = 20  # 全局变量


def test2():
    global num  # 标识这个函数内部不是定义一个局部变量，而是修改全局变量.
    num = 10
    # 以下打印的结果为num = 10.
    print(f'当前函数的局部变量是：{num}')


test2()