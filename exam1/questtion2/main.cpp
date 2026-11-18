#include<iostream>
#include<string>
using namespace std;

class Book{

private:
      string title;
      float price;
      int stock;

public:
    Book()
    {
        title = " ";
        price = 0.0f;             //不加f的话编译器可能会报错
        stock = 0;
    }

    ~Book(){
        //cout<<"对象已销毁"<<endl;
    }

    void input(){

        getline(cin,title);
        cin>>price>>stock;
    }

    void display(){
        cout<<"书名："<<title<<endl;
        cout<<"价格："<<price<<endl;
        cout<<"库存："<<stock<<endl;
    }
};


int main()
{
    Book* x = new Book();
    x->input();
    x->display();
    delete x;
    x = nullptr;

    return 0;

}