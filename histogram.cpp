#include <iostream>
#include <stack>
using namespace std;

void getMax(long long int hist[], stack<long long int> * s, long long int right,long long int & max) {
 long long  int i = s->top();
  long long int height = hist[i];
  s->pop();
 long long int left = (s->size() > 0) ? s->top() : -1;
  long long int area = height * (right - left);
  if (area > max) max = area;
}

void doHist(long long int hist[],long long int len) {
  stack<long long int> * s = new stack<long long int>;
  long long int i, max, top_v, right;

  max = 0;
  for (i = 0; i < len; i ++) {
    if (s->size() == 0) {
      s->push(i);
      continue;
    }

    top_v = hist[s->top()];
    if (hist[i] > top_v) {
      s->push(i);
    } else if (hist[i] < top_v) {
      while (s->size() > 0 && hist[i] < hist[s->top()]) {
        getMax(hist, s, i - 1, max);
      }
      s->push(i);
    }
  }

  while (s->size() > 0) getMax(hist, s, i - 1 , max);

  cout << max << endl;
}

int main() {
	ios::sync_with_stdio(false);
	long long  int n;
	while(1)
	{
	  cin>>n;
	  if(n==0)
			break;
	 long long int hist[n];
	for(int i=0;i<n;i++)
	{
		cin>>hist[i];
	}


	
    doHist(hist, sizeof(hist) / sizeof(int));
 
}
 return 0;
}
