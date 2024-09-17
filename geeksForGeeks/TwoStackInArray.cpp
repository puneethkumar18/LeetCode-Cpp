class twoStacks {
  public:
    
    int arr[100];
    int st1 = -1;
    int st2 = 100;
    // Function to push an integer into the stack1.
    void push1(int x) {
        if(st1 < st2-1){
            st1++;
            arr[st1] = x;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        if(st1 < st2-1){
            st2--;
            arr[st2] = x;
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(st1 == -1 || st1 >= st2-1){
            return -1;
        }
        int tmp = arr[st1];
        st1--;
        return tmp;
    }

    // Function to remove an element from top of the stack2.
    int pop2() {
        if(st2 == 100 || st1 >= st2-1){
            return -1;
        }
        int tmp = arr[st2];
        st2++;
        return tmp;
    }
};
