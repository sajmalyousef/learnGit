void DEL(struct node **beg,int val)
{int count=0;
struct node *prev= (struct node*)malloc(sizeof(struct node));
  int pos=search( **beg,val);
if(pos==NULL)
    printf(“ element not found ”);
else if(pos==0)
   {struct node *temp= (struct node*)malloc(sizeof(struct node));
temp=(*beg)->link;
    free(*beg);
    (*beg)=temp;
   }


  
else
  {
   while((*beg)!=NULL)
    { if(count==pos-1)
      prev=(*beg);
      else if(count==pos)
      break;
     (*beg)=(*beg)->link;
} 
      prev->link=(*beg)->link;
      free(*beg);
}
}
