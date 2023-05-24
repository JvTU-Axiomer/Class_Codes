# 人生哪能多如意，万事只求半称心.
# @Time : 2023/5/24 21:05
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_03

name = 'JvTU_Axiomer' # 姓名
age = 19 # 年龄
stu_id = 2021110991 # 学号

''' 输入身高（m）和体重（kg） '''
h = input('请输入身高（单位是米）：')
# print()
w = input('请输入体重（单位是千克）：')
# print()
print(type(h))
print(type(w))

''' 数据类型转换 '''
h = float(h)
w = int(w)
print(type(h))
print(type(w))

''' 计算BMI指数 '''
bmi = w / h ** 2

''' 输出BMI指数 '''
print(f'您的姓名：{name}，您的学号：{stu_id}', end='!')
print()
print(f'您的年龄（虚岁）为：{age + 1}')
print('您的BMI指数为：%.2f' % bmi)