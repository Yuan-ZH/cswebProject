#include<iostream>
#include<cstring>
#include"SocketClient.h"
using namespace std;
 
int main()
{
	SocketClient client("101.76.243.181");
	while (true) {
		string s;
		cin >> s;
		client.autosends(s);
	}
	/*
	WORD sockVersion = MAKEWORD(2, 2);
	WSADATA data;
	if(WSAStartup(sockVersion, &data)!=0)
	{
		return 0;
	}
	while(true){
		SOCKET sclient = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
		if(sclient == INVALID_SOCKET)
		{
			printf("invalid socket!");
			return 0;
		}
		
		sockaddr_in serAddr;
		serAddr.sin_family = AF_INET;
		serAddr.sin_port = htons(8888);
		serAddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
		if(connect(sclient, (sockaddr *)&serAddr, sizeof(serAddr)) == SOCKET_ERROR)
		{  //����ʧ�� 
			printf("connect error !");
			closesocket(sclient);
			return 0;
		}
		
		string data;
		while(cin>>data){
		if(data=="cnm"){
			send(sclient, "-", 1, 0);
			break;
		}else	
		send(sclient, data.c_str(), data.length(), 0);
	}
		//send()������������ָ����socket�����Է�����
		//int send(int s, const void * msg, int len, unsigned int flags)
		//sΪ�ѽ��������ӵ�socket��msgָ���������ݣ�len��Ϊ���ݳ��ȣ�����flagsһ����0
		//�ɹ��򷵻�ʵ�ʴ��ͳ�ȥ���ַ�����ʧ�ܷ���-1������ԭ�����error 
		
		char recData[255];
		int ret = recv(sclient, recData, 255, 0);
		if(ret>0){
			recData[ret] = 0x00;
			printf(recData);
		} 
		closesocket(sclient);
	}
	
	
	WSACleanup();
	*/
	return 0;
	
}
 
