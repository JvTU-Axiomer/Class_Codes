# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/6 15:03
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_08

"""
my_module_01.py
"""

# 当别人调用该模块的代码时，只允许调用test1()函数：
# 只能导入这个列表中指定的元素.
__all__ = ['test1']


def test1(a, b):
    print(a + b)


def test2(a, b):
    print(a * b)


# 只有在当前文件中调用该函数时才会执行，其他导入的文件内不符合该条件，则不会执行test1()函数调用.
if __name__ == '__main__':
    # 这是我们的测试代码：
    test1(10, 10)
