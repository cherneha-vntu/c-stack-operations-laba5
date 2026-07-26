# Lab Work 5: Stack Data Structure Operations in C

This project is a laboratory work for the "Computer Technologies and Programming" course. It contains a C program demonstrating the implementation of a stack using a singly linked list and transferring elements between stacks.

## Programs Included

### 1. Stack Odd Element Transfer (`main.c`)

A program that allows users to push integers onto a stack and transfer odd elements from the top of the first stack to a second stack until the first even element is encountered.

## How to Compile and Run

```bash
gcc main.c -o main
./main
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

Contributions are welcome and appreciated! Here's how you can contribute:

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

Please make sure to update tests as appropriate and adhere to the existing coding style.

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
