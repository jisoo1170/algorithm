#include <bits/stdc++.h>
using namespace std;

int heap[100005];
int len=0;

void add(int x){
    len++;
    heap[len] = x;

    int idx = len;
    while(idx != 1) {
        // 부모 인덱스
        int parent = idx/2;

        // 부모가 더 작으면 그만
        if(heap[parent] < heap[idx])
            break;
        // 부모가 더 큰 경우 위치를 바꿔준다
        swap(heap[parent], heap[idx]);
        idx = parent;
    }
    return;
}

// 가장 처음에 작은 원소를 두니까 그냥 리턴
int top() {
    if(len == 0)
        return 0;
    return heap[1];
}

void pop() {
    if(len == 0)
        return;

    // 가장 마지막 원소와 처음을 바꿔주고 len-1
    swap(heap[1], heap[len]);
    len--;
    int idx = 1;
    while(idx*2 <= len) {
        // 더 작은 자식 찾기
        int min = idx*2+1;
        // 가장 최솟값을 끝으로 보냈으니깐 길이보다 idx가 큰 경우 고려
        if(heap[idx*2] < heap[idx*2+1] or 2*idx+1 > len)
            min = idx*2;
        
        // 내가 더 작으면 멈추기
        if(heap[idx] < heap[min])
            break;
        // 내가 더 클 경우 자식과 바꿔주고 idx도 바꿔준다.
        swap(heap[idx], heap[min]);
        idx = min;
    }
    return;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    while(N--) {
        int x;
        cin >> x;
        if(x == 0) {
            cout << top() <<'\n';
            pop();
        }
        else {
            add(x);
        }
    }
}