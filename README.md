# 民航票务系统的设计与实现

文件夹说明、程序介绍、程序使用说明、源代码说明、附录：我们的开发进程、写在最后  
Copyright 2020 By HuaCL,WilliamsLay,TangYL

> Written BY HuaCL  
> 本程序源代码及程序说明文档遵循 CC BY-SA 4.0 协议进行共享，但注意程序设计报告和答辩PPT等相关程序设计课程文档不包含在内。
> --------------------------------------------------------------------------------------
> 本文档最后于20210909由WilliamsLay补充修改放置于其个人仓库，原文档存于HuaCL库中，该程序的详细操作部分详见[bilibili:C语言大作业究竟可以做成什么样？——民航票务系统的设计与实现](https://www.bilibili.com/video/BV1Et4y1X7VN)

## 文件夹说明

* **Data 文件夹**  内存储着程序运行必要的数据文件。
* **IMAGES 文件夹**  内存储着程序运行所需的必要图片文件。
* **SorceFile 文件夹**  内存储着程序的所有代码文件和头文件。  
* **exe 文件**  为编译完成的可执行文件，可以直接双击运行。  
  * **注意**：若要运行exe文件，请确保“明航票务系统.exe”和“IMAGES”、“Data”文件夹在同一个目录下。

## 程序介绍

* 首先在这里我需要说明的是，从本程序立项之初，我们小组就确立了一个目标：尽量贴近真实生活中的相关民航票务系统，如相关的旅游网站，订票软件等。我们不想写一个简简单单的黑框框，局限于书本教给我们的最简单最基础的知识，就算是把这次的程序设计课程糊过去了。  
* 在语言和第三方库的选择上面，我们选择了easyx第三方库作为图形绘图支持。对于小组成员而言，都是刚刚接触计算机编程；在编写本程序代码期间，也仅仅是刚完成了C语言的学习、刚刚接触C++语言和面向对象编程的思想。有很多优秀的图形框架/API如Qt、MFC等虽较为易用且功能强大但对我们来说仍较为复杂，上手需要一段时间，且都是基于C++和面向对象编程的思想。由此，我们选择了较为简单但现阶段足够使用的easyx第三方库来使用。
* 最终我们程序设计的实验设备和环境是：
  * 硬件：微型计算机
    * 软件：Windows 10 （版本2004）、Microsoft Visual Studio Community 2019（版本16.5.3）
    * 语言：C++ 14
    * 编译器：MSVC 2017
    * 第三方库：easyx
* 本程序我们主要设计了三个界面：欢迎界面、管理员界面、普通用户界面。分别由汤艺林(TangYL)同学、华文嘉(HuaCL)同学、雷尚远(williamsLay)同学进行编写。我们基本完成了一个较为完整可用且实用民航票务管理系统。当然，由于我们的水平，本程序和那些真正的管理系统有非常大的差别，但是在一定范围内的基本功能，如登录注册，航线航班数据的简单管理，订票，订单管理，乘客添加均已实现。
* 这个程序必定和真正意义上的民航票务系统有很大的差别，编写这个程序的目的主要还是学习巩固我们的相关知识，初步了解一下程序设计，同时加强一下自己的交流沟通能力。可以说，这些，我们做到了。

## 程序使用说明

* 打开“民航票务系统.exe”进入我们的程序，在程序开始会自动导入存在Data文件夹下的数据文件。**注意**，本程序的正常运行需要屏幕显示分辨率大于1280*720像素，否则可能导致程序显示不完整。
* 开始/欢迎界面
  * 进入到欢迎开始界面，可以输入我们预设的几组用户登录进我们的系统，在这里列出：
  * 管理员用户
    * Username：B19030314  
      Password：B19030314
    * Username：B19030315  
      Password：B19030315
    * Username：B19030334  
      Password：B19030334
    * Username：Admin  
      Password：Admin
  * 普通用户
    * Username：19030314  
      Password：19030314
    * Username：19030315  
      Password：19030315
    * Username：B19030334  
    Password：19030334
  * 其中，用户19030314里存有我们预设的三位乘机人，当然，你也可以根据自己的需要添加。
    * 在欢迎开始界面，还可以进行普通用户/管理员用户的注册，**注意**对于管理员用户，我们引入了邀请码机制来防止非管理员用户注册成管理员，我们的邀请码是“**B190303**”。
    * 输入了正确的账号密码后，系统会判断用户类型（普通用户/管理员）然后进入相应的管理员后台信息管理系统/订票系统。
* 管理员用户航班信息管理系统
  * 进入到管理员用户航班信息管理系统，显示主页。航班信息管理系统主要由三部分组成，菜单栏，侧边栏，主要内容显示区域。
    * 主页
      * 在主页可以看到昨日和今日的一些基本航班信息，包括和进行数据库的导入导出操作。
      * 在主页的侧边栏内单击导入航线数据，进入导入数据库的界面，在这里确认导入数据的路径后选择确认导入、取消导入、更改路径。
      * 同上，还有导入机票数据、导出航线数据、导出机票数据
    * 查找
		* 单击菜单栏当中的查找按钮，进入查找界面。查找界面内有四种查找方式，分别为：按航班号查询、按起飞地查询、按将落地查询、按起降地查询。
		* 单击侧边栏内的相关搜索条件，输入关键词（大小写不敏感）进行查询。**注意**这里输入的机场为IATA三字代码（大小写不敏感）。  
		* 如果查找到了单一航班，程序会显示这个航班的详细信息，包括该航班的航班号、执飞航司、开航日期、基准标价（经济舱基准票价）、舱位、机型、起飞机场、降落机场、起飞时间、降落时间、飞行时长。和近12次飞行的正晚点情况。
			* 单击航班详情界面侧边栏内的查询正晚点按钮，进入界面查询本年度（2020年）的正晚点情况（默认显示在今天所在的日期）。单击起飞或者到达时间可以更改起飞到达时间且程序会自动更新正晚点情况（根据中国民航局的规定，航班落地时间比计划时间延迟15分钟为延误）。
			* 单击上下翻页按钮，可以进行翻页查询本年度（2020年）的正晚点情况。在这里需要注明的是，这里的实际起飞到达时间是我们使用随机数模拟出来的，并不是真实的时间。
		* 如果查询到多个航班，程序分页显示简略信息，用户可以单击上下页按钮进行翻页，也可以点击具体的航班进入详细信息显示。详细信息显示界面的操作同上。
			* 单击起飞时间，可以将查找到的航班按照起飞时间由早到晚进行排序。
	* 添加
		* 单击菜单栏上的添加按钮，进入添加航线界面。
		* 在添加航线界面输入航班号时，会进行查重，若重复，不允许添加。程序会在输入框右侧提示。
		* 单击确认添加，程序会检查是否输入了所有信息。若检查通过，这显示添加成功（如下图显示），数据库增加一条信息。注：在输入部分信息时，如航班号，执飞机型等时，程序会自动匹配相关信息，输出在右侧。
  * 删除
		* 单击菜单栏上的删除按钮，进入删除航线界面。按照航班号进行查找后，程序会给出信息予以确认。在删除时，会删除掉本航班的所有信息，包括所有订单信息，请谨慎使用本功能。
	* 更改
		* 单击菜单栏上的更改按钮，进入更改界面。
* 订票系统
	* 主页
		* 在主页部分可以对该账号下的乘车人信息，账号信誉积分，预订航班信息，账号头像，当前时间等信息进行总览。其中头像部分为预设头像。
		* 点击头像框所在位置，可以更改头像。系统会弹出挑选头像界面。这里预置了15个头像，当点击头像，图片会放大呈现。
		* 点击添加乘车人加号按钮，就会进入添加乘车人界面。如若乘车人已达5人，则会提示不能继续添加乘车人。  
			* 点击姓名，身份证号码，手机号码都会显示输入框。**注意**姓名输入框建议使用微软拼音输入中文。身份证号码需长为18位，手机号码需小于等于11位。若输入长度有误，则会提示输入错误。按回车键结束输入。
		* 点击删除乘车人则进入删除乘车人界面。
	* 订单
		* 点击订单则会显示该账号下的历史订单。
		* 点击的单项栏目则会进入详情界面。
	* 订票
		* 点击订票，则会进入订票界面。
		* 依次输入起飞地，目的地的机场编号，计划出行月，出行日，则会显示查询到的航班列表。如果出行日期超出预订范围会提示超出范围。
			* 点击起飞时间处会按照起飞时间的早晚进行排序。
			* 点击想要预订的航班列，会进入详细界面。
				* 点击订票按钮。会要求用户选择乘车人，舱位，座位。其中座位的选择与乘客人数有关。点击空白座位即可选中。
				* 如果信誉积分较低，则无法继续订票，会提示错误。
				* 当点击确认，即订票成功。可以去订单界面查看详情。
	* 改签/退票
		* 点击改签，退票按钮进入改签退票界面。显示今日起至以后的所有订票记录。
		* 点击进入详情界面。
			* 点击退票即会退掉此张飞机票。
			* 点击改签则会进入同订票相同的界面，此处不再一一说明。当完成订票行为后后台自动退掉此张飞机票，并提示改签成功。
	* 退出
		* 为防止误点，当点击退出按钮后，会出现提示信息。
		* 当点击确认即自动退出程序并保存数据。

## 源代码说明 
* 本程序源代码除了使用了c/c++标准库之外，还使用了easyx第三方库，以实现图形界面操作。  
	若想要查看、编译本程序源代码，请确保计算机内装有easyx。在这里给出其官网地址：[easyx.cn](https://easyx.cn/)  
	在官网上可以下载到免费的easyx库。
	补充申明：由于我们在编写时为202006，easyx还未进行大更新，现在easyx已经进行了一次版本大更新，涉及到比较重要的一个界面操作函数被完全重构和废弃了，如若使用本代码，可以尝试一下旧版easyx，官网提供的最早版20200902版本测试可以使用，但是使用性能可能会比较差，使得动画不流畅。后期视情况可能会进行重构。
* 如果你要使用visual studio打开、查看、编译、运行我们的源代码，需要在项目属性内设置设置以下内容以帮助程序的正常运行：
	* C/C++ -> 语言 -> 符合模式 -> “否”
	* 高级 -> 字符集 -> 使用多字节字符集
	* C/C++ -> 预处理器 -> 预处理器定义 -> 增加“_CRT_SECURE_NO_WARNINGS”
* **注意：** 如果你需要正常使用我们的源码，是不能脱离我们的 **IMAGES** 和 **Data** 文件夹内的内容的。
* 对于**Data 文件夹**内的样例数据，在这里做简要说明：
	* Default_FlightID_Database.txt中存放我我们从中国国际航空公司获取的一份航班时刻表，共计632条。此份数据可以帮助我们测试相应的航线搜索、排序功能。
	* Default_Ticket_Database.dat中存储了一年（2020年）的对应上述FlightID内所有航线的实际起飞降落时间等数据，可以帮助我们测试相应的正晚点查询，订票功能。
	* Passenger.dat和users.dat中分别存储了我们预设的部分账号信息，便于我们测试相应的登录函数。
* 在这里就我们的源代码文件做简要说明：
	* main.cpp  
	主函数入口
	* Struct.h  
	结构体定义和宏定义  
	本文件被所有的其余文件包含
	* StartMENU.h / StartMENU.cpp  
	起始界面菜单函数
	* AdminMENU.h / AdminMENU.cpp  
	管理员界面菜单函数
	* CustomMenu.h / CustomMenu.cpp  
	乘客界面菜单函数
	* Function.h / Function.cpp  
	功能性函数
	* Match.h / Match.cpp  
	用于匹配缩写与全称的函数
	* MENUchoose.h / MENUchoose.cpp  
	获取鼠标位置进行选择的函数
	* Print.h / Print.cpp  
	显示内容的函数

## 附录：我们的开发进程
### 确定基本功能及框架
* Basic Function：
	* 主界面（欢迎界面/各功能入口）
	* 用户登入/登出界面（管理员游客认证/旅客信息填写与认证）
	* 机票/航班信息管理\[admin]（录入/修改/删除相关数据）
	* 机票/航班信息查找\[user]（查询/按照要求排列相关数据/航班信息时间表）
	* 机票/航班预订\[user]（预售/改签/退票）
	* 旅客信息管理\[admin]（旅客个人信息查询/已定机票/按照航班查询乘客）
* Advanced Functions：
	* 图形界面
	* 更完善的机票/航班信息系统\[admin]（机型/航司/登机口/舱位）
	* 更完善的机票/航班预订\[user]（价格波动/退票费/改签费/舱位、座位选择）
		
### 小组分工：
* HuaCL\[面向管理员的大部分功能]：
	* 航班信息录入、录入时进行查重；
	* 航班信息的查看查找，包括其所搭载的旅客信息；
	* 航班信息的删除、更改、按特定顺序排
	* 航班信息的文件写入；
* TangYL\[面向用户的大部分功能]：
	* 新用户注册、基本信息填写、密码更改;
	* 管理员验证；
	* 旅客信息录入、录入时进行信息准确度查询；
	* 旅客信息的文件写入
* williamsLay\[面向旅客的大部分功能]：
	* 订票、退票、改签、选座界面及相关限制；
	* 余票查询、航班查询、排序\[面向客户]； 
	* 旅客订票信誉；

### Day 4 20200329
* 小组项目进展
	* 所有成员在相关订票软件/网页上进行了实际使用，明确了自己要完成的相关功能
	* 基本分工暂且不变
	* 由于c语言大家都有些生疏，故项目进度稍有推迟。过去几日进行了c语言相关内容的复习与回顾。
	* 已明确主要函数的功能
	* 具体已开工编写代码部分：
		* 用户注册和登录部分代码
		* 航班信息读取、显示、写入文件部分代码
	* 已在github上创建仓库用于组员协同
	* 预计在本周完成基本代码编写并进行代码合体

### Day 5 20200330
* 小组项目进展
	* 下午小组进行的电话讨论，确定了几个具体的问题，比如数据的查找，座位的定义，票价等，并相应的更改的相关结构体  
	具体内容有：
		* 结构体FlightID中增加票价一栏，用于基准票价的计算
		* 结构体FlightTicket中删除了余票信息一栏，而是使用一个数组来代表座位用于标明订座情况
		* 对单通道飞机和双通道飞机设置两种座舱布局

### Day 11 20200405
* 小组项目进展
	* 所有组员已经基本完成自己的代码编写工作，主要内容有：
		* 航班信息的录入，查找，删除，更改，排序，文件读取与写入；
		* 用户注册、基本信息填写、密码更改，找回密码，用户与管理员的区分；
		* 机票的订票、退票、改签、选座；
	* 部分功能仍在完善/调试。
	* 预计本周进行主菜单的编写，代码合并工作。并同期进行联合调试。

### Day 18 20200412
* 小组项目进展
	* 本周二(4.7)小组进行代码合并的相关讨论，确定了菜单界面的样式
		* 菜单分为程序开始的用户注册登录菜单(TangYL负责）
		* 以及登陆过后根据登录用户性质面对的管理员（HuaCL负责）/普通用户（williamsLay负责）菜单
	* 同时，组员相互之间共享了已编写的功能函数，利于代码重用，并利用这些函数开始了自己菜单的逻辑设计和代码编写  
	至周日，组员已经基本完成了自己的菜单编写（由于GUI菜单界面的编写较为复杂，最终的代码合并稍有推迟）
	* 明天（4.13）小组将进行最后一次电话讨论，将所有的代码合并并进行最后的联合调试。

## 写在最后

* 不知道会不会真的有人看到这个地方，其实在这里，我想写一些可能与我们的程序设计课程不怎么相关但我觉得很有意义的内容。
* 上文的“附录：我们的开发进程”乍一看，好像觉得我们的程序设计也没什么，很轻描点淡写。但实际上，没一个经历过程序设计的同学、每一个用心参加的程序设计的同学、我的组员，都知道这并不是什么简单的历程。
* 在6月17日时，我往我们的开发进程的md文件里面提交了一项更改：

   > ### DAY Ultimate 鬼知道我们什么时候才能真正写完
   > * 你就去翻翻我们的git提交记录，你就会发现，和我们的进度完全不一样。20200617  

* 这其实说明了一个问题，计划永远赶不上变化，我们的实际情况远没有那份开发进程显的那么顺利。在答辩的上午，我们还在改着各种奇奇怪怪的bug。在答辩的演示部分，我们又出现了新的问题。虽然说现在的我们程序已经非常完善，但是曾经，它漏洞百出，报错一报几千个，是我们一点一点改成现在的样子，一个较为完善的程序。
* 我们曾经打电话从下午一点打到凌晨三点，我们曾经改程序改到日出，我们曾经彷徨过，我们曾经试图放弃过。但是，我们最终坚持了下来。因为我们知道，在这里我们能学习到了很多。最终，我们交出了一份至少让我们满意的答卷。
* **在最后的最后，感谢我的组员：雷尚远(williamsLay)同学和汤艺林(TangYL)同学，以及我们的指导老师：南京邮电大学的严英老师，她给了我们很大的帮助和包容。**  
* 以上
