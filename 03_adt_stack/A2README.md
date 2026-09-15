## Reflection Questions 
# 1. What value does topIndex hold immediately after construction, and why does that specific value make isEmpty() return the right answer with no special-casing?
Right after construction, the topIndex holds a value of -1. This value is perfect for our situation 
as this means the stack is empty. The isEmpty() function is constantly checkingthe topIndex to see if the stack size is bigger than -1 and when it is not it returns as true. 
This specific value is perfect as the stack index starts from 0 and up so a -1 here clearly indicates a empty stack. 

# 2. Walk through push step by step, in words: what happens to data and topIndex, in what order, and why would swapping that order break the stack?
Push ->


void Stack::push(int value) {


if (isFull()) {

std::cout << "Stack is full." << std::endl;
return;
}

    topIndex++;
    data[topIndex] = value;
}
In words, we are first declaring a function called push in the class of Stack, this function intakes a int called value. 
Next, we do a basic check to see if it is possible to push another value onto the stack, so we check for fullness. 
Then after checking and making sure there is space in the stack, we push the intaked value int from the user or the test into the top of the stack. But before this we make sure to move the index onto the next array position. 


When we check int the beginning if there is space, we only check to see if the stack size of 100 has been reached, we dont move up a  index for our next value to go in until the topIndex++ line. That is why this would break the stack if the two lines are swapped. 


# 3. Give the time complexity of push, pop, peek, isEmpty, isFull, and size, individually, in Big-O. For each one, justify it by describing what your code actually does, not by naming the general rule for stacks.
The time complexity for push is O(1). This is because the function lines in the push method are all in O(1) time. When we check for isFull, this is in 1 time, indexing the data is 1 time, assigning the value to that index is 1 time, so the overall is O(1). 
The same can be said for the pop function as well. We are checking for one conditon, then indexing, and assigning and sorting data. All in O(1) time.
For peek, since we begin with checking for empty, which is O(1), and then just return the top value in the data set, we are still doing O(1). 
For isEmpty, isFull, and size, all are doing one thing which is returning a value for topIndex, all are in O(1) time. 

Since there are no loops or search methods, the most our functions can have is constant time. 

# 4 Exactly what happens in your code when push is called while the stack is full? State what prints (if anything), what gets returned (if anything), and whether topIndex changes. Then say why you chose that behavior.
When the stack is full and push is called, this prints. Stack is full.
Nothing gets returned as per the function and nothing happens to topIndex. 
The main reason for doing push like this is simplicity, whenever the stack is full and push checks for it, it will simply 
just inform you that the data set is filled and nothing can be added. This prevents issues with adding extra unwanted data. 

# 5 Exactly what happens when pop or peek is called while the stack is empty? Same level of detail as above.
Stack size: 0

Top: Stack is empty.

-1

Stack is empty.

Popped: Stack is empty.

-1

After pop, top: Stack is empty.


This is the output when pop or peek is called while the stack is empty 
Both functions check for empty before moving onto to their intended use 
Nothing gets popped and there is no value to peek at. I did it this way as it is simple just like the previous function. 
In hindsight, I think it would be useful to add edge case responses such as stack is empty nothing to peek at instead of just showing and returning -1 to output. 


# 6 Your array is fixed at 100 slots. If a caller needed more room than that, what would have to change in your class to support it, and what would it likely cost in terms of the time complexity you gave in question 3?

This answer depends on two things. If we know the array size needed before using the class and function we can simply change the size declaration in the .h file. 
While this is easy and simple, and keeps our O(1) constant timing for the functions, this is limited just as before because we can still run out of space. 
A better fix would be to add a dynamic solution that grows or shrinks with input from the user. While this would affect our time complexity it would allow for a much larger data set or much smaller. 
If a dynamic array was implemented, I believe the lowest time complexity we could have is O(N). 


# 7 Without looking anything up: if this stack were built on a linked list instead of an array, name one advantage and one disadvantage that trade-off would bring, based on what you already know about how arrays and pointers behave differently.

One advantage of a linked list could be a much larger dyanmic size for our data set. 
A disatvantage is that much more memory would need to be used as each node of a linked list needs a pointer which takes up memory. 
