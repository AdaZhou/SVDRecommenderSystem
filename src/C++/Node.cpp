/*
 * Node.cpp
 *
 *  Created on: 2014��10��24��
 *      Author: chenjing
 */

#include "Node.h"

Node::Node(int id, float rate) {
	mId = id;
	mRate = rate;
}
int Node::getId() {
	return mId;
}
float Node::getRate() {
	return mRate;
}
Node::~Node() {
}

