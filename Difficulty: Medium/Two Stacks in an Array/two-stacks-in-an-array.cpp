class twoStacks {
    int *arr;
    int top1, top2;
    // int size;
    
  public:

     // Default constructor (GFG requires this)
    twoStacks() {
        int n = 100;      // GFG uses fixed size internally
        arr = new int[n];
        top1 = -1;
        top2 = n;
    }

    // Function to push an integer into the stack1.
    void push1(int x) {
        //atleast single empty space is present
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = x;
        }
    }

    // Function to push an integer into the stack2.
    void push2(int x) {
        //atleast single empty space is present
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = x;
        }
    }

    // Function to remove an element from top of the stack1.
    int pop1() {
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

        
    // Function to remove an element from top of the stack2.
    int pop2() {
        if(top2 < 100){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};