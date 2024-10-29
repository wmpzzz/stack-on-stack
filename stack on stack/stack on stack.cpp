#include <iostream>
using namespace std;
//Стек - LIFO (last in — first out), "последним пришёл — первым вышел"

template <typename T>
struct Node {
    T data;
    Node* next;
    Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
};

template <typename T>
struct Stack {
    Node<T>* top;
    Stack() {
        this->top = nullptr;
    }
    void push(T data) { //Функция добавления
        Node<T>* newNode = new Node<T>(data);
        newNode->next = top;
        this->top = newNode;
    }
    T pop() {
        T data;
        if (top == nullptr) {
            return NULL;
        }
        data = top->data;
        top = top->next;
        return data;
    }
};
int main() {
    setlocale(LC_ALL, "ru");

    Stack<int>* st = new Stack<int>();

   /* st->push(2);
    st->push(5);
    st->push(1);

    cout << st->pop() << " ";
    cout << st->pop() << " ";
    cout << st->pop() << " ";
    cout << st->pop() << " ";*/
    int n;
    cout << "Введите кол-во элементов стека: ";
    cin >> n;
    int z;
    for (int i = 0; i < n; i++) {
        cout << "Введите число: ";
        cin >> z;
        st->push(z);
    }

    return 0;
}