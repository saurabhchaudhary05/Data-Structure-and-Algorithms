int checkPalindrome (struct Node *head, int counter)

{
    int i = 0, j;
    struct Node *front, *rear;
     while (i != counter / 2)
    {
        front = rear = head;
        for (j = 0; j < i; j++)
        {
            front = front->next;
        }
        for (j = 0; j < counter - (i + 1); j++)
        {
            rear = rear->next;
        }
        if (front->data != rear->data)
        {
            return 0;
        }
        else
        {
            i++;
        }
    }

    return 1;
}

