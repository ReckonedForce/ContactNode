#include<iostream>
using namespace std;
#include "ContactNode.h"

ContactNode::ContactNode(){
    nextNodePtr=NULL;
    contactName = "no name";
    contactPhoneNum = "000-000-0000";
}

ContactNode::ContactNode(string conName, string conNumber){
     contactName = conName;
     contactPhoneNum = conNumber;
    nextNodePtr=NULL;
}

void ContactNode::InsertAfter(ContactNode* nodePtr){

    this->nextNodePtr = nodePtr;
}

string ContactNode::GetName() {
    return contactName;
}

string ContactNode::GetPhoneNumber() {
    return contactPhoneNum;
}

ContactNode* ContactNode::GetNext(){
    return this->nextNodePtr;
}

void ContactNode::PrintContactNode() {
    cout << "Name: " << this->contactName << endl << "Phone number: " << this->contactPhoneNum << endl;
}
