#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int>arr){
    Node*head = new Node(arr[0]);
    Node*mover = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

Node* removesHead(Node* head){
    if(head == NULL){
        return head;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removesTail(Node*head){
    if(head == NULL || head->next==NULL){
        return NULL;
    }
    Node*temp = head;
    while(temp->next->next!=NULL){
        temp= temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* removePosition(Node* head, int k){
    if(head == NULL){
        return head;
    }
    if(k==1){
        Node*temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int cnt = 0;
    Node*temp = head;
    Node*prev = NULL;
    while(temp!=NULL){
        cnt++;

        if(cnt ==k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removeValue(Node* head, int el){
    if(head == NULL){
        return head;
    }
    if(head->data ==el){
        Node*temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    Node*temp = head;
    Node*prev = NULL;
    while(temp!=NULL){
        if(temp->data==el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* Inserthead(Node*head, int val){
    Node*temp = new Node(val,head);
    return temp;
}

Node* Inserttail(Node*head,int val){
    if(head==NULL){
        return new Node(val);
    }
    Node*temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* InsertPosition(Node*head,int el,int k){
    if(head == NULL){   // empty list
        if(k==1){
            return new Node(el);
        }
    }

    if(k==1){ // one element
        return new Node(el,head);
    }

    int cnt = 0;
    Node*temp = head;

    while(temp!=NULL){
        cnt++;

        if(cnt == k-1){
            Node*x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp= temp->next;
    }
    return head;
}

Node* InsertBeforeValue(Node*head,int el,int val){
    if(head == NULL){   // empty list
        return NULL;
    }

    if(head->data == val){ // one element
        return new Node(el,head);
    }

    Node*temp = head;

    while(temp->next!=NULL){

        if(temp->next->data==val){
            Node*x = new Node(el, temp->next);
            temp->next = x;
            break;
        }
        temp= temp->next;
    }
    return head;
}



int main(){
    vector<int>arr = {23,45,223,24};

    Node* head = convertArr2LL(arr);
    //head = removesHead(head);
    //cout<<"after removing head"<<head->data<<endl;

    //head = removesTail(head);
    //cout<<"after removing tail "<<head->data<<endl;

    //head = removeK(head,2);
    //cout<<"after removing element 2 "<<head->data<<endl;

    head = Inserthead(head,240);
    

}
