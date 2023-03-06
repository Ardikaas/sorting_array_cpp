#include <iostream>

using namespace std;

void bubble(){

}

int main(int argc, char const *argv[])
{
  int temp;
  int arr[]={80, 21, 35, 42, 40, 15};
  int n = sizeof(arr)/sizeof(arr[0]);
  // ***Bubble sort*** //
  cout << "bubble sort\n================" << endl;
  cout << "unsorted array :" << endl;
  for (int i = 0; i<n;i++){
    cout << arr[i] << "\t";
  }
  cout << "\n";

  for (int i =0;i <n;i++){
    cout << "i : " << i << endl;
    cout << "arr[i] : " << arr[i] << endl;
    cin.get();
    for (int j=0;j<n;j++){
      cout << "arr[i] : " << arr[i] << endl;
      cout << "j : " << j << endl;
      cout << "arr[j] : " << arr[j] << endl;
      cin.get();
      if (arr[j] < arr[i]){
        temp = arr[i];
        cout << "temp : " << temp << endl;
        cin.get();
        arr[i] = arr[j];
        cout << "arr[i] : " << arr[i] << endl;
        cin.get();
        arr[j] = temp;
        cout << "arr[i] : " << arr[j] << endl;
        cin.get();
      }
      cout << "unsorted array :" << endl;
      for (int a = 0; a<n;a++){
        cout << arr[a] << "\t";
      }
      cout << "\n";
    }
  }
  cout << "\nsorted array :" << endl;
  for (int i=0;i<n;i++){
    cout << arr[i] << "\t";
  }
  cout << "\n\n";
  // ***Bubble sort*** //

  // ***Selection sort*** //
  int min;
  int p;
  cout << "selection sort\n================" << endl;
  cout << "unsorted array :" << endl;
  for (int i = 0; i<n;i++){
    cout << arr[i] << "\t";
  }

  for(int i=0;i<n-1;i++){
    min = arr[i];
    p = i;
    for(int j=i+1;j<n;j++){
      if (min > arr[j]){
        min = arr[j];
        p = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[p];
    arr[p] = temp;
  }
  cout << "\nsorted array :" << endl;
  for (int i=0;i<n;i++){
    cout << arr[i] << "\t";
  }
  cout << "\n\n";
  // ***Selection sort*** //
  return 0;
}
