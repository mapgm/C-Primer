#include <iostream>
#include <memory>
#include <string>

using std::string;
using std::cout;
using std::endl;

// ������Ϣ
struct connection
{
	string ip;
	int port;
	connection(string i, int p) : ip(i), port(p) {}
};

// �����
struct destination
{
	string ip;
	int port;
	destination(string i, int p) : ip(i), port(p) {}
};

// connection �ĺ���
connection connect(destination* pDest)
{
	std::shared_ptr<connection> pConn(new connection(pDest->ip, pDest->port));
	cout << "creating connection(" << pConn.use_count() << ")" << endl;
	return *pConn;
}

// �ر�����
void disconnect(connection pConn)
{
	cout << "connection close(" << pConn.ip << ":" << pConn.port << ")" << endl;	
}

// ���������
// �������������Զ���ɾ�����ͷ� p
void f(destination &d)
{
	connection conn = connect(&d);
	std::shared_ptr<connection> p(&conn, [](connection* p){ disconnect(*p); }); // �ֶ����ɾ���� lambda
	cout << "connecting now(" << p.use_count() << ")" << endl;
}

int main()
{
	destination dest("220.181.111.111", 10086); // ���������
	f(dest); // ���������
	
	return 0;
}
