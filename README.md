# 介绍

My第一个xposed项目，copy自大神Wrbug`https://github.com/WrBug/dumpDex`

# dumpDex-Android脱壳

> 插件需要在xposed环境中使用,支持市面上大多数加密壳,软件仅供学习用，请勿用于其他用途,项目不是成品，可能会引起软件崩溃

### 编译环境

Android Studio 3.0

**无法脱壳，请在 [PackerInfo.java](app/src/main/java/com/hypdncy/dumpdex/PackerInfo.java#L31)文件中，将应用的包名加到packages字段里，编译安装即可,欢迎提交Pull Requests，让软件更加全面**

### 支持设备

大多数xposed环境的手机，暂不支持模拟器


### 使用方式

下载源码编译或者下载apk包并安装，应用xposed模块后重启，运行加固的应用后，插件会自动将dex文件dump到 **/data/data/包名/dump** 目录

**apk文件不会实时更新，获取最新apk请自行编译源码**

### 源码编译

将源码下载或者clone到本地，使用android studio打开，编译成功后，安装apk，将 **lib/armeabi-v7a/libnativeDump.so** 复制到 */data/local/tmp/libnativeDump.so* ，权限 设置为777，arm64机型还需要将将 **lib/arm64-v8a/libnativeDump.so** 复制到 */data/local/tmp/libnativeDump64.so*可以通过文件管理器操作，也可以使用如下adb shell命令

```bash
#仅适用于32位手机
adb shell
su
cp /data/data/com.hypdncy.dumpdex/lib/libnativeDump.so /data/local/tmp
chmod 777 /data/local/tmp/libnativeDump.so

```

配置完成后激活xposed重启即可



### 相关文章(网友分享)

[dumpDex 脱壳原理](http://liteng1220.com/blog/articles/dumpdex-principle/)

[Android逆向之路---脱壳360加固原理解析](https://juejin.im/post/5c1934226fb9a04a0b221c3c)
