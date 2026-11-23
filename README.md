# FULL AUTO SORTER (V 0.01 Beta)

![Version](https://img.shields.io/badge/version-0.01_Beta-blue)
![License](https://img.shields.io/badge/license-MIT-green)
![Language](https://img.shields.io/badge/language-C++-orange)

一个基于 C++ 的命令行数字自动排序工具。支持自定义输入数字，并提供升序和降序排序功能。

A command-line automatic number sorter written in C++. It supports custom number inputs and provides both ascending and descending sorting.

---

## ✨ 功能特性 | Features

- **简单易用 | Easy to Use**：通过命令行交互，输入数字即可进行排序。Interactive command line, just input numbers to sort.
- **双向排序 | Bidirectional Sorting**：支持默认升序，以及通过 `[Reverse]` 命令切换为降序。Supports default ascending order, and descending order via the `[Reverse]` command.
- **严格输入校验 | Strict Input Validation**：使用 `strtof` 精准识别数字，拦截非数字乱码，防止程序出错。Uses `strtof` to accurately identify numbers and intercept invalid characters to prevent errors.
- **大小写兼容 | Case Insensitive**：所有命令均支持多种大小写输入（如 `[help]`、`[HELP]`、`help` 等）。All commands support multiple case combinations (e.g., `[help]`, `[HELP]`, `help`).
- **防止闪退 | Anti-Crash**：程序结束前会暂停，方便在 Windows 下双击运行查看结果。Pauses before exiting for better viewing on Windows.

---

## 🛠️ 如何编译 | How to Compile

本项目使用标准 C++ 编写，无需额外第三方库。

This project is written in standard C++ and requires no third-party libraries.

### Windows 环境 (使用 w64devkit / MinGW) | Windows Environment
打开命令行终端，进入项目目录，运行以下命令：

```bash
g++ FULL-AUTO-SORTER.cpp -o sorter.exe
```

Linux / macOS 环境 | Linux / macOS Environment

```bash
g++ FULL-AUTO-SORTER.cpp -o sorter
```

---

🚀 如何使用 | How to Use

启动程序 | Start the Program

· Windows: 双击 sorter.exe 或在终端输入 ./sorter.exe
· Linux/macOS: 在终端输入 ./sorter

命令列表 | Command List

命令 (Command) 说明 (Description)
[Help] 显示帮助信息 (Display help information)
[Done] 完成输入，开始排序 (Finish input and start sorting)
[Reverse] 开启降序排序模式 (Enable descending sorting)
[License] 查看开源许可证信息 (View license information)
[Exit] 直接退出程序 (Exit the program)
数字 (Numbers) 输入任意数字，回车确认 (Input any number and press Enter)

示例 | Example

```text
 ____________________________
|                            |
|      FULL AUTO SORTER      |
|____________________________|
|         V 0.01 Beta        |
|____________________________|
[Help] command to display the help information 

> 15
-----
> 3.14
-----
> -8
-----
> [Reverse]
> [Done]

-----------------------------------------------------------
15
3.14
-8
```

---

📄 开源协议 | License

本项目基于 MIT License 开源。
This project is licensed under the MIT License.

你可以免费使用、复制、修改、分发本项目，但需保留原作者的版权声明。详情请查看 LICENSE.txt 文件。

You are free to use, copy, modify, and distribute this project, provided the original copyright notice is retained. See the LICENSE.txt file for details.

---

👨‍💻 作者 | Author

· [Lee]

欢迎提出建议或提交 PR！Feel free to open an issue or submit a PR!