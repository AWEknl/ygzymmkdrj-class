/*
---------------------------------------------------------+
+       +                                                +
---------                                                +
+       +                                                +
---------                                                +
+       +                                                +
---------                                                +
+       +                                                +
---------                                                +
+       +                                                +
---------                                                +
+       +                                                +
---------                                                +
---------------------------------------------------------+*/
#include <stdio.h>
int asd()
{
    printf("---------------------------------------------------------+\n");
}
int abab()
{
    printf("---------                                                +\n");
}
int acac()
{
    printf("+       +                                                +\n");
}
int main()
{
    int a, b, c, d, q;
    asd();
    printf("+退出7  +是否退出,是请输入一个数字                         +\n");
    printf("---------是否查看帮助手册是 请输入8                        +\n");
    printf("+help 8 +是否查看更新日历 请输入9                          +\n");
    printf("---------是否查看关于 请输入0                              +\n");
    printf("+       +当前版本:class7                                  +\n");
    abab();
    acac();
    abab();
    acac();
    abab();
    acac();
    abab();
    asd();
    printf("请输入:");
    scanf("%d", &q);
    switch (q){
    case 7:
        printf("AWEkn1\n");
        break;
    case 8:
        printf("AWEkn1\n");
        asd();
        printf("---------你输入的是%d                                    +\n",&q);
        printf("+退出7   +                  帮助手册                      +\n");
        printf("---------在每个提示的下方都会有一些数字                    +\n");
        printf("+help 8 +比如7退出                                       +\n");
        printf("---------那么当你在输入数字的时候应该输入,在键盘中输入一个7  +\n");
        printf("+       +然后按下回车键/Enter    例:按下7+Enter            +\n");
        printf("---------提示Exit就可以将程序退出。                        +\n");
        printf("+       +当然，你也不用刻意去记他                          +\n");
        printf("---------因为每个程序对应的数字都是给你写好的。             +\n");
        printf("+       +按照你需求用即可                                 +\n");
        printf("---------哈哈，事实上页面端我都不会写。                     +\n");
        printf("+       +所以这就是只存在于命令框中了。                     +\n");
        printf("---------               上一页1--------下一页2            +\n");
        asd();
        printf("请输入:");
        scanf("%d", &q);
        switch (q)
        {
        case 2:
        asd();
        printf("+退出7  +一些常见问题                                     +\n");
        printf("---------有其他的欢迎留言，当然现在没有常见问题              +\n");
        printf("+help 8 + a13579003@outlook.com                          +\n");
        printf("--------- 3502384248@qq.com                              +\n");
        acac();
        abab();
        abab();
        acac();                                              
        acac();
        abab();
        printf("+       +           上一页1--------下一页2                +\n");
        printf("---------				  -------------------------AWEkn1+\n");
        asd();
        printf("请输入:");
        scanf("%d", &q);
        break;
        default:
            printf("exit");
            break;
        }
        break;
    case 9:
    asd();
    printf("+退出7  +                   更新日历                      +\n");
    printf("---------class1 2022.5.30 15:03                          +\n");
    printf("+help 8 +添加了一个退出按钮，然后没了                       +\n");
    printf("---------class2 2022.5.30 16:24                          +\n");
    printf("+       +添加1个使用方法,使用方法是。。。。。。啥也没有。    +\n");
    printf("---------class3 2022.5.30 20:22                          +\n");
    printf("+       +修复了一个bug。                                  +\n");
    printf("---------class4 2022.5.31 9.31                           +\n");
    printf("+       +补充使用方法，并在里面添加了更新日历和当前版本      +\n");
    printf("---------界面修改了一番。修复了2个bug                      +\n");
    acac();
    printf("---------        上一页1--------下一页2                   +\n");
    asd();
    printf("请输入:");
    scanf("%d", &q);
    switch (q)
    {
    case 2:
    asd();
    printf("+退出7   +class5 2022.5.31 20:12                          +\n");
    printf("---------添加关于                                         +\n");
    printf("+help 8 +class6 2022.5.31 22:22                           +\n");
    printf("---------添加上一页                                       +\n");
    printf("+       +class7 2022.6.2 20.22                           +\n");
    printf("---------移除上一页，并减少体积                            +\n");
    printf("+       +                                                +\n");
    printf("---------当前版本:class7                                  +\n");
    acac();
    abab();
    acac();
    printf("---------        上一页1--------下一页2                   +\n");
    asd();
    printf("请输入:");
    scanf("%d", &q);    
        break;
    }
    break;
    case 0:
    asd();
    printf("+退出7  +                   关于                          +\n");
    printf("---------关于ygzymmkdrj这个项目其实只是我的一个想法         +\n");
    printf("+help 8 +以目前的来看,应该是class版本                      +\n");
    printf("---------至于拿它干什么嘛，我不太确定                       +\n");
    acac();
    abab();
    acac();
    abab();
    acac();
    abab();
    acac();
    abab();
    asd();
    printf("请输入:");
    scanf("%d", &q);
    break;
    default:
        printf("exit");
        break;    
    }
    return 0;
}