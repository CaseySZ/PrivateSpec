//
//  说明文档.h
//  PrivateSpec
//
//  Created by Casey on 27/11/2018.
//  Copyright © 2018 sunyong445. All rights reserved.
//


/*
 终端选择一个文件目录下开始执行命令
 1 pod lib create 新的库名 （如 pod lib create PrivateTest)
 1.1 然后会提示你选择: 平台，语言，是否创建demo，是否使用测试框架，是否基于view的测试, 答案依次是iOS,ObjC,YES,None,None
 1.2 然后主动会给你创建并打开了一个新的工程，PrivateTest-Example工程
 
 
 2 把需要的文件存放到工程的指定位置：PrivateTest/Classes/ 文件目录下
 
 3 然后在你的github创建一个空的Repository （注 选择MIT License）
 
 
 4 回到终端，进去到PrivateTest目录下  提交到github上（也可以利用工具）
 4.1     git add .
 4.2     git commit -m "first commit"
 4.3     git remote add origin https://github.com/xxxxx/PrivateTest
 4.4     git push -u origin master
 4.5     git tag 1.0.0
 4.6     git push --tags
 
 (如果 git remote 出错可以git remote rm origin
 或者 push时候出问题，就先 git pull origin master )
 
 
 5 pod spec lint 命令验证podspec索引文件 (注：pod lib lint是检索本地索引文件，pod spec lint 是本地和远程库同时检索)
 
 
 6 验证通过后，pod repo push <本地索引库> <索引文件名> - -allow-warnings 提交索引文件到远程索引库;(例：pod repo push PrivateTest PrivateTest.podspec)
 
 7 pod repo  查看第三方框架仓库源
 8 pod search PrivateTest
 
 总结： 1 通过 pod lib create  创建一个工程
 2 把这个工程push到github去
 3 然后提交.podspecs索引文件到仓库
 
 
 */


/*
 一、更新 cd到c本地仓库位置（classes目录下）
 git add .
 git commit -m "更新desc"
 git push origin master
 
 然后
 git tag -a '新版本号' -m 'Desc' (如 git tag -a 2.0.0 -m 'update')
 git push --tags
 
 二、其次修改.podspec文件
 
 1 s.version = '2.0.0'
 2 远程验证 pod spec lint --private
 3 更新索引库 pod repo push 索引库名称 .podspec （pod repo push PrivateTest PrivateTest.podspec）
 4 更新使用 pod update -no-repo-update
 
 */


/*
 
 注意，验证如果哟私有库，需要指定远程specs库校验
 pod spec lint 文件名.podspec --sources='https://github.com/xxx/xxxx,https://github.com/CocoaPods/xxx.git' --allow-warnings
 
 */


/*
 使用案例：
 
 platform :ios, "9.0"
 
 #source 'https://github.com/xxxxx/PrivateSpec.git'
 
 target "TestFFFF" do
 
 
 pod 'PrivateSpec', :git => 'https://github.com/xxxxx/PrivateSpec.git', :tag => '1.1.0'
 
 end
 
 */
