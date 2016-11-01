int lows[3] = {
  5,6,7
};
int highs[3] = {
  2,3,4
};
struct Books {
   int m_x;
   int m_y;
   Books* m_pnext;
   Books(int x,int y,Books* p):m_x(x),m_y(y),m_pnext(p) {
   }
};

int high_led_pin = 2;

void setup() {
  Serial.begin(9600);
  for(int i = 0;i < 3;i++) {
      
    pinMode(lows[i],OUTPUT);
    pinMode(highs[i],OUTPUT);
  }
    // Declaration

}

void loop() {

  // read input:
  render();
}

void render() {
  Books* myArray = 0;
int myArraySize = 0;

// Allocation (let's suppose size contains some value discovered at runtime,
// e.g. obtained from some external source or through other program logic)
if (myArray != 0) {
    delete [] myArray;
}
Books* p2 = new Books(2,2,NULL);
myArray = new Books(1,1,p2);
for(Books* p_temp = myArray;p_temp != NULL;p_temp = p_temp ->m_pnext) {
  digitalWrite(lows[p_temp ->m_x],LOW);
  delay(100);
    digitalWrite(highs[p_temp ->m_y],HIGH);
    delay(100);
    digitalWrite(highs[p_temp ->m_y],LOW);
  Serial.write("hello");
  Serial.write(";");
  Serial.write("world");
  Serial.write("\r\n");
}
delete myArray;
delete p2;
}

