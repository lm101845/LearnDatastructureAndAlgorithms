//2023年4月1日18:16:30
//这个算法感觉挺难的，王卓的视频没有讲这个，我看别的视频的
//视频链接：https://www.bilibili.com/video/BV1nE411u7n4/?spm_id_from=333.337.search-card.all.click&vd_source=4b95d42263c16c1accb3068aa6dfda89
//银行排队算法（也称为离散事件模拟），这个算法采用链式队列、有序链表实现，
//是一个综合性较强的题目，对增强链式队列的理解、提高综合编程能力很有帮助。
//看到第12min


#include <iostream>
using namespace std;

//定义银行客户，Client作为队列的data域
typedef struct client {
	int arrivalTime;  //客户到达银行的时间
	int duration;     //办理业务所需时间
}Client;


//定义队列结点类型
struct Node {
	Client data;  //队列中的每个元素都是Client结构体
	struct Node* next;
};

//定义队列类(使用链式队列，而不是循环队列,因为你不知道每个窗口排多少人,队列长度预先不可知)
class LinkQueue {
private:
	Node* front, * rear;
	int length;   //队列元素个数
public:
	LinkQueue();   //建立头结点，初始化属性
	~LinkQueue();   //释放队列空间  //c++中函数前加~表示析构函数
	void enQueue(Client x);   //入队
	bool deQueue(Client* item);   //出队
	bool getFront(Client* item);   //获取队头元素到item所指单元
	bool isEmpty();
	void clearQueue();   //清空队列
	void displayQueue();  //显示队列内容
	int queueLength();   //获取队列元素个数
};

//用以上方式实现的队列，采用如下命令，可以定义4个队列数组
LinkQueue queue[4];

//由于事件表需按事件发生的先后顺序排列，需经常进行插入动作，则也采用单链表做存储结构。
typedef struct evnode {
	int occurTime;   //事件发生时间
	int nType;       //事件类型 -1表示到达事件，0-3表示4个窗口的离开事件
	struct evnode* next;   //指针域
} evNode;


//我们需要定义一个链表处理类，来完成银行事件的处理流程，这个链表处理类是一个有序链表(按事件发生时间排序)
//最多5个结点，分别对应新到达客户，和4个不同的窗口队列的离开事件。
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
