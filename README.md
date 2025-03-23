

# **ZERO_ONE 智能仓储管理系统**

仓库管理系统（WMS）概念参考：

- [Wikipedia: Warehouse Management System](https://en.wikipedia.org/wiki/Warehouse_management_system)  
- [百度百科：仓库管理系统](https://baike.baidu.com/item/%E4%BB%93%E5%BA%93%E7%AE%A1%E7%90%86/9163356)


# **项目简介（Project Overview）**

**ZERO_ONE 智能仓储管理系统** 是一款面向现代供应链场景设计的 **仓库管理系统**，致力于帮助企业实现从仓储到配送全链路的库存可视化管理与订单履约优化。

该系统通过协调资源调度与物料流动，提升空间利用率与设备投资回报率，广泛适用于分销、制造、重资产及服务型业务。

在当前动态、多渠道（Omnichannel）的电商环境中，消费者期待“随时下单、随地履约、自由退货”。ZERO_ONE_WMS 旨在通过现代化的软件架构，响应此类挑战，提供以下能力：

- 实时库存追踪（Real-time Inventory Tracking）
- 全链路可视化（End-to-End Visibility）
- 支持手机 & 浏览器远程访问
- 快速响应客户订单变更


# **系统架构**

本系统基于 `Spring Cloud Alibaba` 微服务生态构建，后端采用 `MySQL` 进行数据持久化，前端基于 `Vue3 + Element Plus` 实现响应式界面。同时支持 `C++` 微服务模块集成，并通过 `Jenkins` 实现自动化 CI/CD 部署。

![系统架构图](./documents/00、preview-pic/architecture.jpg)


# **项目结构（Project Structure）**

```bash
zero-one-10wms
├── .gitignore         # Git 忽略规则
├── README.md          # 项目说明文档
├── documents/         # 开发文档、环境配置、编码规范等
├── wms-java/          # Java 微服务核心模块
├── wms-cpp/           # C++ 后端服务模块
└── wms-frontend/      # 前端 Vue3 项目
```


# **软件技术栈（Tech Stack）**

# 后端技术栈（Java）

核心依赖包括：

- Spring Boot, Spring Cloud, Spring Web MVC, Spring Security
- MyBatis & MyBatis-Plus
- Druid 数据库连接池
- Sentinel、Seata、RocketMQ、Nacos 等分布式组件
- Swagger/Knife4j 接口文档
- MapStruct、EasyExcel、Lombok 等开发加速工具


# 前端技术栈（Frontend）

- Vue 3 + Composition API
- Vue Router 4 + Pinia 状态管理
- Axios 通信中间件
- Element Plus 组件库
- Echarts 图表展示、SheetJS 报表导出
- wangEditor 富文本编辑、PDFObject PDF 预览
- 支持打印、验证码、Vitest 测试框架等插件集成



# 后端技术栈（C++）

- OAT++：现代化 Web 框架
- MySQL Connector / Redis++ / MongoDB Driver
- OpenSSL + JWT 安全模块
- FastDFS 文件存储
- YAML 配置解析、xlnt 报表导出
- RocketMQ 消息中间件集成
- ZXing 二维码/条形码生成


# 环境依赖（Environment Requirements）

# 开发工具推荐

- IntelliJ IDEA、VS、VS Code、PowerDesigner、MindMaster、Axure、Apipost
- Docker、Maven、CMake、Git、Jenkins 等构建与部署工具

# 开发运行环境

| 环境项 | 推荐版本 |
|--------|----------|
| 操作系统 | Windows 10+ / WSL / Anolis OS 8.6 |
| JDK     | 1.8.0_191+ |
| Node.js | v20+ |
| MySQL   | 8.0+ |
| Redis   | 6.2+ |
| Jenkins | latest |

> 完整环境依赖请参考项目 `documents/` 目录中的安装文档。


# 特别致谢（Special Thanks）

感谢以下开源项目提供的支持与灵感：

- [Spring](https://github.com/spring-projects)
- [Alibaba 开源生态](https://github.com/alibaba)
- [MyBatis](https://github.com/mybatis/mybatis-3)
- [Vue.js](https://github.com/vuejs)
- [Oat++](https://github.com/oatpp/oatpp)

以及无数未在此列出的开源贡献者 🙏


