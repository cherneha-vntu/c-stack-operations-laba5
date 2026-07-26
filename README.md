# Laboratory Work 5

This project is a laboratory work for the "Computer Technologies and Programming" course. It contains a C program demonstrating the implementation of a stack using a singly linked list and transferring elements between stacks.

## Programs Included

### 1. Stack Odd Element Transfer (`main.c`)
A program that allows users to push integers onto a stack and transfer odd elements from the top of the first stack to a second stack until the first even element is encountered.

## How to Compile and Run
```bash
gcc main.c -o out
./out
```

## Example Usage
```text
1. Додати число у перший стек
2. Вивести стеки
3. Перемістити до першого парного
0. Вихід
Вибір: 1
Введіть число: 4

1. Додати число у перший стек
2. Вивести стеки
3. Перемістити до першого парного
0. Вихід
Вибір: 1
Введіть число: 7

1. Додати число у перший стек
2. Вивести стеки
3. Перемістити до першого парного
0. Вихід
Вибір: 1
Введіть число: 3

1. Додати число у перший стек
2. Вивести стеки
3. Перемістити до першого парного
0. Вихід
Вибір: 1
Введіть число: 5

1. Додати число у перший стек
2. Вивести стеки
3. Перемістити до першого парного
0. Вихід
Вибір: 2
Стек 1: 5 3 7 4
Стек 2: порожній

1. Додати число у перший стек
2. Вивести стеки
3. Перемістити до першого парного
0. Вихід
Вибір: 3
Переміщено.

1. Додати число у перший стек
2. Вивести стеки
3. Перемістити до першого парного
0. Вихід
Вибір: 2
Стек 1: 4
Стек 2: 7 3 5
```

## Contributing
Contributions are not currently accepted as this is a completed university assignment.

## License
This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
