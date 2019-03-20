class BigBoss {
public: 
    void cqcFunction() { printf("BigBoss::cqcFunction()"); }
};

class Pliskin : public BigBoss {    
public:
    void cqcFunction(int a) { printf("Pliskin::cqcFunction(int)"); }
};

int main() {
    Pliskin childClass;
    // This call is a compiler error.  
    // I would expect it to call BigBoss::cqcFunction()
    childClass.cqcFunction();
}
