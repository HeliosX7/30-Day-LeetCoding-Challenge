class MinStack
{
public:
    /** initialize your data structure here. */
    stack<int> s, aux;
    MinStack()
    {
    }

    void push(int x)
    {
        s.push(x);
        if (aux.empty())
            aux.push(x);
        else if (x <= aux.top())
            aux.push(x);
    }

    void pop()
    {
        int x = s.top();
        s.pop();
        if (x == aux.top())
            aux.pop();
    }

    int top()
    {
        return s.top();
    }

    int getMin()
    {
        return aux.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */