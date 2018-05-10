Node* SortedInsert(Node *head, int data) {

	Node *curr = head;	
    Node *prev = nullptr;
	
    
    //find curr
	while (curr != nullptr) {
		if (curr->data > data) {
			break;
		}       
        prev = curr;
		curr = curr->next;
	}    

	Node *node = new Node();
	node->data = data;
    
    //if prev is null, node becomes new head    
    if(prev == nullptr) {
        node -> next = curr;
		if (curr != nullptr) {
        	curr -> prev = node;
		}
        return node;
    }
    
    //insert node after prev 
    prev->next = node;        
    node->prev = prev; 

    node->next = curr;
    if (curr != nullptr) {
        curr->prev = node;    
    }                
	return head;
}