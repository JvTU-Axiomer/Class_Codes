# 人生哪能多如意，万事只求半称心.
# @Time : 2023/5/28 14:44
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_04
import random # 专门产生随机数的模块.

print("-" * 50)
print("欢迎来到 Axiomer 的《猜数游戏》")
print("规则一：系统每次会自动生成一个1~10之间的随机数")
print("规则二：每次游戏最多只能猜三次")
print("规则三：进入游戏或者继续玩，输入：yes或者y")
print("规则三：离开游戏，输入：no或者n")
print("-" * 50)

i = 0 # 定义一个玩游戏的次数.
while True:
    g_num = random.randint(1, 10) # 产生一个1 ~ 10之间的随机数.
    order = input('请输入是否开始游戏：')
    if order == 'yes' or order == 'y':
        i += 1
        for j in range(1, 4): # for循环中最多允许用户猜三次.
            my_num = int(input('请输入所猜的数字：'))
            if my_num == g_num:
                print(f'恭喜你！猜中了！就是数字：{my_num}')
                break
            elif my_num > g_num:
                print(f'您猜的数字太大了，还剩下{3 - j}次！')
            else:
                print(f'您猜的数字太小了，还剩下{3 - j}次！')
    elif order == 'no' or order == 'n':
        break

print("谢谢！ GAME OVER")