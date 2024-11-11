void alternode(struct node *stnode){
	if(stnode==NULL){
		return;
	}
	else{
		node *prev=stnode;
		node *alt_node=stnode->next;
		while(prev!=NULL && alt_node!=NULL){
			prev->next=alt_node->next;
			delete alt_node;
			prev=prev->next;
			if(prev!=NULL){
				alt_node=prev->next;
			}
		}
	}
}
