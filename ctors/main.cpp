#include <iostream>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <cstddef>

using namespace std;
void sequCotrsOper(){
    vector<string> sv;
    vector<string> sv1(sv);
    vector<string> sv2(10);
    vector<string> sv3(10,"foxz");

    for(vector<string>::iterator i = sv3.begin();i!=sv3.end();++i){
        cout << "sv3元素有：" << *i << endl;
    }
    list<string> sl(sv3.begin(),sv3.end());
    for(list<string>::iterator i = sl.begin();i!=sl.end();++i){
        cout << "sl元素有：" << *i << endl;
    }
    string sa [6] = {"orange","apple","li","taozi","banana","putao"};
    list<string> sl2(sa,sa+6);
    for(list<string>::const_iterator i = sl2.begin();i!=sl2.end();++i){
        cout << "sl2元素有：" << *i << endl;
    }
    for(list<string>::const_reverse_iterator i = sl2.rbegin();i!=sl2.rend();++i){
        cout << "sl2元素有：逆序" << *i << endl;
    }
    sl2.push_back("火龙果");
    sl2.push_front("哈密瓜");//push_front只适于list和deque
    for(list<string>::const_iterator i = sl2.begin();i!=sl2.end();++i){
        cout << "sl2元素有：" << *i << endl;
    }
    deque<string> sd(sl2.begin(),sl2.end());
    for(deque<string>::const_iterator i = sd.begin();i!=sd.end();++i){
        cout << "sd元素有：" << *i << endl;
    }
    cout << "华丽的分割线..........."<< endl;
    sd.insert(sd.begin(),"黄瓜");
    sd.insert(sd.begin(),10,"lemon");
    sd.insert(sd.end(),sv3.begin(),sv3.end());
    for(deque<string>::const_iterator i = sd.begin();i!=sd.end();++i){
        cout << "sd元素有：" << *i << endl;
    }
}

void listCopy(){
    list<int> il;
    for (int i = 0; i !=10; ++i) {
        il.push_front(i);
    }
    for(list<int>::iterator i=il.begin();i!=il.end();++i){
        cout << "il："<<*i << endl;
    }
    deque<int> di1;
    deque<int> di2;
    for(list<int>::iterator i=il.begin();i!=il.end();++i){
        if((*i)%2 == 0) {
            di1.push_front(*i);
        }else{
            di2.push_front(*i);
        }
    }
    for(deque<int>::iterator i=di1.begin();i!=di1.end();++i){
                cout << "di1："<<*i << endl;
    }
    for(deque<int>::iterator i=di1.begin();i!=di2.end();++i){
                cout << "di2："<<*i << endl;
    }
    /**problem..
      */

}

void delIa(){
     int ia[] = {0,1,1,2,3,5,8,13,21,55,89};//数组ia
     size_t size = sizeof(ia)/sizeof(ia[0]);//数组长度计算
     list<int> il(ia,ia+size);//初始化list
     for(list<int>::iterator i = il.begin();i!=il.end();){//删除奇数
         if((*i)%2 != 0 )
         {//删除奇数
             i=il.erase(i);
         }
         else
         {
             i++;
         }
     }
     copy(il.begin(),il.end(),ostream_iterator<int>(cout," "));//ostream_iterator流迭代器 定义在iterator头文件


}
int main()
{
    //sequCotrsOper();
//    listCopy();//
    delIa();
    cout << "Hello Ctors!...." << endl;
    return 0;
}

