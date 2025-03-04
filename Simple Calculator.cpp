#include <iostream>
using namespace std;

class clsCalculator
{

private :

    float _Result = 0;
    float _LastNumber;
    float _PreviousResult = 0;
    string _LastOperation = "Clear";

    bool IsZero(float Num)
    {
        return (Num == 0);
    }

public :

    void Add(float Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Adding";
        _Result += Num;
    }

    void Subtract(float Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Subtracting";
        _Result -= Num;
    }

    void Divide(float Num)
    {
        _LastNumber = Num;

        if (IsZero(Num))
            Num = 1;

        _PreviousResult = _Result;
        _LastOperation = "Deviding";
        _Result /= Num;

    }

    void Multiply(short Num)
    {
        _LastNumber = Num;
        _PreviousResult = _Result;
        _LastOperation = "Multiplying";
        _Result *= Num;
    }

    float GetFinallResult()
    {
        return _Result;
    }

    void Clear()
    {
        _LastNumber = 0;
        _PreviousResult = 0;
        _Result = 0;
        _LastOperation = "Clear";
    }


    void CancelLastOperation()
    {
        _LastNumber = 0;
        _LastOperation = "Cancelling Last Operation";
        _Result = _PreviousResult;
    }

    void PrintResult()
    {
        cout << "Result After "
        << _LastOperation << " " << _LastNumber << " Is : " << _Result <<"\n";
    }
    

};


int main()
{

    clsCalculator Calculator;

    Calculator.Clear();

    Calculator.Add(10);
    Calculator.PrintResult();

    Calculator.Add(100);
    Calculator.PrintResult();

    Calculator.Subtract(20);
    Calculator.PrintResult();

    Calculator.Divide(0);
    Calculator.PrintResult();

    Calculator.Divide(2);
    Calculator.PrintResult();

    Calculator.Multiply(3);
    Calculator.PrintResult();

    Calculator.CancelLastOperation();
    Calculator.PrintResult();

    Calculator.Clear();
    Calculator.PrintResult();

    system("pause>0");

    return 0;
}

