# Singly Linked List in C

This C program implements a simple **singly linked list** with basic operations like insertion, deletion, and display.

## Features
- Insert a new node at the end of the list.
- Delete a node with a given value.
- Display the linked list.

## How to Use
1. **Compile the program** using a C compiler:
    ```bash
    gcc linked_list.c -o linked_list
    ```
2. **Run the executable**:
    ```bash
    ./linked_list
    ```
3. **Choose an operation** from the menu:
    - `1` to insert a value into the list.
    - `2` to delete a node with a specified value.
    - `3` to display the linked list.
    - `4` to exit the program.

## Code Structure
- `struct Node`: Represents a node in the linked list.
- `insertNode()`: Inserts a node at the end of the list.
- `deleteNode()`: Deletes a node with a specified value.
- `displayList()`: Displays the entire linked list.

## Example Output
```
Singly Linked List Operations:
1. Insert
2. Delete
3. Display
4. Exit
Enter your choice: 1
Enter value to insert: 10
Node inserted: 10

Enter your choice: 1
Enter value to insert: 20
Node inserted: 20

Enter your choice: 3
Linked List: 10 -> 20 -> NULL

Enter your choice: 2
Enter value to delete: 10
Node deleted: 10

Enter your choice: 3
Linked List: 20 -> NULL
```

## License
This project is open-source and available under the MIT License.

## Author
- GitHub: [GitHub]([https://github.com/your-username](https://github.com/TechieRS))

Feel free to contribute or report issues!
