# 人生哪能多如意，万事只求半称心.
# @Time : 2023/5/28 15:49
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_05

""" 四、set集合（Set） """

# 创建集合
#   1.创建非空集合.
set1 = {10, 20, 30, 40}
set2 = set(['abc', 12, 'Axiomer', 90])
print(set1)
print(set2)
#   2.创建空集合.
set3 = set()
print(set3)

# 查询操作
#   1.查询某一元素是否在集合中.
if 20 in set1:
    print('存在集合中！')
else:
    print('不存在集合中！')
#   2.循环遍历.
for i in set1:
    print(i)

# 新增操作
#   1.新增单个元素.
set1.add(90)
set1.add(90)
print(set1)
#   2.新增多个元素，参数是列表.
set1.update([100, 110])
print(set1)

# 删除操作
set1.remove(10)
print(set1)

# 修改操作（无法通过下标修改单个元素）
set1.remove(110)
set1.add(1000)
print(set1)