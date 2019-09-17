class StudentNode {
private:
	const char* name;
	int id;
	StudentNode* next;
public:
	StudentNode(const char*, int, StudentNode*);
	StudentNode(const char*, int);
	void setNext(StudentNode*);
	StudentNode* getNext();
	const char* getName() {
		return name;
	}
	// set() get() »ý·«
};

StudentNode::StudentNode(const char* name, int id, StudentNode* next) {
	this->name = name;
	this->id = id;
	this->next = next;
}

StudentNode::StudentNode(const char* name, int id) {
	this->name = name;
	this->id = id;
	this->next = NULL;
}

void StudentNode::setNext(StudentNode* next) {
	this->next = next;
}

StudentNode* StudentNode::getNext() {
	return next;
}
