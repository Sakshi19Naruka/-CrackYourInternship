// last approach   Time Com - O(N)  space - O(2N)
//This have push - O(1), pop - O(1) amotised   space - O(2N)

class MyQueue {  
public:
        stack<int> input;
        stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    
    int pop() {
        int val;
        if(!output.empty()){
            val = output.top();
            output.pop();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            val = output.top();
            output.pop();
        }
        return val;
    }
    
    int peek() {
        int val;
        if(!output.empty()){  //if output is not empty
            val = output.top();
        }
        else{                     //if output is empty
            while(!input.empty()){
                output.push(input.top());  //s1 -> s2
                input.pop();
            }
            val = output.top();
        }
        return val;
    }
    
    bool empty() {
        return input.empty() && output.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */