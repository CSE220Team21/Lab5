#=============================================================
#   Mike Mayr (MMayr15), Chalie Crow (LevenBravo)
#   Team 21
#   https://github.com/CSE220Team21/Lab5
#   Template.h
#   Similar to example done in class
#=============================================================

template <typename T>
class Literal : public Token{
  private:
    T literal;
  public:
    Literal(T lit){setLiteral(lit);}
    ~Literal(){}
    void setLiteral(T lit){literal = lit}
    T gteLitera(){return literal;}
    virtual void print() = 0;
    };
class String : public Literal{
  public:
    String() : Literal<string>(""){
      //Anything go in here?
    }
    void print(){
      //Anything go in here?
    }
    Real() : Literal<double>(0.0){
      //Anything go in here?
    }
    Integer() : Literal<int>(0){
      //Anything go in here?
    }
    
}
