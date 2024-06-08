//through vector     
//insertback
//popfront
//popatfront
#include<iostream>
#include<vector>
using namespace std;
class Queue{
	vector<int> v;

public:
	

	// insert
	void insert(int d){
		v.push_back(d);

	}

	// pop
	void pop(){
		if(!(v.size()==0))
        {
            v.erase(v.begin());
	    }
    }


	// size

	int size(){
		return v.size();
	}

	// top

	int front(){
		return v[v.size()-1];
	}


	// empty
	bool empty(){

	// 	if(v.size())==0){
	// return true;
	// }
	// else{

	// 	return false;
	// }

		return v.size()==0;


	

	}

};
int main(){
	Queue q;
	q.insert(5);
	q.insert(15);
	q.insert(25);
	q.insert(45);
	q.insert(65);

	// queue print 

	while(!q.empty()){
		cout<<q.front()<<" ";//65

	q.pop();

	}



	

	// s.pop();





	// cout<<s.size()<<endl;
	// cout<<s.top()<<endl;

	// cout<<s.v[1]<<endl;






	return 0;
}