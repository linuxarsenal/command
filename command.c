kernel 内核（所有对硬件的操作）即 管理内存 管理硬件驱动程序 交换空间
shell 用户交互界面
file system 逻辑结构 应用结构 
applycation 应用软件
diffirent shell : Bourne shell  Korn shell C shell Bourne-again shell
/ : absolute pathname 
  : relative pathname 
file system for solaris
    / : opt第三方软件  etc配置文件  dev外围硬件对应的文件 usr操作系统自带的用户必用的 kernel内核程序 var管理员用的 export home  用户有用的
up  to 256 characters can be entered on a single command line

Login :ctrl+Alt+(F1-F6)
Logout:ctrl+Alt+F7 logout
User Accounts
 /etc/passwd 用户信息
 root:x(密码):0(权限):1(组编号):Super:User(用户描述信息):/（绝对路径）:/bin/sh(shell)
 /etc/shadow 用户名字密码
Login root : su
clear: clear the terminal screen
cd:change directories
cd ..:当前directories
pwd:display the current directory 
ls:list of the file directories
ls -a:display the hidden file
ls -R:display a recursive(di gui)listing
ls -t:sort by time
ls -l:display the long list
d(类型) rwx(拥有者权限) r-x(同组人权限) r-x(所有者权限)  4(链接号：即几个名字) user(拥有者) nobody(拥有组) 1024(内容大小) Feb 22 09:20(最后一次修改时间) a.txt(文件)
seven file :"-"普通文件"d"目录"l"链接文件"c"字符设备文件"b"块设备文件"p"管道文件"s"套接字文件   seven file 在磁盘分区都有独立的索引号和数据号

File system :ls -F 
       / directories file 
       * 可执行 file
       (none)文本文件
       @ 快捷方式
File permission 
  r rid
  w wrigt
  x 可执行
touch:creat new empty file or mordification
mkdir:creat directory 
mkdir -p:一次创建多个 directory
cp:拷贝 
cp[-i]:提示 信息
cp -r: cp -r dir3 dir4
mv:移动
mv[-i]:提示信息
mv dir5 dir6

rm:remove file  
rm -i:提示信息
rmdir:remove empty directory

rm -r:remove directory

(gzip bzip 一次只能压缩一个文件)
gzip file
bzip2 file
zip my.zip file1  file2

归档
tar cvf all.tar file1 file2 file3
tar cvfz all.tar.gz file1 file2 file3(归档压缩)
解档
tar xvf all.tar
tar xvfz all.tar.gz
tar xvfz all.tar.gz -c:解到指定的目录

ln:link 
ln -s:软链接   软链接索引号和数据号与原来不同

man: cha kan shouce
man -k:查看关键字

ls d*:显示一d开头的的任何文件

ls d?:列出以d开头后面只有一个字符的
ls z?.txt:列出以z开头一.txt结尾的



ls[b-f]b*:开头的是b-f范围内
ls[fF]f*a?c:以f或F 开头的



cd;ls:按顺序依次执行命令

|：管道文件  前一命令的输出到后以命令的输入

cat 10 2004 > a.txt:覆盖行重定向
cat 10 2004 >> a.txt:追加型重定向

cat <file.txt> file2.txt:file redirect


cat:display the contect of a text file on the screen

cat /etc/passwd | awk(二次处理) -F(把每一行内容分割):（按：分割） '{print(显示) $1(第一) "\t"(字符tab) $6(第六)}' \（续行标志 下一行和上一行是同一行） | sort(排序) > ~/userinfo

more:cha kan file neirong 

head [-n]:头几行
tail[-n]:尾几行

sort: 排序
sort -u: 排序显示


uniq:去出相邻的行


diff -u: 对比内容和属性
diff -u file1 file2

file:查看文件类型


echo:输出

echo -e
echo -n


script: 锁定屏幕
