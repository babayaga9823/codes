#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the swapNodes function below.
 */
 
 
 
 struct node
 {
     int data;
     int height;
     node *left=NULL;
     node *right=NULL;
 }*head=NULL;
 
  struct nodeheight
 {
     
     int height;
     node *address=NULL;
     nodeheight *link=NULL;
 }*nodeheighthead=NULL;
 
 int z;
  void inOrder(node *root)
  {

      node *current;
      current = root;

      if (current->left != NULL) {
        inOrder(current->left);
      }
      current->height=(z+1)-current->height;
      if(nodeheighthead==NULL)
      {
         nodeheight *currentnode;
         currentnode=new nodeheight;
         currentnode->height=current->height;
         currentnode->address=current;
         nodeheighthead=currentnode;
      }
      else
      {nodeheight *currentnode,*newly;
       currentnode=nodeheighthead;
          while(currentnode->link!=NULL)
          {
              currentnode=currentnode->link;
          }
          newly=new nodeheight;
          currentnode->link=newly;
         newly->height=current->height;
         newly->address=current;
      }
     cout << current->data << " "<<current->height<<endl;
      if (current->right != NULL) {
        inOrder(current->right);
      }
      
    }




int getHeight(node* root)
        {
            int count=1,max=1;
            node *current;
            current=root;
            if(current->left!=NULL)
            {
                count=1+getHeight(current->left);
            }
            if(count>max)
                max=count;
            if(current->right!=NULL)
            {
                count=1+getHeight(current->right);
            }
            if(count>max)
                max=count;
                current->height=max;
            return max;
        }
    
    
    
    
node* formtree(vector<vector<int>> indexes)
    {
            node *current,*debut;//debut to shhow the newly introduced node
 current=new node;
    head=current;
    current->data=1;
int c=0;
queue<node*>q;
cout<<"========"<<indexes.size()<<endl;
    while(c<indexes.size())
    {
        if(!q.empty())
        {
           current=q.front();
           q.pop();
        }
        if(indexes[c][0]!=-1&&indexes[c][1]!=-1)
        {
            debut=new node;
            current->left=debut;
            debut->data=indexes[c][0];
            q.push(debut);
             debut=new node;
            current->right=debut;
            q.push(debut);
            debut->data=indexes[c][1];
            
        }
         if(indexes[c][0]!=-1&&indexes[c][1]==-1)
        {
            debut=new node;
            current->left=debut;
            q.push(debut);
            debut->data=indexes[c][0];
            
        }
        if(indexes[c][0]==-1&&indexes[c][1]!=-1)
        {
            debut=new node;
            current->right=debut;
            q.push(debut);
            debut->data=indexes[c][1];
            
        }
         if(indexes[c][0]==-1&&indexes[c][1]==-1)
        {
            
           
        }
        c++;
        
    }
    
    cout<<"************"<<c<<endl;
        return head;

    }
vector<vector<int>> swapNodes(vector<vector<int>> indexes, vector<int> queries) 
{
    node* current=formtree(indexes);
    
    int maxheight=getHeight(current);
    cout<<"maxheight "<<maxheight<<endl<<endl;
    z=maxheight;
    inOrder(current);
    
    cout<<"++++++++"<<endl<<endl<<endl<<endl;
    nodeheight *cur;
    cur=nodeheighthead;
    while(cur->link!=NULL)
    {
        cout<<cur->height<<" "<<cur->address<<endl;
        cur=cur->link;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> indexes(n);
    for (int indexes_row_itr = 0; indexes_row_itr < n; indexes_row_itr++) {
        indexes[indexes_row_itr].resize(2);

        for (int indexes_column_itr = 0; indexes_column_itr < 2; indexes_column_itr++) {
            cin >> indexes[indexes_row_itr][indexes_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int queries_count;
    cin >> queries_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> queries(queries_count);

    for (int queries_itr = 0; queries_itr < queries_count; queries_itr++) {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[queries_itr] = queries_item;
    }

    vector<vector<int>> result = swapNodes(indexes, queries);

    for (int result_row_itr = 0; result_row_itr < result.size(); result_row_itr++) {
        for (int result_column_itr = 0; result_column_itr < result[result_row_itr].size(); result_column_itr++) {
            fout << result[result_row_itr][result_column_itr];

            if (result_column_itr != result[result_row_itr].size() - 1) {
                fout << " ";
            }
        }

        if (result_row_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

