#include <iostream>
#include <ctime>
using namespace std;
class stack
{
 int size;
 int count;
 int last;
 int* s_array;
public:
 stack()
 {
  cout << "Enter size" << endl;
  cin >> size;
  s_array = new int[size];
  MAKENULL();
  count = size + 1;
 }
 int GetSize()
 {
  return size;
 }
 int GetLast() {
  return s_array[last];
 }
 void MAKENULL();
 void POP();
 void PUSH(int x);
 int TOP();
 void PRINT();
};
 
 int main()
 {
  srand(time(NULL));
  stack stack;
  stack.PRINT();
  for (int i = 0; i < stack.GetSize(); i++)
  {
   stack.PUSH(rand() % 10 );
  }
  stack.PRINT();
  for (int i = 0; i < 3; i++)
  {
   stack.POP();
  }
  stack.PRINT();
  stack.PUSH(stack.GetLast());
  stack.PRINT();
 }
 
void stack::MAKENULL()
{
 for (int i = 0; i < size; i++)
 {
  s_array[i] = 0;
 }
 last = -1;
}
void stack::POP()
{
 if (count == size)
 {
  cout << "Stack is empty" << endl;
 }
 else
 {
  count++;
  s_array[last] = 0;
  last--;
 }
}
void stack::PUSH(int x)
{
 if (count == 1) cout << "Stack is full" << endl;
 else
 {
  count--;
  s_array[last + 1] = x;
  last++;
 }
}
int stack::TOP()
{
 return s_array[last];
}
void stack::PRINT()
{
 
 for (int i = 0; i < size; i++)
 {
  cout << s_array[i] << " ";
 }
 cout << endl;
}

