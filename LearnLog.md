这里总结一些Git常用的命令
一、Git简介

二、安装Git

三、创建版本库
命令: mkdir learntGit         在当前目录下创建learntGit文件夹
     cd  learnGit            进入learnGit文件夹中
     pwd                     查看当前路径
     git init                将当前目录变成Git可以管理的仓库
     git add + 文件名         将文件添加到仓库，可多次提交（添加成功，没有任何显示）
     git commit -m + 提交说明  把文件提交到版本库

示例: 提交3个文件到版本库中
     git  add  file1.txt
     git  add  file2.txt  file3.txt
     git  commit -m  “add 3 files”

小结: 1.图片，视频是二进制文件，Git只知到大小变化，不能跟踪具体变化
     2.Microft的word格式也是二进制格式
     3.添加文件到Git仓库，分两步：
       第一步：使用命令 git add <file>,注意，可反复多次使用，添加多个文件
       第二步：使用 git commit，完成

四、Git开发常用命令
1.查看版本状态
  命令: git  status  查看当前版本库的状态
       git  diff    查看当前相对上一次提交修改的内容





五、远程仓库
1.将本地仓库与远程仓库关联同步
  命令: git remote add origin +远程仓库地址   将本地仓库关联远程仓库
       git push -u origin master           第一次推送master分支的所有内容到远程
       git push origin master              本地推送到远程(第一次之后）
  示例: 
  小结: 要关联一个远程仓库，使用命令  git remote add origin + 远程仓库地址，
       关联之后使用命令git push -u origin master第一次推送master分支的所有内容。 
       每次本地提交之后，只要有必要就可以使用命令git push origin master推送最新修改。

2.从远程仓库克隆文件到本地
  命令:git clone +远程仓库地址   克隆远程仓库到本地，相当于创建了与之关联的本地仓库
  示例:先使用cd命令切换到某个文件夹位置，然后使用如下命令:git  clone  git@github.com:DreamcoffeeZS/Demo_FDTemplateLayoutCell.git
  小结: 1.克隆仓库，首先要知道仓库地址(查看github)，然后使用git clone命令克隆。
       2.Git支持多种协议，包括https，但是通过ssh支持的原生git协议速度更快。
       3.执行该命令成功后，本地就会出现于远程仓库相关联的本地仓库，可以track远程仓库的变化

六、分支管理
七、便签管理
八、使用GItHub
九、自定义Git
十、自定义Git
