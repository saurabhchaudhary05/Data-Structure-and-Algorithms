void printreverse(struct node *head){
	if(head==NULL){
		return;
	}
	else{
		printreverse(head->next);
		cout<<head->data;
	}
}
