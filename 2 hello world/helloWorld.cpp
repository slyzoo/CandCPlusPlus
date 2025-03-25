#include <iostream>
int main(){

// standard::character output << (output) "string of output" <<(output) std::end line
// but it "flushes the buffer"
  std::cout << "hello world!" << std::endl;

// \n is faster and does the same thing without flushing the buffer
  std::cout << "hello world!" << '\n';

return 0;
}