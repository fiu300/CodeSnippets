//实现自己的打印函数可以控制打印函数的开关和打印级别控制

#define DEBUG //打印开关

void __attribute__((format(printf,1,2))) LOG(char *fmt,...)
{
#ifdef DEBUG
	va_list args;
	va_start(args,fmt);
	vprintf(fmt,args);
	va_end(args);
#endif
}
