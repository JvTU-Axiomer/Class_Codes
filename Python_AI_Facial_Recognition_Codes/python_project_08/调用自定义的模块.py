# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/6 15:04
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_08

"""
调用自定义的模块.py
"""
from my_module_01 import *

test1(20, 20)

'''此处不可调用test2()函数，因为在自定义模块my_module_01.py中通过__all__变量指定了在其他文件中只能导入test1()函数.'''
# test2(10, 10)
