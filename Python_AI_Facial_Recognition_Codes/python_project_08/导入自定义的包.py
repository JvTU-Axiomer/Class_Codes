# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/6 15:16
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_08

# # 第一种
# import pkg_01.mod2
# import pkg_01.mod3
#
# # 调用包中模块的函数：
# pkg_01.mod2.print_hello()
# pkg_01.mod3.print_hello()

# 第二种
from pkg_01 import *

# 必须在__init__.py文件中提供一个__all__的特殊变量.
mod2.print_hello()
mod3.print_hello()
