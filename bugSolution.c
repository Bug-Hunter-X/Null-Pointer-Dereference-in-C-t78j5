int main() {
  int x = 10;
  int *ptr = &x; 
  *ptr = 20; 
  int y = *ptr + 10; 
  int *ptr2 = NULL; 
  if (ptr2 != NULL) { 
    *ptr2 = 30; //Check if the pointer is not NULL before dereferencing 
  } else { 
    printf("Error: Null pointer detected.\n");
  }
  return 0;
}