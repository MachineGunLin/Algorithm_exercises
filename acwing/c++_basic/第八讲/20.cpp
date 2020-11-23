class MyQueue {
stack<int> queue;
stack<int> helper;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        while(!queue.empty()) {
            int topElement = queue.top();
            helper.push(topElement);
            queue.pop();
        }
        helper.push(x);
        while(!helper.empty()) {
            int topElement = helper.top();
            queue.push(topElement);
            helper.pop();
        }
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int element = queue.top();
        queue.pop();
        return element;
    }

    /** Get the front element. */
    int peek() {
        return queue.top();
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return queue.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
