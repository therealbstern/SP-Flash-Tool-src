
#include "constString.h"
#include <QTextCodec>
#include <QObject>

QString strEngVec[] = {
    QObject::tr("Failed to Start Updater.exe!"),
    QObject::tr("Crashed!"),
    QObject::tr("Please load a DA before execution."),
    QObject::tr("Please load a scatter file before execution."),
    QObject::tr("Time out!"),
    QObject::tr("Unknow Error!"),
    QObject::tr("Open Download Agent File"),
    QObject::tr("Bin File (*.bin)"),
    QObject::tr("Open Scatter File"),
    QObject::tr("Map File (*.txt);;All Files(*.*)"),
    QObject::tr("Download Ok"),
    QObject::tr("The chip is not supported by flash tool! Please check if it is valid."),
    QObject::tr("The storage type is not supported by flash tool! Please check if it is valid."),
    QObject::tr("Please select one ROM at least before execution."),
    QObject::tr("Form&at"),
    QObject::tr("Format Ok"),
    QObject::tr("Your Software is up to date now."),
    QObject::tr("(Runtime Trace Mode)"),
    QObject::tr("(Advanced Mode)"),
    QObject::tr("(Mark NAND Bad Blocks Mode)"),
    QObject::tr("Warning: The program is running, still continue?"),
    QObject::tr("Exit"),
    QObject::tr("Please load Preloader or DSP_BL before execution."),
    QObject::tr("Memory &Test"),
    QObject::tr("Select one item at least"),
    QObject::tr("Memory Test Ok"),
    QObject::tr("Save file as..."),
    QObject::tr("Open OTP file..."),
    QObject::tr("No com port detected."),
    QObject::tr("Find com port failed."),
    QObject::tr("Failed to register USB device notification."),
    QObject::tr("&Parameter"),
    QObject::tr("Write OTP Ok"),
    QObject::tr("Read OTP Ok"),
    QObject::tr("&Readback"),
    QObject::tr("Readback Ok"),
    QObject::tr("Save File"),
    QObject::tr("Please add a read back item before execution."),
    QObject::tr("&Write Memory"),
    QObject::tr("Write Memory Ok"),
    QObject::tr("&Download"),
    QObject::tr("&OK"),
    QObject::tr("&Cancel"),
    QObject::tr("&Yes"),
    QObject::tr("&No"),
    QObject::tr("Open CERT File..."),
    QObject::tr("Open AUTH File..."),
    QObject::tr("Authentication File (*.auth);;All Files(*.*)"),
    QObject::tr("Cert File (*.cert);;All Files(*.*)"),
    QObject::tr("Select Log Folder..."),
    QObject::tr("Please load a certification file before execution."),
    QObject::tr("Cerfitication OK"),
    QObject::tr("&Help"),
    QObject::tr("W&elcome"),
    QObject::tr("Show Welcome"),
    QObject::tr("Hide Welcome"),
    QObject::tr("Like Mota"),
    QObject::tr("Format All + Download"),
    QObject::tr("Firmware Upgrade"),
    QObject::tr("Download Only"),
    QObject::tr("Address or length bytes not align"),
    QObject::tr("One Day"),
    QObject::tr("One Week"),
    QObject::tr("One Month"),
    QObject::tr("Three Month"),
    QObject::tr("OTP Write Setting"),
    QObject::tr("OTP Read Setting"),
    QObject::tr("&Brom Adapter"),
    QObject::tr("Open Download Data File"),
    QObject::tr("File size is zero"),
    QObject::tr("No memory"),
    QObject::tr("Load data failed."),
    QObject::tr("BROM download OK."),
    QObject::tr("BROM jump OK."),
    QObject::tr("Partition Table changed, please try to use Firmware upgrade or Format All + download scene instead."),
    QObject::tr("Unlock Boot-loader"),
    QObject::tr("(Security Mode)"),
    QObject::tr("Unlock bootloader?\n\n"
                "If you unlock the bootloader, you will be able to install custom operating system software on this phone.\n\n"
                "A custom OS is not subject to the same testing as the original OS, and can cause your phone and installed applications to stop working properly.\n\n"
                "To prevent unauthorized access to your personal data, unlocking the bootloader will alaso delete all personal data from your phone (a \"factory data reset\")\n\n"
                "1. The data partition will be fully erased, please backup your personal data before unlocking.\n\n"
                "2. The device may not be able to boot up successfully after erasing data partition, please download customized images after unlocking or enter recovery mode to do \"wipe data\\factory reset\" operation.\n\n"
                "Yes: Unlock bootloader(may void warranty)\n"
                "No:  Do not unlock bootloader."),
    QObject::tr("Not a signed image or not an unlock secro image."),
    QObject::tr("Not allowd load unlock secro image."),
    QObject::tr("Decrpyt download data failed."),
    QObject::tr("&Report"),
    QObject::tr("Unable to launch Qt Assistant."),
    QObject::tr("Please select the write file first!"),
    QObject::tr("Please select the read file first!"),
    QObject::tr("The scatter file cannot find, please make sure the file is exist before download."),
    QObject::tr("&SCI Download"),
    QObject::tr("&Clone Download"),
    QObject::tr("Please load SCI Scatter file before download!"),
    QObject::tr("Please select readback folder before readback."),
    QObject::tr("Please select restore folder before restore!"),
    QObject::tr("Please check the load image file is correct or not?"),
    QObject::tr("Smart Phone Flash Tool"),
    QObject::tr("About Smart Phone Flash Tool"),
    QObject::tr("DA and Library Info"),
    QObject::tr("Copyright (c) 2001-2017, MediaTek Inc. All rights reserved."),
    QObject::tr("Comment: [Customer Release] "),
    QObject::tr("Comment: [Internal Release] "),
    QObject::tr("Build: "),
    QObject::tr("Build-Date: "),
    QObject::tr("Software Update"),
    QObject::tr("Checking for update..."),
    QObject::tr("<html><head/><body><p>A new version of Flash tool is availabel</p></body></html>"),
    QObject::tr("&Remind Me Later"),
    QObject::tr("&Install Update"),
    QObject::tr("Encrypt"),
    QObject::tr("Please enter password:"),
    QObject::tr("Incorrect Password! Try again!"),
    QObject::tr("Flash Phone have risk.\nContinue?"),
    QObject::tr("Continue"),
    QObject::tr("Warning"),
    QObject::tr("Device &Test"),
    QObject::tr("Device Test Ok")
};

const QString strCHString[]={
    "启动更新失败！",
    "崩溃！",
    "执行前请加载DA文件！",
    "执行前请加载scatter文件.",
    "超时！",
    "未知错误！",
    "打开DA文件",
    "Bin File (*.bin)",
    "打开scatter文件",
    "Map File (*.txt)",
    "下载完成",
    "Flash Tool不支持该芯片，请检查是否有效芯片.",
    "不支持的存储类型，请检查存储类型是否有效",
    "请至少选择一个ROM类型",
    "格式化(&A)",
    "格式化完成",
    "你的软件已经是最新版本了。",
    "(运行时跟踪模式)",
    "(高级模式)",
    "(标记NAND坏块模式)",
    "警告：程序正在运行中，是否继续？",
    "退出",
    "请加载Preloader和DSP_BL",
    "内存测试(&T)",
    "请至少选择一个测试项",
    "内存测试完成",
    "另存为...",
    "打开OTP文件",
    "未检测到串口",
    "查找串口失败。",
    "注册USB设备通知失败",
    "参数(&P)",
    "写OTP完成",
    "读OTP完成",
    "回读(&R)",
    "回读完成",
    "保存文件",
    "请添加一个回读项",
    "写内存(&W)",
    "写内存完成",
    "下载(&D)",
    "确定(&O)",
    "取消(&C)",
    "是(&Y)",
    "否(&N)",
    "打开CERT文件",
    "打开AUTH文件",
    "Authentication File (*.auth);;All Files(*.*)",
    "Cert File (*.cert);;All Files(*.*)",
    "选择日志文件...",
    "运行前请加载一个验证文件",
    "验证完成",
    "帮助(&H)",
    "欢迎(&E)",
    "显示欢迎页面",
    "隐藏欢迎页面",
    "类MOTA",
    "全部格式化和下载",
    "固件升级",
    "下载",
    "地址或长度字节没有对齐",
    "一天",
    "一周",
    "一月",
    "三月",
    "OTP写设置",
    "OTP读设置",
    "&BROM适配器",
    "打开下载数据文件",
    "文件大小为0",
    "内存不足",
    "数据加载失败",
    "BROM下载成功",
    "BROM跳转成功",
    "分区有变化，请尝试使用Firmware upgrade或者Format All + Download重新下载。",
    "解锁Boot-loader",
    "(安全模式)",
    "数据分区将被完全擦除，请在下载时候先备份好个人数据.\n"
    "数据擦除后设备可能没法正常启动，请在解锁后下载自定义的影像文件或者进入恢复模式做数据\"擦除/恢复出厂设置\"操作",
    "未签章的或者不是解锁的映像文件",
    "不允许下载解开的安全映像文件",
    "数据解密失败.",
    "发送错误报告(&R)",
    "无法启动qt助手",
    "请指定OTP写文件路径",
    "请指定OTP读文件路径",
    "无法找到要下载的文件，请下载之前确认文件存在。",
    "&SCI 下载",
    "&Clone 下载",
    "请在下载前加载SCI Scatter文件!",
    "请在回读之前设定要保存的路径!",
    "请在回写之前选择需要回写的文件夹路径!",
    "请检查加载的文件是否正确?",
    "智能手机下载工具",
    "关于智能手机下载工具",
    "DA 和 Library 信息",
    "版权 2001-2017 联发科技有限公司。保留所有权利。",
    "备注 [客户版本]",
    "备注：[内部发布]",
    "构建：",
    "构建日期： ",
    "软件更新",
    "检查更新版本...",
    "<html><head/><body><p>一个新的Flash Tool 版本可用</p></body></html>",
    "下次提醒(&R)",
    "安装更新(&I)",
    "加密",
    "请输入密码：",
    "密码错误，请重试！",
    "刷机有风险，请确认是否继续?",
    "继续",
    "警告",
    "设备测试(&T)",
    "设备测试完成"
};

const QString strTWString[]={
    "啟動更新失敗！",
    "崩潰！",
    "執行前請加載DA文件！",
    "執行前請加載scatter文件.",
    "超時！",
    "未知錯誤！",
    "打開DA文件",
    "Bin File (*.bin)",
    "打開配置文件",
    "Map File (*.txt)",
    "下載完成",
    "Flash Tool不支持該芯片，請檢查是否有效芯片.",
    "不支持的存儲類型，請檢查存儲類型是否有效",
    "請至少選擇一個ROM類型",
    "格式化(&A)",
    "格式化完成",
    "你的軟體已經是最新版本了。",
    "(運行時跟蹤模式)",
    "(高級模式)",
    "(標記NAND壞塊模式)",
    "警告：程序正在運行中，是否繼續？",
    "退出",
    "請加載Preloader和DSP_BL",
    "內存測試(&T)",
    "请至少选择一个测试项",
    "内存測試完成",
    "另存為...",
    "打開OTP文件",
    "未檢測到串口",
    "查找串口失敗。",
    "註冊USB設備通知失敗",
    "參數(&P)",
    "寫OTP完成",
    "讀OTP完成",
    "回讀(&R)",
    "回讀完成",
    "保存文件",
    "請添加一個回讀項",
    "寫內存(&W)",
    "寫内存完成",
    "下載(&D)",
    "確定(&O)",
    "取消(&C)",
    "是(&Y)",
    "否(&N)",
    "打開CERT文件",
    "打開AUTH文件",
    "Authentication File (*.auth);;All Files(*.*)",
    "Cert File (*.cert);;All Files(*.*)",
    "選擇日誌文件...",
    "運行前請加載一個驗證文件",
    "驗證完成",
    "幫助(&H)",
    "歡迎(&E)",
    "顯示歡迎頁面",
    "隱藏歡迎頁面",
    "類MOTA",
    "全部格式化和下載",
    "固件升級",
    "下載",
    "地址或長度字節沒有對齊",
    "一天",
    "一周",
    "一月",
    "三月",
    "OTP寫設置",
    "OTP讀設置",
    "&BROM適配器",
    "打開下載數據文件",
    "文件大小為0",
    "內存不足",
    "數據加載失敗",
    "BROM 下載成功",
    "BROM 跳轉成功",
    "分區有變化，請嘗試使用Firmware upgrade或者Format All + Download重新下載。",
    "解鎖Boot-loader",
    "(安全模式)",
    "1. 數據分區將被完全擦除，請在解鎖之前備份后個人數據.\n"
    "2. 數據擦除后設備可能無法正常啟動，請在解鎖后下載自定義影像文件或者進入復原模式\"數據擦除/恢復出廠設置\"",
    "未簽章的或者不是解鎖的映像文件",
    "不允許下載解開的安全映像文件",
    "數據解密失敗.",
    "發送錯誤報告(&R)",
    "無法啟動qt助手",
    "請指定OTP寫文件路徑",
    "請指定OTP讀文件路徑",
    "無法找到要下載的文件，請在下載之前確認要下載的文件是否存在。",
    "&SCI 下載",
    "&Clone 下載",
    "請在下載之前先加載SCI Scatter文件!",
    "請在回讀之前設定要保存的路徑!",
    "請在回寫之前選擇需要回寫的文件夾路徑!",
    "請檢查加載的文件是否正確?",
    "智慧型手機下載工具",
    "關於智慧型手機下載工具",
    "DA 和 Library 訊息",
    "版權 2001-2017, 聯發科技有限公司。保留所有權利。",
    "備註 [客戶版本]",
    "備註：[內部發佈]",
    "構建：",
    "構建日期：",
    "軟體更新",
    "更新檢測...",
    "<html><head/><body><p>A new version of Flash tool is availabel</p></body></html>",
    "稍後提醒(&R)",
    "安裝更新(&I)",
    "加密",
    "請輸入密碼：",
    "密碼錯誤，請重試！",
    "刷機有風險，請確認是否繼續?",
    "繼續",
    "警告",
    "設備測試(&T)",
    "設備測試完成"
};

const QString test = QObject::tr("DownloadTest");
const QString exitInfo = QObject::tr("The application is running, are you sure to exit?");

QString LoadQString(Language_Tag languageID, int strID)
{
    QByteArray str;

    switch(languageID)
    {
    case LANGUAGE_ENGLISH:
        return strEngVec[strID];

    case LANGUAGE_ZH_CHINESE:
        str = strCHString[strID].toLatin1();
        return QTextCodec
                ::codecForName("GBK")->toUnicode(str.data());

    case LANGUAGE_TW_CHINESE:
        str = strTWString[strID].toLatin1();
        return QTextCodec
                ::codecForName("GBK")->toUnicode(str.data());
    }

    return "";
}
