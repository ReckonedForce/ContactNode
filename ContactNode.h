//
// Created by J Hodges on 11/26/21.
//

#ifndef CONTACTNODE_CONTACTNODE_H
#define CONTACTNODE_CONTACTNODE_H
//
//#endif //CONTACTNODE_CONTACTNODE_H

//#ifdef ContactNode_H
//#define ContactNode_H
#include<string>
using namespace std;

class ContactNode{
   private:
      string contactName;
      string contactPhoneNum;
      ContactNode* nextNodePtr;

   public:
      ContactNode();
      ContactNode(string conName, string conNumber);
      void InsertAfter(ContactNode* nodePtr);
      string GetName();
      string GetPhoneNumber();
      ContactNode* GetNext();
      void PrintContactNode();
   };
#endif
