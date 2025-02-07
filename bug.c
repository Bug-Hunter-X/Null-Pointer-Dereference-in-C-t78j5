int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr + 10; // Using the pointer correctly
  int *ptr2 = NULL; 
  *ptr2 = 30; // Using a null pointer, causing a segmentation fault
  return 0;
}