int main(){
         int arr[] = {1,2,3,4,5};
         for(int i = 0; i < 5; i++){
             cout<<arr[i]<<endl;
         }
    
         change(arr,5);
        
         for(int i = 0; i < 5; i++){
             cout<<arr[i]<<endl;
        }
    
         return 0;
    }
    