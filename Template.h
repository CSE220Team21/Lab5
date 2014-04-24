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
    
