### 崩溃捕获整理
* 大神的经验告诉我们：正视问题，才有机会把它解决。
* 开发者开发过程中，如果能够秉持不规避问题的心态，尽可能多的暴露问题、解决问题。那这个产品正在走向优秀的路途上。

### Crash的类型

- 一种是由EXC_BAD_ACCESS引起的，原因是访问了不属于本进程的内存地址，有可能是访问已被释放的内存；
- 另一种是未被捕获的Objective-C异常（NSException），导致程序向自身发送了SIGABRT信号而崩溃。


```
其实对于未捕获的Objective-C异常，我们是有办法将它记录下来的，

如果日志记录得当，能够解决绝大部分崩溃的问题。

这里对于UI线程与后台线程分别说明。
```

```
//信号量截断、系统错误，C++层、底层的错误：比如野指针，除零，内存访问异常等等。
InstallSignalHandler();

```
```
//系统异常捕获、未捕获异常：objective-c的NSException（数组越界等）。
InstallUncaughtExceptionHandler();

```
注意：此工具仅捕获了异常，如需要上传log，需要自己实现。
可参考下次启动的时候来发送日志信息。