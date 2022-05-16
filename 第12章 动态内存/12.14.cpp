#include <iostream>
#include <memory>
#include <string>

using std::string;
using std::cout;
using std::endl;

// 连接信息
struct connection
{
	string ip;
	int port;
	connection(string i, int p) : ip(i), port(p) {}
};

// 网络库
struct destination
{
	string ip;
	int port;
	destination(string i, int p) : ip(i), port(p) {}
};

// connection 的函数
connection connect(destination* pDest)
{
	std::shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
	cout << "creating connection(" << pConn.use_count() << ")" << endl;
	return *pConn;
}

// 关闭连接
void disconnect(connection pConn)
{
	cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" << endl;	
}

// 删除器
void end_connection(connection* pConn)
{
	disconnect(*pConn);
}

// 运行网络库
// 当函数结束后，自动用删除器释放 p
void f(destination &d)
{
	connection conn = connect(&d);
	std::shared_ptr<connection> p(&conn, end_connection); // 手动添加删除器
	cout << "connecting now(" << p.use_count() << ")" << endl;
}

int main()
{
	destination dest("220.181.111.111", 10086); // 创建网络库
	f(dest); // 运行网络库
	
	return 0;
}
