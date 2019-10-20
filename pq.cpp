#include <iostream>

template<typename T>
class priorityQueue
{
  struct Node
  {
    int priority;
    T info;
    Node* next;
    Node(T item) : info(item), next(nullptr) {}
  };
  Node* front;

public:
  priorityQueue() : front(nullptr) {}
  ~priorityQueue()
  {
    Node *tmp = nullptr;
    while (front){
      tmp   = front;
      front = front->next;
      delete tmp;
    }
  front = nullptr;
  }
  priorityQueue(const priorityQueue<T> & pq)     = delete;
  priorityQueue& operator=(priorityQueue const&) = delete;

  void insert(T item, int priority)
  {
    Node* tmp;
    Node* node     = new Node(item);
    node->priority = priority;

    if(front == nullptr || priority < front->priority)
    {
      node->next = front;
      front = node;
    }
    else
    {
      tmp = front;
      while(tmp->next != nullptr && tmp->next->priority <= priority)
        tmp = tmp->next;

      node->next  = tmp->next;
      tmp->next   = node;
    }
  }

  void deleteItem(T item)
  {
    Node* find = search(item);
    Node* node = front;
    if(node == find)
      front = node->next;
    else
    {
      while(find != nullptr)
      {
        if(node->next == find)
        {
          node->next = find->next;
          delete find;
          return;
        }
        node = node->next;
      }
    }
  }

  friend std::ostream & operator<<(std::ostream & os, const priorityQueue<T> & pq)
  {
      pq.display(os);
      return os;
  }
  private:
  Node *search(T item)
  {
    Node *node = front;
    while(node != nullptr)
    {
    if(node->info == item)
      return node;
    node = node->next;
    }
    std::cerr << "No such element in the list \n";
    return nullptr;
   }

   void display(std::ostream& out = std::cout) const
   {
     Node *node = front;
     out << "\nItem \tPriority \n";
     while(node != nullptr)
     {
       out << node->info << "\t" << node->priority <<"\n";
       node = node->next;
     }
     }
};

int main()
{
  priorityQueue<std::string> pq1;
  pq1.insert("code", 1);
  pq1.insert("sleep", 3);
  pq1.insert("food", 2);
  pq1.insert("date", 4);
  pq1.insert("time",5);
  pq1.insert("leo ", 8);
  pq1.insert("pad ", 7);
  pq1.insert("pas ", 6);
  pq1.insert("oiu ", 10);
  pq1.insert("nine ", 9);
  std::cout << pq1;
}
