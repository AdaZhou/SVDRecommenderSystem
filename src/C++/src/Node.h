/*
 * Node.h
 *
 *  Created on: 2014��10��24��
 *      Author: chenjing
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
private:
	int mId;
	float mRate;
public:
	Node(int id, float rate);
	int getId();
	float getRate();
	virtual ~Node();
};

#endif /* NODE_H_ */
