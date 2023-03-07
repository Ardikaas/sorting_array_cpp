#include <iostream>

using namespace std;

void bubble(){

}

int main(int argc, char const *argv[])
{
  int temp;
  int arr[]={80, 21, 35, 42, 40, 15};
  int n = sizeof(arr)/sizeof(arr[0]);
  int min;
  int p;
  // ***Bubble sort*** //
  // cout << "bubble sort\n================" << endl;
  // cout << "unsorted array :" << endl;
  // for (int i = 0; i<n;i++){
  //   cout << arr[i] << "\t";
  // }
  // cout << "\n";

  // for (int i =0;i <n;i++){
  //   cout << "i : " << i << endl;
  //   cout << "arr[i] : " << arr[i] << endl;
  //   cin.get();
  //   for (int j=0;j<n;j++){
  //     cout << "arr[i] : " << arr[i] << endl;
  //     cout << "j : " << j << endl;
  //     cout << "arr[j] : " << arr[j] << endl;
  //     cin.get();
  //     if (arr[j] < arr[i]){
  //       temp = arr[i];
  //       cout << "temp : " << temp << endl;
  //       cin.get();
  //       arr[i] = arr[j];
  //       cout << "arr[i] : " << arr[i] << endl;
  //       cin.get();
  //       arr[j] = temp;
  //       cout << "arr[i] : " << arr[j] << endl;
  //       cin.get();
  //     }
  //     cout << "unsorted array :" << endl;
  //     for (int a = 0; a<n;a++){
  //       cout << arr[a] << "\t";
  //     }
  //     cout << "\n";
  //   }
  // }
  // cout << "\nsorted array :" << endl;
  // for (int i=0;i<n;i++){
  //   cout << arr[i] << "\t";
  // }
  // cout << "\n\n";
  // ***Bubble sort*** //

  // ***Selection sort*** //
  cout << "selection sort\n================" << endl;
  cout << "unsorted array :" << endl;
  for (int i = 0; i<n;i++){
    cout << arr[i] << "\t";
  }
  cout << "\n";
  for(int i=0;i<n-1;i++){
    cout << "arr[i] :" << arr[i] << endl;
    cin.get();
    min = arr[i];
    p = i;
    cout << "i : " << i << endl;
    cin.get();
    for(int j=i+1;j<n;j++){
      cout << min << " > " << arr[j] << "??" << endl;
      cin.get();
      if (min > arr[j]){
        cout << "ya!!" << endl;
        min = arr[j];
        cout << "arr[j] : " << arr[j] << endl;
        cin.get();
        p = j;
        cout << "j : " << j << endl;
        cin.get();
        cout << "unsorted array :" << endl;
        for (int i = 0; i<n;i++){
        cout << arr[i] << "\t";
        }
        cout << "\n";
      }
    }
    temp = arr[i];
    cout << "arr[i]" << arr[i] << endl;
    cin.get();
    arr[i] = arr[p];
    cout << "arr[p]" << arr[p] << endl;
    cin.get();
    arr[p] = temp;
    cout << "temp : " << temp << endl;
    cin.get();
  }
  cout << "\nsorted array :" << endl;
  for (int i=0;i<n;i++){
    cout << arr[i] << "\t";
  }
  cout << "\n\n";
  // ***Selection sort*** //

  // *** Insertion sort*** //
  // cout << "insertion sort\n================" << endl;
  // cout << "unsorted array :" << endl;
  // for (int i = 0; i<n;i++){
  //   cout << arr[i] << "\t";
  // }
  // for (int i=1;i<n;i++){
  //   temp = arr[i];
  //   p = i-1;

  //   while((temp<arr[p])&&(p>=0)){
  //     arr[p+1] = arr[p];
  //     p = p-1;
  //   }
  //   arr[p+1] = temp;
  // }
  // cout << "\nsorted array :" << endl;
  // for (int i=0;i<n;i++){
  //   cout << arr[i] << "\t";
  // }
  // *** Insertion sort*** //
  return 0;
}
