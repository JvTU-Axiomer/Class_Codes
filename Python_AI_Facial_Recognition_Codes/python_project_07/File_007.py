# 人生哪能多如意，万事只求半称心.
# @Time : 2023/6/3 8:37
# @Author : JvTU_Axiomer
# @Version : 
# @IDE : PyCharm
# @Project : python_project_07

import random

lst = ['石头', '剪刀', '布']


def start_window():
    print("***************************")
    print("--------1. 进入游戏---------")
    print("--------0. 退出游戏---------")
    print("***************************")


def start_game():
    print("*************************")
    print("--------1.石   头--------")
    print("--------2.剪   刀--------")
    print("--------3.     布--------")
    print("--------0.退出游戏--------")
    print("*************************")


def print_result(m, n, result):
    """
    打印游戏的结果.
    :param m: 用户输入的.
    :param n: 电脑随机生成的.
    :param result: 结果字符串.
    :return:
    """
    my_choice = lst[m - 1]  # 将输入的数字转换成文字（1.石头 2.剪刀 3.布）
    com_choice = lst[n - 1] # 将输入的数字转换成文字（1.石头 2.剪刀 3.布）
    print(f"你的选择是：{my_choice}.")
    print(f"对方（电脑）的选择是：{com_choice}.")
    print(result)


print("欢迎来到我的猜拳游戏！")
while True:
    start_window()  # 进入欢迎界面.
    i = int(input("请输入你的选择："))  # 进入游戏或者退出游戏.
    if i == 1:  # 用户开始游戏.
        start_game()
        m = int(input("请输入你的选择："))
        if m == 0:
            break;  # 退出游戏界面.
        if m < 1 or m > 3:
            print("输入的数值不合法！")
            print("再见！")
            break
        # 电脑随机生成随机数：
        n = random.randint(1, 3)  # 闭合的区间范围.
        if m == n:
            print_result(m, n, "平局！")
        elif m - n == 1 or m - n == -2:
            print_result(m, n, "对不起，你输了！")
        else:
            print_result(m, n, "恭喜你，你赢了！")
    elif i == 0:
        print("退出游戏！")
        print("再见！")
        break
    else:
        print("输入的数值不合法！")
        print("再见！")
        break
