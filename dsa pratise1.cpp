void addonrear(int d){
Node*newnode =newNode(d);
if(head==newNode){
    newnode=tail=temp;
}
else 
tail->next=temp;
tail=temp;
}