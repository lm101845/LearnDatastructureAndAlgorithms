//2023��4��1��18:16:30
//����㷨�о�ͦ�ѵģ���׿����Ƶû�н�������ҿ������Ƶ��
//��Ƶ���ӣ�https://www.bilibili.com/video/BV1nE411u7n4/?spm_id_from=333.337.search-card.all.click&vd_source=4b95d42263c16c1accb3068aa6dfda89
//�����Ŷ��㷨��Ҳ��Ϊ��ɢ�¼�ģ�⣩������㷨������ʽ���С���������ʵ�֣�
//��һ���ۺ��Խ�ǿ����Ŀ������ǿ��ʽ���е���⡢����ۺϱ���������а�����
//������12min


#include <iostream>
using namespace std;

//�������пͻ���Client��Ϊ���е�data��
typedef struct client {
	int arrivalTime;  //�ͻ��������е�ʱ��
	int duration;     //����ҵ������ʱ��
}Client;


//������н������
struct Node {
	Client data;  //�����е�ÿ��Ԫ�ض���Client�ṹ��
	struct Node* next;
};

//���������(ʹ����ʽ���У�������ѭ������,��Ϊ�㲻֪��ÿ�������Ŷ�����,���г���Ԥ�Ȳ���֪)
class LinkQueue {
private:
	Node* front, * rear;
	int length;   //����Ԫ�ظ���
public:
	LinkQueue();   //����ͷ��㣬��ʼ������
	~LinkQueue();   //�ͷŶ��пռ�  //c++�к���ǰ��~��ʾ��������
	void enQueue(Client x);   //���
	bool deQueue(Client* item);   //����
	bool getFront(Client* item);   //��ȡ��ͷԪ�ص�item��ָ��Ԫ
	bool isEmpty();
	void clearQueue();   //��ն���
	void displayQueue();  //��ʾ��������
	int queueLength();   //��ȡ����Ԫ�ظ���
};

//�����Ϸ�ʽʵ�ֵĶ��У���������������Զ���4����������
LinkQueue queue[4];

//�����¼����谴�¼��������Ⱥ�˳�����У��辭�����в��붯������Ҳ���õ��������洢�ṹ��
typedef struct evnode {
	int occurTime;   //�¼�����ʱ��
	int nType;       //�¼����� -1��ʾ�����¼���0-3��ʾ4�����ڵ��뿪�¼�
	struct evnode* next;   //ָ����
} evNode;


//������Ҫ����һ���������࣬����������¼��Ĵ������̣��������������һ����������(���¼�����ʱ������)
//���5����㣬�ֱ��Ӧ�µ���ͻ�����4����ͬ�Ĵ��ڶ��е��뿪�¼���
class EventList {
private:
	evNode* head;
public:
	EventList();
	~EventList();
	bool isEmpty();
	void addNode(evNode ev);
	bool deleteNode(evNode* firstEv);
	void displayNode();
};

int main(int argc, char* argv[])
{
	
	system("PAUSE");
}
