const int gXcount = 4;
const int gYcount = 4;
int gXs[gXcount] = {
  2,3,4,5
};
int gYs[gYcount] = {
  10,11,12,13
};

struct node {
   int m_x;
   int m_y;
   node *m_pnext;
   node(int x,int y,node* p):m_x(x),m_y(y),m_pnext(p){
   }
};

class snake {
   node* mHead;
public:
   snake():mHead(0){
   }
public:
  void initSnake(){
    this ->initScreen();
    node *p1 = new node(2,2,0);
    node *p2 = new node(2,1,0);
    node *p3 = new node(2,0,0);
    p1 ->m_pnext = p2;
    p2 ->m_pnext = p3;
    p3 ->m_pnext = 0;
    mHead = p1;
  }
  void drawSnake(){
    this ->clearScreen();
    
    node* p = mHead;
    while(p){
      digitalWrite(gXs[p ->m_x],HIGH);
      digitalWrite(gYs[p ->m_y],LOW);
      delay(100);
      p = p ->m_pnext;
    }
  }
private:
   void initScreen(){
    for(int i = 0;i < gXcount;i++){
      pinMode(gXs[i],OUTPUT);
    }
    for(int i = 0;i < gYcount;i++){
      pinMode(gYs[i],OUTPUT);
    }
   }
   void clearScreen(){
    for(int i = 0;i < gXcount;i++){
      digitalWrite(gXs[i],LOW);
    }
    for(int i = 0;i < gYcount;i++){
      digitalWrite(gYs[i],LOW);
    }
  }
};

snake * gsnake = 0;
node * p;
node * head;
void setup() {
  // put your setup code here, to run once:
//  gsnake = new snake();
//  gsnake ->initSnake();
/*<test>*/
int x = 0;
int y = 0;
pinMode(gXs[x],OUTPUT);
pinMode(gYs[y],OUTPUT);
         digitalWrite(gXs[x],HIGH);
      digitalWrite(gYs[y],LOW);
/*</test>*/
}

void loop() {
  // put your main code here, to run repeatedly:
  //gsnake ->drawSnake();
 /*<test>*/
//     for(int i = 0;i < gXcount;i++){
//      digitalWrite(gXs[i],LOW);
//    }
//    for(int i = 0;i < gYcount;i++){
//      digitalWrite(gYs[i],LOW);
//    }

 /*</test>*/
}
