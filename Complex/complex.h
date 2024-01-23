#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

template<typename T>
class Complex
{
    T real;
    T imag;
public:
    Complex();
    Complex(T re, T im);

    void setReal(T re);
    void setImag(T im);

    T getReal() const;
    T getImag() const;

    Complex operator+(const Complex& c) const;
    Complex operator-(const Complex& c) const;
    Complex operator*(const Complex& c) const;
    Complex operator/(const Complex& c) const;

    void print() const;
};

template<typename T>
Complex<T>::Complex()
    :real(0),
    imag(0)
{
    std::cout << "Complex()" << std::endl;
}

template<typename T>
Complex<T>::Complex(T re, T im)
    :real(re),
    imag(im)
{

    std::cout << "Complex(T re, T im)" << std::endl;
}



// Геттеры и Сеттеры
// -----------------

template<typename T>
void Complex<T>::setReal(T re){

    real = re;
}

template<typename T>
void Complex<T>::setImag(T im){

    imag = im;
}

template<typename T>
T Complex<T>::getReal() const{

    return real;
}

template<typename T>
T Complex<T>::getImag() const{

    return imag;
}



// Перегрузка арифметических операторов
// ------------------------------------

template<typename T>
Complex<T> Complex<T>::operator+(const Complex<T> &c) const{

    return Complex(real + c.getReal(),imag + c.getImag());
}

template<typename T>
Complex<T> Complex<T>::operator-(const Complex<T> &c) const{

    return Complex(real - c.getReal(),imag - c.getImag());
}

template<typename T>
Complex<T> Complex<T>::operator*(const Complex<T> &c) const{

    T real = this->real * c.getReal() - this->imag * c.getImag();
    T imag = this->real * c.getImag() + this->imag * c.getReal();
    return Complex(real,imag);
}

template<typename T>
Complex<T> Complex<T>::operator/(const Complex<T> &c) const{


    T r1 = this->real*c.getReal() + this->imag*c.getImag();
    T r2 = c.getReal()*c.getReal() + c.getImag()*c.getImag();

    T i1 = c.getReal()*this->imag - this->real*c.getImag();
    T i2 = c.getReal()*c.getReal() + c.getImag()*c.getImag();

    T real = r1/r2;
    T imag = i1/i2;

    return Complex(real,imag);
}

template<typename T>
std::ostream& operator << (std::ostream &out,const Complex<T>& c){
    return out << "Complex( " << c.getReal() << " , " << c.getImag() << " )";
}

template<typename T>
std::istream& operator >> (std::istream &in,Complex<T>& c){

    T inReal = 0;
    T inImag = 0;
    std::cout<<"Real: ";
    in>>inReal;
    std::cout<<"Imag: ";
    in>>inImag;
    c.setReal(inReal);
    c.setImag(inImag);
    return in;
}

template<typename T>
void Complex<T>::print() const{

    std::cout << "Complex( " << real << " , " << imag << " )" << std::endl;
}

#endif // COMPLEX_H
