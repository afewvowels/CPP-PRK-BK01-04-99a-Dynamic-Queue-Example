#include <iostream>
#include "queue.h"
#include "exceptions.h"

using namespace std;

int main(void) {
  Queue<int> myQueue;

  for(int i=0;i<20;i++) {
    myQueue.enqueue(i);
  }

  cout << "After enqueues, queue size is: " << myQueue.size() << endl;
  cout << "After enqueues, array size is: " << myQueue.arrSize() << endl;

  for(int i=0;i<13;i++) {
    myQueue.dequeue();
  }

  for(int i=0;i<33;i++) {
    myQueue.enqueue(i+20);
    // cout << i+20 << endl;
  }

  cout << "After enqueues, queue size is: " << myQueue.size() << endl;
  cout << "After enqueues, array size is: " << myQueue.arrSize() << endl;

  for(int i=0;i<=40;i++) {
    cout << myQueue.dequeue() << endl;
  }

  cout << "Program ran.\n";
  return 0;
}
