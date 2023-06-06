# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/6 14:51
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_08

"""
导入模块的5种方式

1. import 模块名
2. from 模块名 import 函数名
3. from 模块名 import *
4. import 模块名 as 别名
5. from 模块名 import 函数名 as 别名
"""

# 1. import 模块名
import math

print(math.log2(4))

# 2. from 模块名 import 函数名
from math import log2

print(log2(16))

# 3. from 模块名 import *
# * 代表通配符.
from math import *

print(log2(26))
print(log10(100))

# 4. import 模块名 as 别名
import math as mt

print(mt.log2(8))

# 5. from 模块名 import 函数名 as 别名
from math import log10 as ln

print(ln(100))
