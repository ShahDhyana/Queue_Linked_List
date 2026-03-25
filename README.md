Key Components and Logic :
Structure Definition: It defines a node struct containing an integer data and a next pointer to link elements together.

Enqueue (insert_end): This function adds new elements to the rear of the list. It traverses the entire list until it finds the last node, then updates the pointers to include the new node.

Dequeue (delete_end): In a standard queue, deletion should happen from the front (FIFO). However, this specific implementation removes the last element of the list by traversing to the second-to-last node and freeing the final node.

Display and Menu: The display() function iterates through the list from the head to show all elements. The main() function provides an interactive menu-driven interface using a while loop.
